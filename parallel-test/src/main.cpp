#include <Arduino.h>

void setup() {
    pinMode(GPIO_NUM_48, OUTPUT);
    Serial.begin(115200);
}

void loop() {
    analogWrite(GPIO_NUM_48, 255);
    Serial.println("Hello World!");
}