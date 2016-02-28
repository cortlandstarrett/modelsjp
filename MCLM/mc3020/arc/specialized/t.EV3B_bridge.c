/*----------------------------------------------------------------------------
 * File:  EV3B_bridge.c
 *
 * Description:
 * Methods for bridging to an external entity.
 *
 * External Entity:  EV3Body (EV3B)
 * 
 * your copyright statement can go here (from te_copyright.body)
 *--------------------------------------------------------------------------*/

.if ( "EV3HRP" == te_thread.flavor )
#include "ev3api.h"
#include "app.h"

#if defined(BUILD_MODULE)
#include "module_cfg.h"
#else
#include "kernel_cfg.h"
#endif

#include "${te_file.types}.${te_file.hdr_file_ext}"
#include "EV3B_bridge.h"


#include "EV3M_bridge.h"
#include "EV3COL_bridge.h"
#include "EV3GYR_bridge.h"
#include "EV3TCH_bridge.h"
#include "EV3ULS_bridge.h"


void EV3B_Initialize(void)
{
	EV3M_Initialize();
	EV3COL_Initialize();
	EV3TCH_Initialize();
	EV3GYR_Initialize();
	EV3ULS_Initialize();
}
/*
 * Bridge:  get_battery_voltage
 */
i_t
EV3B_get_battery_voltage()
{
	return ev3_battery_voltage_mV();	
}


/*
 * Bridge:  get_battery_current
 */
i_t
EV3B_get_battery_current()
{
	return ev3_battery_current_mA();
}


/*
 * Bridge:  is_button_pressed
 */
bool
	EV3B_is_button_pressed( const button_t p_button )
{
  /* Replace/Insert the following instructions with your implementation code.  */
  /* RETURN TRUE */
	return ev3_button_is_pressed(p_button);	

}


/*
 * Bridge:  led_set_color
 */
void
EV3B_led_set_color( const ledcolor_t p_color )
{
	/* Replace/Insert your implementation code here... */

	ev3_led_set_color(p_color);
}


/*
 * Bridge:  speaker_play_file
 */
void
EV3B_speaker_play_file( const i_t p_duraration, c_t p_file[ESCHER_SYS_MAX_STRING_LEN] )
{
  /* Replace/Insert your implementation code here... */
	/* TODO :implement later */
}


/*
 * Bridge:  speaker_play_tone
 */
void
EV3B_speaker_play_tone( const i_t p_duraration, i_t * p_frequency )
{
  /* Replace/Insert your implementation code here... */
	/* TODO :implement later */

}


/*
 * Bridge:  speaker_set_volume
 */
void
EV3B_speaker_set_volume( const i_t p_volume )
{
  /* Replace/Insert your implementation code here... */

	/* TODO :implement later */

}


/*
 * Bridge:  speaker_stop
 */
void
EV3B_speaker_stop()
{
  /* Replace/Insert your implementation code here... */

	/* TODO :implement later */

}


/*
 * Bridge:  bluetooth_is_connected
 */
bool
EV3B_bluetooth_is_connected()
{
  /* Replace/Insert the following instructions with your implementation code.  */
  /* RETURN TRUE */

		/* TODO :implement later */

	{bool xtumlOALrv = TRUE;
  return xtumlOALrv;}
}


/*
 * Bridge:  image_load
 */
mclm_result_t
EV3B_image_load( c_t p_filename[ESCHER_SYS_MAX_STRING_LEN] )
{
  /* Replace/Insert the following instructions with your implementation code.  */
  /* RETURN OK */
	/* TODO :implement later */

	return MCLM_RESULT_OK;
}


/*
 * Bridge:  draw_image
 */
void
EV3B_draw_image( c_t p_filename[ESCHER_SYS_MAX_STRING_LEN], const i_t p_x, const i_t p_y )
{
		/* TODO :implement later */

  /* Replace/Insert your implementation code here... */
}


/*
 * Bridge:  lcd_draw_line
 */
void
EV3B_lcd_draw_line( const i_t p_x0, const i_t p_x1, const i_t p_y0, const i_t p_y1 )
{
	/* TODO :implement later */

	/* Replace/Insert your implementation code here... */
}


/*
 * Bridge:  lcd_draw_string
 */
void
EV3B_lcd_draw_string( c_t p_string[ESCHER_SYS_MAX_STRING_LEN], const i_t p_x, const i_t p_y )
{

	ev3_lcd_draw_string(p_string, p_x, p_y);
	
}


/*
 * Bridge:  lcd_fill_rect
 */
void
EV3B_lcd_fill_rect( const lcdcolor_t p_color, const i_t p_h, const i_t p_w, const i_t p_x, const i_t p_y )
{
  /* Replace/Insert your implementation code here... */
	/* TODO :implement later */

}


/*
 * Bridge:  lcd_set_font
 */
void
EV3B_lcd_set_font( const lcdfont_t p_font )
{
  /* Replace/Insert your implementation code here... */
	/* TODO :implement later */

}

c_t * EV3B_int_to_str( c_t str[ESCHER_SYS_MAX_STRING_LEN], const i_t val)
{
	sprintf(str,"%d",val);
	return str;
}

.end if


