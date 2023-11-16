
#include "button.h"

int button1_flag = 0;

int KeyReg0 = NORMAL_STARE;
int KeyReg1 = NORMAL_STARE;
int KeyReg2 = NORMAL_STARE;

int KeyReg3 = NORMAL_STARE; //trạng thái ổn đinh trước đó
int TimerForKeyPress = 200; //thời gian nhấn đè 2s để xử lý

void subKeyProcess(){
    button1_flag = 1;
}

void getKeyInput(){ //được gọi mỗi 10ms một lần
    KeyReg0 = KeyReg1;
    KeyReg1 = KeyReg2;
    KeyReg2 = HAL_GPIO_ReadPin(Button1_GPIO_Port, Button1_Pin);
    if((KeyReg0 == KeyReg1) && (KeyReg1 == KeyReg2)){   //trạng thái ổn định (trường hợp không nhấn gì thì vẫn đúng [1])
        if(KeyReg3 != KeyReg2){ //trường hợp nhấn thả
            KeyReg3 = KeyReg2;
            if(KeyReg2 == PRESSED_STATE){
                //TODO
                subKeyProcess();
                TimerForKeyPress = 200;
            }
        }
        else{   //Trường hợp nhấn đè
            TimerForKeyPress--;
            if(TimerForKeyPress == 0){
                KeyReg3 = NORMAL_STARE;
            }
        }
    }
}

int isButton1Pressed(){
    if(button1_flag == 1){
        button1_flag == 0;
        return 1;
    }
    return 0;
}