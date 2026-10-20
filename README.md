
# EasyMicro

**Simple coding. Easy learning.**

EasyMicro is a beginner-friendly Arduino library designed to make microcontroller programming easier for students.

It provides simple lowercase functions for LED control and timing, reducing the need to remember standard Arduino commands.

## Features

- Simple LED control
- Easy pin setup
- Wait in seconds
- Wait in milliseconds
- Beginner-friendly lowercase functions
- Designed for Arduino Uno and ESP32

## Installation

1. Download or copy the EasyMicro library folder.
2. Place it inside your Arduino `libraries` directory.
3. Restart Arduino IDE.
4. Include the library in your sketch:

```cpp
#include <EasyMicro.h>
```

## Functions

### 1. ledsetup(pin)

Configures a pin as an output.

```cpp
ledsetup(13);
```

### 2. led(pin, state)

Controls an LED using `on` or `off`.

```cpp
led(13, on);
led(13, off);
```

### 3. wait(seconds)

Pauses the program for the specified number of seconds.

```cpp
wait(1);  // 1 second
wait(5);  // 5 seconds
```

### 4. waitms(milliseconds)

Pauses the program for the specified number of milliseconds.

```cpp
waitms(500);   // 500 milliseconds
waitms(1000);  // 1 second
```

## Example: LED Blink

```cpp
#include <EasyMicro.h>

void setup() {
    ledsetup(13);
}

void loop() {
    led(13, on);
    wait(1);

    led(13, off);
    waitms(500);
}
```

## Supported Boards

- Arduino Uno
- ESP32

The library uses Arduino-compatible APIs. Test the functions on your target board before using them in a larger project.

## Important Notes

- Function names are case-sensitive.
- `wait()` and `waitms()` are blocking functions.
- Check your board's pinout before connecting an LED.
- Use a suitable current-limiting resistor with a discrete LED.

## Project Goal

EasyMicro aims to help students learn microcontroller programming through simple, readable functions.

## Author

Harikrishnan

## Version

1.0.2
