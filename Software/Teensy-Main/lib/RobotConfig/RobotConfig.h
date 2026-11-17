#pragma once

#include <Arduino.h>

// Every pin and setting for the robot, in ONE place.
// Change these to match YOUR robot's wiring. Only main.cpp should include this file.
// Use them in your code as robot::statusLedPin.
namespace robot {

// ---- Status LED -----------------------------------------------------------------
// LED_BUILTIN is pin 13 on both the Teensy 4.1 and the Mega 2560.
constexpr uint8_t statusLedPin = LED_BUILTIN;

// ---- Add your robot's pins below --------------------------------------------------
// Each motor driver channel (L298N or VNH7070) uses three pins: INA, INB and PWM.
// Name them after the motor, e.g. frontLeftInaPin, frontLeftInbPin, frontLeftPwmPin.
// 08-Soccer and 08-Maze show a full RobotConfig.h for each kind of robot.

} // namespace robot
