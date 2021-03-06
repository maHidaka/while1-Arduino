#include "Keyboard.h"

#define url "raw.githubusercontent.com/maHidaka/while1-Arduino/main/code1.txt"

#define win 0x83

void put_url()
{
  Keyboard.print(url);
  delay(1000);
}

void launch_arduino()
{
  Keyboard.press(win);
  Keyboard.releaseAll();
  delay(500);
  Keyboard.write('a');
  Keyboard.write('r');
  Keyboard.write('d');
  Keyboard.write('u');
  delay(500);
  Keyboard.press('\n');
  Keyboard.releaseAll();
  delay(4000);
  Keyboard.press(KEY_LEFT_CTRL);
  Keyboard.press('n');
  Keyboard.releaseAll();
  delay(2000);
}

void get_code()
{
  Keyboard.press(win);
  Keyboard.releaseAll();
  delay(500);
  Keyboard.write('e');
  Keyboard.write('d');
  Keyboard.write('g');
  Keyboard.write('e');
  delay(500);
  Keyboard.press('\n');
  Keyboard.releaseAll();
  delay(3000);
  Keyboard.press(KEY_LEFT_CTRL);
  Keyboard.press('l');
  delay(500);
  Keyboard.releaseAll();
  put_url();
  Keyboard.press('\n');
  delay(100);
  Keyboard.releaseAll();
  delay(1000);
  Keyboard.press(KEY_LEFT_CTRL);
  Keyboard.press('a');
  delay(100);
  Keyboard.releaseAll();
  Keyboard.press(KEY_LEFT_CTRL);
  Keyboard.press('c');
  delay(100);
  Keyboard.releaseAll();
  delay(1000);
}

void back_arduino()
{
  Keyboard.press(KEY_LEFT_ALT);
  Keyboard.press(KEY_TAB);
  delay(100);
  Keyboard.releaseAll();
  delay(1000);
}

void paste()
{
  Keyboard.press(KEY_LEFT_CTRL);
  Keyboard.press('v');
  delay(100);
  Keyboard.releaseAll();
  delay(1000);
}

void del_all()
{
  Keyboard.press(KEY_LEFT_CTRL);
  Keyboard.press('a');
  Keyboard.releaseAll();
  Keyboard.write(KEY_BACKSPACE);
  Keyboard.releaseAll();
  delay(500);
}

void maximum()
{
  Keyboard.press(win);
  Keyboard.press(KEY_UP_ARROW);
  Keyboard.releaseAll();
}

void upload()
{
  Keyboard.press(KEY_LEFT_CTRL);
  Keyboard.press('u');
  delay(100);
  Keyboard.releaseAll();
  delay(2000);
  Keyboard.print("loop");
  delay(1000);
  Keyboard.write('\n');
  Keyboard.releaseAll();
}

void test()
{
  Keyboard.print("|~=");
}

void setup()
{
  pinMode(2, INPUT_PULLUP);
  delay(3000);
  Keyboard.begin();
  delay(1000);
  launch_arduino();
  maximum();
  del_all();
  get_code();
  back_arduino();
  paste();
  upload();
  //test();
}

void loop()
{
  delay(10);
}