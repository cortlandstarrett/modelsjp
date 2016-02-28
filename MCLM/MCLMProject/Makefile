ROOT=/cygdrive/c/cygwin/nxtOSEK

BLUETOOTH=NXT::00:16:53:04:85:f5



# nxtOSEKルートディレクトリ
NXTOSEK_ROOT = ../../nxtOSEK
USER_SRC_DIR=user_code


# This sample could be stored in only ROM
#BUILD_MODE=RXE_ONLY
BUILD_MODE=ROM_ONLY

default:all



bt : all
	$(NXTOSEK_ROOT)/nexttool/NeXTTool.exe /BT /COM=BTH::$(BLUETOOTH) -download=pathfinder.rxe
	$(NXTOSEK_ROOT)/nexttool/NeXTTool.exe /BT /COM=BTH::$(BLUETOOTH) -listfile=pathfinder.rxe


all:
	
TARGET = pathfinder

# �C���N���[�h�p�X
USER_INC_PATH=. $(USER_SRC_DIR) $(NXTOSEK_ROOT)/ecrobot/nxtway_gs_balancer src

# ���C�u����
USER_LIB = nxtway_gs_balancer

# C�\�[�X�t�@�C��
BP_USER_SRCS_TMP= balancer_param.c



BP_USER_SRCS=$(addprefix $(USER_SRC_DIR)/,$(BP_USER_SRCS_TMP)) 
    
BP_GEN_SRCS=$(shell ls -1 src/*.c)
TARGET_SOURCES = $(filter-out $(addprefix src/,$(BP_USER_SRCS_TMP)), $(BP_GEN_SRCS) ) $(BP_USER_SRCS)
test:
	echo $(BP_GEN_SRCS)
	echo $(TARGET_SOURCES)
	
# TOPPERS/ATK(OSEK)�ݒ�t�@�C��
TOPPERS_OSEK_OIL_SOURCE=nxtosek.oil

# ���L�̃}�N���͕ύX���Ȃ��ł�������
O_PATH ?= build

include $(NXTOSEK_ROOT)/ecrobot/ecrobot.mak

BALANCER_ROOT=$(NXTOSEK_ROOT)/ecrobot/nxtway_gs_balancer


	
