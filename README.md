# Template-STM32
## Interrup timer 
- Cấu hình timer trong file `.ioc` (prescaler, period)
-  Tạo ra 2 file `software_timer.h` và `software_timer.c`
-  Trong hàm `main.c`: 
  ```
  HAL_TIM_Base_Start_IT(&htim2);  
  ```
  ```
  void HAL_TIM_PeriodElapsedCallback(TIM_HandleTypeDef *htim){
	timerRun();
}
  ```