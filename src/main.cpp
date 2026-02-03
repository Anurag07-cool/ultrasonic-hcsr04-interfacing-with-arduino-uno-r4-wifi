#include <Arduino.h>
#define trioPin 9
#define echoPin 10
void setup() {
// write your initialization code here
    pinMode(trioPin, OUTPUT);
    pinMode(echoPin, INPUT);
}

void loop() {
// write your code
    digitalWrite(trioPin, LOW);
    delayMicroseconds(2);
    digitalWrite(trioPin, HIGH);
    delayMicroseconds(10);
    digitalWrite(trioPin, LOW);
    long duration = pulseIn(echoPin, HIGH);
    long distance = duration * 0.034/2;
    Serial.println("distance: ");
    Serial.println(distance);
    Serial.println(" cm");
    delay(1000);
}