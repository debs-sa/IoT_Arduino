#include <LiquidCrystal.h>

int RS = 8;
int E = 9;
int D4 = 10;
int D5 = 11;
int D6 = 12;
int D7 = 13;

LiquidCrystal lcd(RS, E, D4, D5, D6, D7);

void setup() {
  // put your setup code here, to run once:
lcd.begin(16, 2); //lcd 16x2 - 16 characters, 2 rows
}

void loop() {
  // put your main code here, to run repeatedly:
  //first exercise
//lcd.setCursor(0,0); //starts on character 0
//lcd.print("Hello World!");

//second exercise
lcd.setCursor(4, 0);
lcd.print("Welcome To");
lcd.setCursor(0,1);
lcd.print("IoT Class");
}
