#include "button.h"


/* USER CODE BEGIN 2*/
HAL_TIM_Base_Start_IT(&htim2);
/* USER CODE END 2*/



/* USER CODE BEGIN WHILE*/

while (1)
{
    if(isButton1Pressed() == 1){
        //TODO
        HAL_GPIO_TogglePin(LED_RED_GPIO_Port), LED_RED_Pin);
    }
    /* USER CODE END WHILE*/

    /* USER CODE BEGIN 3*/
}
/* USER CODE END WHILE*/



/* USER CODE BEGIN 4*/
void HAL_TIM_PeriodElapsedCallback(TIM_HandleTypeDef *htim){
    timerRun();
    getKeyInput();
}
/* USER CODE END 4*/ 