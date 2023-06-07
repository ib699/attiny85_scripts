#include "DigiKeyboard.h"

int count=0;

void setup() {
    DigiKeyboard.delay(750);
    DigiKeyboard.sendKeyStroke(0);
    DigiKeyboard.sendKeyStroke(KEY_R, MOD_GUI_LEFT);
    DigiKeyboard.delay(100);
    DigiKeyboard.println("cmd");
    DigiKeyboard.delay(100);
    DigiKeyboard.println("dir");
}

void loop() {
   DigiKeyboard.update();
}
