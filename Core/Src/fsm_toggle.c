#include"fsm_toggle.h"
#define ON 1
#define OFF 2
#define INIT 0
int STATUS_LED=INIT;
void fsm_toggle(void){
	switch(STATUS_LED){
		case INIT:
			HAL_GPIO_WritePin(LED_RED_GPIO_Port, LED_RED_Pin,1);
			STATUS_LED=ON;
			setTimer1(1000);
			break;
		case ON:
			HAL_GPIO_WritePin(LED_RED_GPIO_Port, LED_RED_Pin,0);
			if(timer1_flag==1){
				STATUS_LED=OFF;
				setTimer1(1000);
			}
			break;
		case OFF:
			HAL_GPIO_WritePin(LED_RED_GPIO_Port, LED_RED_Pin,1);
			if(timer1_flag==1){
				STATUS_LED=ON;
				setTimer1(1000);
			}
			break;
		default:
			break;
	}
}

