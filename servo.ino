#include <Servo.h>

Servo myservo;  
int potPin = A0; 
 

void setup() {
  myservo.attach(9);  
  Serial.begin(9600);
}

void loop() {
  int potValue = analogRead(potPin);      
  int angle = map(potValue, 0, 1023, 0, 180);  
  myservo.write(angle);  
  delay(100);  
}
