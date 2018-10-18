/*
 * menorahinc.h
 *
 * Created: 10/18/2015 3:31:51 AM
 * revised 9/2018
 *  Author: Pin
 */ 


#ifndef MENORAHINC_H_
#define MENORAHINC_H_

//define ports for array
#define pportA 0x01B
#define pportB 0x018
#define pportD 0x012
//define LEDs for nights
#define eightN		PORTD3
#define seventhN	PORTD2
#define sixthN		PORTA0
#define fifthN		PORTA1
#define fourthN		PORTB7
#define thirdN		PORTB6 
#define secondN		PORTB5 
#define firstN		PORTB4
#define button		PORTB3
//progmem to put constant into flash to save stack space
const uint8_t ledPins []  PROGMEM =  {0, firstN, secondN, thirdN, fourthN, fifthN, sixthN, seventhN, eightN};//pins for each LED from V1
const uint8_t ledPorts []  PROGMEM = {0, pportB, pportB,  pportB, pportB,  pportA, pportA, pportD,   pportD} ;//ports matching LEDs from V1
//define functionsr
void turn_on_lights(int);
void setup_timer0_PWM();
void setup_timer1();
void shamash_fader();
void clear_lights();
void larson_scan();
void led_in_out();
void go_to_sleep();
void night_select();
void check_button();
void back_from_sleep();
#endif /* MENORAHINC_H_ */
