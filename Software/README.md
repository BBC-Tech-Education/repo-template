# Software

Each microcontroller or camera on the robot gets its **own folder**, and each folder is a separate project.

| Folder | Runs on | Type |
| --- | --- | --- |
| [`Teensy-Main/`](Teensy-Main) | Teensy 4.1 | PlatformIO (C++) |
| [`OpenMV-Camera/`](OpenMV-Camera) | OpenMV camera | MicroPython |

Every pin and calibration number goes in `Teensy-Main/lib/RobotConfig/RobotConfig.h`, so there's only one place to change when the wiring changes.

## Mega 2560 teams

`Teensy-Main/` is set up for a Teensy 4.1. If your robot uses an Arduino Mega 2560:

1. In `Teensy-Main/platformio.ini`, delete the `[env:teensy41]` section and remove the `;` from the start of each line of the `[env:megaatmega2560]` section. The comments at the top of the file show you how.
2. Rename the folder from `Teensy-Main` to `Mega-Main`.
3. Change `Teensy-Main` to `Mega-Main` in `robot.code-workspace` (both places), in the table above and in the main `README.md`.

## No camera?

Delete the `OpenMV-Camera/` folder, remove it from `robot.code-workspace` and from the tables above and in the main `README.md`.

## Adding another microcontroller

1. Copy `Teensy-Main/` and rename the copy after its job, e.g. `STM32-Motors/` or `Teensy-Kicker/`.
2. Change the `[env]` section in its `platformio.ini` to the right board.
3. Add the folder to `robot.code-workspace` in the repository root, and to the table above.

Every PlatformIO project in this folder is built automatically on GitHub when you push. A ✅ or ❌ next to your commit shows whether the code compiled.

## Talking between boards

If two boards talk to each other (e.g. UART between the Teensy and a camera), write down the message format in a `PROTOCOL.md` here. That way both sides agree, and next year's team can understand it.
