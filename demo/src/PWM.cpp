#include <Arduino.h>

int red = 11;
int blue = 10;
int green = 6;

void setup() {
  Serial.begin(9600);
  pinMode(red, OUTPUT);
  pinMode(blue, OUTPUT);
  pinMode(green, OUTPUT);
}

void loop() {
//  for(int i=0; i<=255; i++) {
//    analogWrite(red, i);
//    delay(1);
//  }
//  for(int i=0; i<=255; i++) {
//    analogWrite(green, i);
//    delay(1);
//  }
//  for(int i=0; i<=255; i++) {
//    analogWrite(blue, i);
//    delay(1);
//  }
  analogWrite(red, analogRead(A1)/4);
  analogWrite(green, analogRead(A2)/4);
  analogWrite(blue, analogRead(A3)/4);
  delay(100);
}
