


/* USER CODE BEGIN 4*/
void HAL_TIM_PeriodElapsedCallback(TIM_HandleTypeDef *htim){
    timerRun();
    getKeyInput();
}
/* USER CODE END 4*/ 