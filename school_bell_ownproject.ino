/*By Quvonchbek Rayxonov*/
#include <Wire.h> 
#include <LiquidCrystal_I2C.h>
#include <virtuabotixRTC.h>                                                                              

LiquidCrystal_I2C lcd(0x27,16,2);  
virtuabotixRTC myRTC(6, 7, 8);

void setup()
{
  Serial.begin(9600);
  pinMode(2, OUTPUT);
  pinMode(3, INPUT);
  lcd.init();                       
  lcd.backlight();
  /*myRTC.setDS1302Time(25, 52, 17, 2, 21, 11, 2025); dasturga shu kod orqali hozirgi
  soatni arduinoga yuklanadi va uzmagan holda "myRTC.setDS1302Time(25, 52, 17, 2, 21, 11, 2025);"ni
  o'chirib tashlab dastur qayta yuklanadi*/
  // myRTC.setDS1302Time(25, 27, 11, 6, 22, 11, 2025); 

}


void loop()
{
  myRTC.updateTime();   
  lcd.clear();
  lcd.setCursor(0,0);
  lcd.print(myRTC.hours);
  Serial.print(myRTC.hours);
  Serial.print(":");
  lcd.print(':');
  lcd.print(myRTC.minutes);
  Serial.print(myRTC.minutes);
  Serial.print(":");
  lcd.print(':');
  lcd.print(myRTC.seconds);
  Serial.println(myRTC.seconds);
  schoolbell();
  if (digitalRead(3) == 1)
  {
    Serial.println("yondi");
    digitalWrite(2, 1);
  }
  delay(100);
}
void schoolbell()
{
  if (myRTC.hours == 8 && myRTC.minutes == 30 && myRTC.seconds > 0 && myRTC.seconds < 5 && myRTC.dayofweek > 0 && myRTC.dayofweek < 7) {
  digitalWrite(2, 1);
  delay(1000);
  digitalWrite(2, 0);
  delay(1000);
  }
  if (myRTC.hours == 9 && myRTC.minutes == 15 && myRTC.seconds > 0 && myRTC.seconds < 5 && myRTC.dayofweek > 0 && myRTC.dayofweek < 7) {
  digitalWrite(2, 1);
  delay(1000);
  digitalWrite(2, 0);
  delay(1000);
  }
  if (myRTC.hours == 9 && myRTC.minutes == 20 && myRTC.seconds > 0 && myRTC.seconds < 5 && myRTC.dayofweek > 0 && myRTC.dayofweek < 7) {
  digitalWrite(2, 1);
  delay(1000);
  digitalWrite(2, 0);
  delay(1000);
  }
  if (myRTC.hours == 10 && myRTC.minutes == 5 && myRTC.seconds > 0 && myRTC.seconds < 5 && myRTC.dayofweek > 0 && myRTC.dayofweek < 7) {
  digitalWrite(2, 1);
  delay(1000);
  digitalWrite(2, 0);
  delay(1000);
  }
  if (myRTC.hours == 10 && myRTC.minutes == 10 && myRTC.seconds > 0 && myRTC.seconds < 5 && myRTC.dayofweek > 0 && myRTC.dayofweek < 7) {
  digitalWrite(2, 1);
  delay(1000);
  digitalWrite(2, 0);
  delay(1000);
  }
  if (myRTC.hours == 10 && myRTC.minutes == 55 && myRTC.seconds > 0 && myRTC.seconds < 5 && myRTC.dayofweek > 0 && myRTC.dayofweek < 7) {
  digitalWrite(2, 1);
  delay(1000);
  digitalWrite(2, 0);
  delay(1000);
  }
  if (myRTC.hours == 11 && myRTC.minutes == 0 && myRTC.seconds > 0 && myRTC.seconds < 5 && myRTC.dayofweek > 0 && myRTC.dayofweek < 7) {
  digitalWrite(2, 1);
  delay(1000);
  digitalWrite(2, 0);
  delay(1000);
  }
  if (myRTC.hours == 11 && myRTC.minutes == 45 && myRTC.seconds > 0 && myRTC.seconds < 5 && myRTC.dayofweek > 0 && myRTC.dayofweek < 7) {
  digitalWrite(2, 1);
  delay(1000);
  digitalWrite(2, 0);
  delay(1000);
  }
  if (myRTC.hours == 12 && myRTC.minutes == 30 && myRTC.seconds > 0 && myRTC.seconds < 5 && myRTC.dayofweek > 0 && myRTC.dayofweek < 6) {
  digitalWrite(2, 1);
  delay(1000);
  digitalWrite(2, 0);
  delay(1000);
  }
  if (myRTC.hours == 13 && myRTC.minutes == 15 && myRTC.seconds > 0 && myRTC.seconds < 5 && myRTC.dayofweek > 0 && myRTC.dayofweek < 6) {
  digitalWrite(2, 1);
  delay(1000);
  digitalWrite(2, 0);
  delay(1000);
  }
  if (myRTC.hours == 13 && myRTC.minutes == 20 && myRTC.seconds > 0 && myRTC.seconds < 5 && myRTC.dayofweek > 0 && myRTC.dayofweek < 6) {
  digitalWrite(2, 1);
  delay(1000);
  digitalWrite(2, 0);
  delay(1000);
  }
  if (myRTC.hours == 14 && myRTC.minutes == 5 && myRTC.seconds > 0 && myRTC.seconds < 5 && myRTC.dayofweek > 0 && myRTC.dayofweek < 6) {
  digitalWrite(2, 1);
  delay(1000);
  digitalWrite(2, 0);
  delay(1000);
  }
  if (myRTC.hours == 14 && myRTC.minutes == 10 && myRTC.seconds > 0 && myRTC.seconds < 5 && myRTC.dayofweek > 0 && myRTC.dayofweek < 6) {
  digitalWrite(2, 1);
  delay(1000);
  digitalWrite(2, 0);
  delay(1000);
  }
  if (myRTC.hours == 14 && myRTC.minutes == 55 && myRTC.seconds > 0 && myRTC.seconds < 5 && myRTC.dayofweek > 0 && myRTC.dayofweek < 6) {
  digitalWrite(2, 1);
  delay(1000);
  digitalWrite(2, 0);
  delay(1000);
  }
  if (myRTC.hours == 15 && myRTC.minutes == 0 && myRTC.seconds > 0 && myRTC.seconds < 5 && myRTC.dayofweek > 0 && myRTC.dayofweek < 6) {
  digitalWrite(2, 1);
  delay(1000);
  digitalWrite(2, 0);
  delay(1000);
  }
  if (myRTC.hours == 17 && myRTC.minutes == 0 && myRTC.seconds > 0 && myRTC.seconds < 5 && myRTC.dayofweek > 0 && myRTC.dayofweek < 6) {
  digitalWrite(2, 1);
  delay(1000);
  digitalWrite(2, 0);
  delay(1000);
  }
  else {
  digitalWrite(2, 0);
  }
}