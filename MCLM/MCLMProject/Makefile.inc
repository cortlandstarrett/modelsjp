# Makefile.inc
# This is for EV3
#
APPLNAME=app
USER_CODE_DIR=ev3_user_code
USER_SRCS=$(shell ls -1 $(APPLDIR)/$(USER_CODE_DIR)/*.c)
USER_SRCS_TMP=$(notdir $(USER_SRCS))
APPL_COBJS_TMP = $(filter-out $(addprefix $(APPLDIR)/src/,$(USER_SRCS_TMP)),$(shell ls -1 $(APPLDIR)/src/*.c)) $(USER_SRCS)
APPL_COBJS_TMP2=$(patsubst %.c,%.o,$(APPL_COBJS_TMP))
APPL_COBJS+=$(notdir $(APPL_COBJS_TMP2))
APPL_COBJS_FILE=$(notdir $(APPL_COBJS_TMP2)) $(APPLNAME).o
INCLUDES+=-I$(APPLDIR)/src -I$(APPLDIR)/$(USER_CODE_DIR)
APPL_DIR=$(APPLDIR)/$(USER_CODE_DIR) $(APPLDIR)/src 
SRCDIRS+=$(APPL_DIR)

SRCDIR=../..

ifdef app
default:app
endif
ifdef img
default:img
endif


$(APPLDIR)/app.cfg:$(APPLDIR)/app.cfg.tmp
	@echo $(APPL_COBJS_FILE)
	@cp $< $@
	@for f in $(APPL_COBJS_FILE); do \
		echo "ATT_MOD(\"$$f\");" >> $@; \
	done

img:$(APPLDIR)/app.cfg
app:$(APPLDIR)/app.cfg