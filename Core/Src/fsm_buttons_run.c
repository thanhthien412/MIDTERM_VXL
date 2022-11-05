#include "fsm_buttons_run.h"
#define RESET 0
#define INC 1
#define DEC 2
#define  PRESSED 0
#define PRESSED_3S 1
#define RELEASE -1
#define INIT -2
int counter=0;
int counter_10S=0;
int first_time_release=0;
int check_3s=1;
int STATUS=INIT;

void fsm_simple_buttons_run(void){
	switch(STATUS){
		case INIT:
			STATUS=RELEASE;
			break;
		case PRESSED:
			counter_10S=0;
			first_time_release=1;
			if(press_or_press3s()==PRESSED_3S){
				STATUS=PRESSED_3S;
			}else if(press_release()==RELEASE){
				STATUS=RELEASE;
			}else {
							switch(which_button_press()){
								case RESET:
									counter=0;
									break;
								case INC:
									counter++;
									break;
								case DEC:
									counter--;
									break;
								default:
									break;
							}
							if(counter <0) counter=9;
							if(counter >9) counter=0;
							display7SEG(counter);
			}

			break;
		case PRESSED_3S:
			counter_10S=0;
			first_time_release=1;
			if(press_release()==RELEASE){
				STATUS=RELEASE;
			}else{
				switch(which_button_press3s()){
					case INC:
						if(check_3s==1){
							counter++;
							setTimer2(1000);
							check_3s=0;
						}
						if(timer2_flag==1){
							counter++;
							setTimer2(1000);
						}
						break;
					case DEC:
						if(check_3s==1){
							counter--;
							setTimer2(1000);
							check_3s=0;
						}
						if(timer2_flag==1){
							counter--;
							setTimer2(1000);
						}
						break;
					default:
						break;
				}
				if(counter <0) counter=9;
				if(counter >9) counter=0;
				display7SEG(counter);
			}
			break;
		case RELEASE:
			if(press_or_press3s()==PRESSED){
				STATUS=PRESSED;
			}else{
				if(first_time_release==1){
								first_time_release=0;
								setTimer2(1000);
							}
							if(timer2_flag==1){
								counter_10S++;
								if(counter_10S>=10){
									if(counter>0) counter--;
								}
								setTimer2(1000);
							}
							display7SEG(counter);
			}
			break;
		default:
			break;
	}
}






