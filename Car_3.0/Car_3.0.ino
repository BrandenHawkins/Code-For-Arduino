#include <Servo.h>
Servo myServo;
Servo myServo2;


void setup() {
  Serial.begin (9600);
  myServo.attach(13);
  myServo2.attach(12);
}

void loop() {
forword();
delay(1000);
left90();
delay(1000);
right90();
delay(1000);
}
