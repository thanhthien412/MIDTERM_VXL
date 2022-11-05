#include"7SEG.h"

void display7SEG(int num){
	if(num==0){
		HAL_GPIO_WritePin(LED7_0_GPIO_Port, LED7_0_Pin,0);
		HAL_GPIO_WritePin(LED7_1_GPIO_Port, LED7_1_Pin,0);
		HAL_GPIO_WritePin(LED7_2_GPIO_Port, LED7_2_Pin,0);
		HAL_GPIO_WritePin(LED7_3_GPIO_Port, LED7_3_Pin,0);
		HAL_GPIO_WritePin(LED7_4_GPIO_Port, LED7_4_Pin,0);
		HAL_GPIO_WritePin(LED7_5_GPIO_Port, LED7_5_Pin,0);
		HAL_GPIO_WritePin(LED7_6_GPIO_Port, LED7_6_Pin,1);
	}
	if(num==1){
		HAL_GPIO_WritePin(LED7_0_GPIO_Port, LED7_0_Pin,1);
		HAL_GPIO_WritePin(LED7_1_GPIO_Port, LED7_1_Pin,0);
		HAL_GPIO_WritePin(LED7_2_GPIO_Port, LED7_2_Pin,0);
		HAL_GPIO_WritePin(LED7_3_GPIO_Port, LED7_3_Pin,1);
		HAL_GPIO_WritePin(LED7_4_GPIO_Port, LED7_4_Pin,1);
		HAL_GPIO_WritePin(LED7_5_GPIO_Port, LED7_5_Pin,1);
		HAL_GPIO_WritePin(LED7_6_GPIO_Port, LED7_6_Pin,1);
	}
	if(num==2){
		HAL_GPIO_WritePin(LED7_0_GPIO_Port, LED7_0_Pin,0);
		HAL_GPIO_WritePin(LED7_1_GPIO_Port, LED7_1_Pin,0);
		HAL_GPIO_WritePin(LED7_2_GPIO_Port, LED7_2_Pin,1);
		HAL_GPIO_WritePin(LED7_3_GPIO_Port, LED7_3_Pin,0);
		HAL_GPIO_WritePin(LED7_4_GPIO_Port, LED7_4_Pin,0);
		HAL_GPIO_WritePin(LED7_5_GPIO_Port, LED7_5_Pin,1);
		HAL_GPIO_WritePin(LED7_6_GPIO_Port, LED7_6_Pin,0);
	}
	if(num==3){
		HAL_GPIO_WritePin(LED7_0_GPIO_Port, LED7_0_Pin,0);
		HAL_GPIO_WritePin(LED7_1_GPIO_Port, LED7_1_Pin,0);
		HAL_GPIO_WritePin(LED7_2_GPIO_Port, LED7_2_Pin,0);
		HAL_GPIO_WritePin(LED7_3_GPIO_Port, LED7_3_Pin,0);
		HAL_GPIO_WritePin(LED7_4_GPIO_Port, LED7_4_Pin,1);
		HAL_GPIO_WritePin(LED7_5_GPIO_Port, LED7_5_Pin,1);
		HAL_GPIO_WritePin(LED7_6_GPIO_Port, LED7_6_Pin,0);
	}
	if(num==4){
		HAL_GPIO_WritePin(LED7_0_GPIO_Port, LED7_0_Pin,1);
		HAL_GPIO_WritePin(LED7_1_GPIO_Port, LED7_1_Pin,0);
		HAL_GPIO_WritePin(LED7_2_GPIO_Port, LED7_2_Pin,0);
		HAL_GPIO_WritePin(LED7_3_GPIO_Port, LED7_3_Pin,1);
		HAL_GPIO_WritePin(LED7_4_GPIO_Port, LED7_4_Pin,1);
		HAL_GPIO_WritePin(LED7_5_GPIO_Port, LED7_5_Pin,0);
		HAL_GPIO_WritePin(LED7_6_GPIO_Port, LED7_6_Pin,0);
	}
	if(num==5){
		HAL_GPIO_WritePin(LED7_0_GPIO_Port, LED7_0_Pin,0);
		HAL_GPIO_WritePin(LED7_1_GPIO_Port, LED7_1_Pin,1);
		HAL_GPIO_WritePin(LED7_2_GPIO_Port, LED7_2_Pin,0);
		HAL_GPIO_WritePin(LED7_3_GPIO_Port, LED7_3_Pin,0);
		HAL_GPIO_WritePin(LED7_4_GPIO_Port, LED7_4_Pin,1);
		HAL_GPIO_WritePin(LED7_5_GPIO_Port, LED7_5_Pin,0);
		HAL_GPIO_WritePin(LED7_6_GPIO_Port, LED7_6_Pin,0);
	}
	if(num==6){
		HAL_GPIO_WritePin(LED7_0_GPIO_Port, LED7_0_Pin,0);
		HAL_GPIO_WritePin(LED7_1_GPIO_Port, LED7_1_Pin,1);
		HAL_GPIO_WritePin(LED7_2_GPIO_Port, LED7_2_Pin,0);
		HAL_GPIO_WritePin(LED7_3_GPIO_Port, LED7_3_Pin,0);
		HAL_GPIO_WritePin(LED7_4_GPIO_Port, LED7_4_Pin,0);
		HAL_GPIO_WritePin(LED7_5_GPIO_Port, LED7_5_Pin,0);
		HAL_GPIO_WritePin(LED7_6_GPIO_Port, LED7_6_Pin,0);
	}
	if(num==7){
		HAL_GPIO_WritePin(LED7_0_GPIO_Port, LED7_0_Pin,0);
		HAL_GPIO_WritePin(LED7_1_GPIO_Port, LED7_1_Pin,0);
		HAL_GPIO_WritePin(LED7_2_GPIO_Port, LED7_2_Pin,0);
		HAL_GPIO_WritePin(LED7_3_GPIO_Port, LED7_3_Pin,1);
		HAL_GPIO_WritePin(LED7_4_GPIO_Port, LED7_4_Pin,1);
		HAL_GPIO_WritePin(LED7_5_GPIO_Port, LED7_5_Pin,1);
		HAL_GPIO_WritePin(LED7_6_GPIO_Port, LED7_6_Pin,1);
	}
	if(num==8){
		HAL_GPIO_WritePin(LED7_0_GPIO_Port, LED7_0_Pin,0);
		HAL_GPIO_WritePin(LED7_1_GPIO_Port, LED7_1_Pin,0);
		HAL_GPIO_WritePin(LED7_2_GPIO_Port, LED7_2_Pin,0);
		HAL_GPIO_WritePin(LED7_3_GPIO_Port, LED7_3_Pin,0);
		HAL_GPIO_WritePin(LED7_4_GPIO_Port, LED7_4_Pin,0);
		HAL_GPIO_WritePin(LED7_5_GPIO_Port, LED7_5_Pin,0);
		HAL_GPIO_WritePin(LED7_6_GPIO_Port, LED7_6_Pin,0);
	}
	if(num==9){
		HAL_GPIO_WritePin(LED7_0_GPIO_Port, LED7_0_Pin,0);
		HAL_GPIO_WritePin(LED7_1_GPIO_Port, LED7_1_Pin,0);
		HAL_GPIO_WritePin(LED7_2_GPIO_Port, LED7_2_Pin,0);
		HAL_GPIO_WritePin(LED7_3_GPIO_Port, LED7_3_Pin,0);
		HAL_GPIO_WritePin(LED7_4_GPIO_Port, LED7_4_Pin,1);
		HAL_GPIO_WritePin(LED7_5_GPIO_Port, LED7_5_Pin,0);
		HAL_GPIO_WritePin(LED7_6_GPIO_Port, LED7_6_Pin,0);
	}
}
void reset7SEG(void){
	HAL_GPIO_WritePin(LED7_0_GPIO_Port, LED7_0_Pin,1);
	HAL_GPIO_WritePin(LED7_1_GPIO_Port, LED7_1_Pin,1);
	HAL_GPIO_WritePin(LED7_2_GPIO_Port, LED7_2_Pin,1);
	HAL_GPIO_WritePin(LED7_3_GPIO_Port, LED7_3_Pin,1);
	HAL_GPIO_WritePin(LED7_4_GPIO_Port, LED7_4_Pin,1);
	HAL_GPIO_WritePin(LED7_5_GPIO_Port, LED7_5_Pin,1);
	HAL_GPIO_WritePin(LED7_6_GPIO_Port, LED7_6_Pin,1);
}
