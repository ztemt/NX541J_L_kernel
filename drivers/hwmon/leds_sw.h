#include "cust_leds.h"
#include "cust_leds_def.h"

#define LED_INCREASE_LED_LEVEL_MTKPATCH
/****************************************************************************
 * LED Variable Settings
 ***************************************************************************/
#define NLED_OFF 0
#define NLED_ON 1
#define NLED_BLINK 2
#define MIN_FRE_OLD_PWM 32	/* the min frequence when use old mode pwm by kHz */
#define PWM_DIV_NUM 8
#define ERROR_BL_LEVEL 0xFFFFFFFF

#if 0
struct nled_setting {
	u8 nled_mode;	/* 0, off; 1, on; 2, blink; */
	u32 blink_on_time ;
	u32 blink_off_time;
};//xiaofeng comment
#endif
#if 0  //alexander mod
enum mt65xx_pmic_pwm_number {
    PMIC_PWM_0 = 0,  
    PMIC_PWM_1 = 1,  
    PMIC_PWM_2 = 2
};
#endif

enum nubia_pmic_isink_step {
	ISINK_0 = 0,	/* 4mA */
	ISINK_1 = 1,	/* 8mA */
	ISINK_2 = 2,	/* 12mA */
	ISINK_3 = 3,	/* 16mA */
	ISINK_4 = 4,	/* 20mA */
	ISINK_5 = 5	/* 24mA */
};
enum mt65xx_pmic_isink_fsel {
	/* 32K clock */
    ISINK_1KHZ = 0,  
    ISINK_200HZ = 4,  
    ISINK_5HZ = 199,  
    ISINK_2HZ = 499,  
    ISINK_1HZ = 999,  
    ISINK_05HZ = 1999,  
    ISINK_02HZ = 4999,
    ISINK_01HZ = 9999,
	/* 2M clock */
    ISINK_2M_20KHZ = 2,
    ISINK_2M_1KHZ = 61,
    ISINK_2M_200HZ = 311,
    ISINK_2M_5HZ = 12499, 
    ISINK_2M_2HZ = 31249,
    ISINK_2M_1HZ = 62499
};
enum nubia_pmic_isink_mode {
	ISINK_PWM_MODE = 0,      
	ISINK_BREATH_MODE = 1,      
	ISINK_REGISTER_MODE = 2
};

/*****************PWM *************************************************/
/* extern int time_array[PWM_DIV_NUM]; */
/* extern u8 div_array[PWM_DIV_NUM]; //defined in leds_sw.h */
/* extern unsigned int backlight_PWM_div;// this para come from cust_leds. */

/****************************************************************************
 * structures
 ***************************************************************************/
#if 0
struct mt65xx_led_data {
	struct led_classdev cdev;
	struct cust_mt65xx_led cust;
	struct work_struct work;
	int level;
	int delay_on;
	int delay_off;
};
#endif
