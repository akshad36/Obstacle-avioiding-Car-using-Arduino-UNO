#include <LiquidCrystal.h> //
LiquidCrystal lcd(11,12,7,5,6,4); // (rs enable,d4,d5,d6,d7)
const int trigPin=9;
const int echoPin=10;
 int distanceCm, distanceInch;
 void setup() {
   lcd.begin(16,2);
   pinMode(tirgPin,OUTPUT)
   pinMode(echopPin,INPUT)
 }
 void loop( {
   Serial.begin(9600);
   digitalWrite(trigPin,LOW);
   delayMicroseconds(2);
   digitalWrite(trigpin,HIGH);
   delayMicroseconds(10);
   digitalWrite(tirgPin,LOW);
   duration=pulseIn(echopin,HIGH);
   distanceCm=duration*0.034/2;
   distanceInch=duration*0.0133/2;
   Serial.println(distanceInch);
   lcd.setCursor(0,0);//Sets the location at which subscequent text written to the LCD will be displayed
   lcd.print("Distance");
   lcd.print(distanceCm);
   lcd.print("cm");
   delay(10);lcd.setCursor(0,1);
 })
