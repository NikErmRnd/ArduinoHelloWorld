#include <Arduino.h>

void setup(){
    pinMode(13, OUTPUT);
}
void loop(){
    digitalWrite(8, HIGH);
    delay(600);
    digitalWrite(8, LOW);
    delay(600);
    digitalWrite(13, HIGH);
    delay(200);
    digitalWrite(13, LOW);
    delay(201);
}