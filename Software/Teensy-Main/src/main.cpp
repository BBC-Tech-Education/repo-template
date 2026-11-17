// Main controller: blinks the status LED to show the board is running.
// Replace this with your robot's program as you work through the course.

#include <Arduino.h>

#include "RobotConfig.h"

void setup()
{
    Serial.begin(115200);
    pinMode(robot::statusLedPin, OUTPUT);
    Serial.println("Robot starting...");
}

void loop()
{
    digitalWrite(robot::statusLedPin, HIGH);
    delay(250);
    digitalWrite(robot::statusLedPin, LOW);
    delay(250);
}
