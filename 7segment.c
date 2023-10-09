/* USER CODE BEGIN 0 */

// Define the pins for each segment (PB0 to PB6)
const uint8_t sevenSegPatterns[10] = {
    0b00111111, // 0
    0b00000110, // 1
    0b01011011, // 2
    0b01001111, // 3
    0b01100110, // 4
    0b01101101, // 5
    0b01111101, // 6
    0b00000111, // 7
    0b01111111, // 8
    0b01101111  // 9
};

void display7SEG(int digit) {
    // Set the appropriate pins based on the digit pattern
    HAL_GPIO_WritePin(GPIOB, GPIO_PIN_0, ((sevenSegPatterns[digit] >> 0) & 1) ^ 1);
    HAL_GPIO_WritePin(GPIOB, GPIO_PIN_1, ((sevenSegPatterns[digit] >> 1) & 1) ^ 1);
    HAL_GPIO_WritePin(GPIOB, GPIO_PIN_2, ((sevenSegPatterns[digit] >> 2) & 1) ^ 1);
    HAL_GPIO_WritePin(GPIOB, GPIO_PIN_3, ((sevenSegPatterns[digit] >> 3) & 1) ^ 1);
    HAL_GPIO_WritePin(GPIOB, GPIO_PIN_4, ((sevenSegPatterns[digit] >> 4) & 1) ^ 1);
    HAL_GPIO_WritePin(GPIOB, GPIO_PIN_5, ((sevenSegPatterns[digit] >> 5) & 1) ^ 1);
    HAL_GPIO_WritePin(GPIOB, GPIO_PIN_6, ((sevenSegPatterns[digit] >> 6) & 1) ^ 1);
}


/* USER CODE END 0 */