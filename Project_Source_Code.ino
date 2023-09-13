
#define sensorDigital 2
#define LED 3
#define buzzer 4
#define Motor 9
#define sensorAnalog A1

#include <LiquidCrystal_I2C.h>
#include <Wire.h>
LiquidCrystal_I2C obj(0x27,16,2);

void setup() {
  pinMode(sensorDigital, INPUT);
  pinMode(LED, OUTPUT);
  pinMode(buzzer, OUTPUT);
  pinMode(Motor, OUTPUT);
  pinMode(sensorAnalog, INPUT);
  Serial.begin(9600);

  obj.init();
  obj.backlight();
  obj.clear();

}

void loop() {
  bool digital = digitalRead(sensorDigital);
  int analog = analogRead(sensorAnalog);
 
  Serial.print("Analog value : ");
  Serial.print(analog);
  Serial.print("t ");
  Serial.print("Digital value :");
  Serial.println(digital);
 
  if (digital == 0) {   
    digitalWrite(LED, HIGH);
    digitalWrite(buzzer, HIGH);
    analogWrite(Motor, 1);
    obj.clear();
    obj.setCursor(0,0);
    obj.print("Alcohol Detect");

  } else {
    digitalWrite(LED, LOW);
    digitalWrite(buzzer, LOW);
    analogWrite(Motor, 255);
    obj.clear();
    obj.setCursor(0,0);
    obj.print("Driving is Safe");
  }
}