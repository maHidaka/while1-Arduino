#include "Keyboard.h"

#define ctrl 0x80
#define win 0x83
#define KEY_BACKSPACE 0xB2
#define KEY_UP_ARROW 0xDA

void start()
{
  Keyboard.press(win);
  Keyboard.releaseAll();
  delay(500);
  Keyboard.press('a');
  Keyboard.press('r');
  Keyboard.press('d');
  Keyboard.press('u');
  Keyboard.releaseAll();
  delay(500);
  Keyboard.press('\n');
  Keyboard.releaseAll();
  delay(4000);
  Keyboard.press(ctrl);
  Keyboard.press('n');
  Keyboard.releaseAll();
  delay(2000);
}

void del_all()
{
  Keyboard.press(ctrl);
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
void source()
{
  delay(1000);
  Keyboard.println("#include <Keyboard.h>");
  Keyboard.print("void setup*");
  Keyboard.write(0x28);
  Keyboard.write(0x7d);
  Keyboard.write('\n');
  Keyboard.print("  Keyboard.begin*");
  Keyboard.write(0x28);
  Keyboard.println(";");
  Keyboard.print("  delay*1000");
  Keyboard.write(0x28);
  Keyboard.println(";");
  Keyboard.print("  Keyboard.press*0x80");
  Keyboard.write(0x28);
  Keyboard.println(";");
  Keyboard.print("  Keyboard.press*0x61");
  Keyboard.write(0x28);
  Keyboard.println(";");
  Keyboard.print("  ");
  Keyboard.print("Keyboard.release");
  delay(10);
  Keyboard.print("All*");
  Keyboard.write(0x28);
  Keyboard.println(";");
  Keyboard.print("  Keyboard.write*0xB2");
  Keyboard.write(0x28);
  Keyboard.println(";");
  Keyboard.print("  Keyboard.releaseAll*");
  Keyboard.write(0x28);
  Keyboard.println(";");
  Keyboard.print("  delay*500");
  Keyboard.write(0x28);
  Keyboard.println("|");
}

void test()
{
  /*
  char key = 0x00;
  while(key<=0xFF){
    delay(100);
    Keyboard.write(key);
    Keyboard.println(long(key));
    key++;
  }
  */
  Keyboard.write(0X7d);
}
void setup()
{
  pinMode(2, INPUT_PULLUP);
  Keyboard.begin();
}

void loop()
{
  while (digitalRead(2) == HIGH)
  {
    delay(50);
  }
  delay(1000);
  // start();
  //maximum();
  // del_all();
  source();
  //test();
}