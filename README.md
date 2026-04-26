# ATmega8 Programming — Course Practical Experiments

This repository contains practical coursework and experiments developed for the Computer Interfacing and Microcontroller Lab (CSE 612, 1 Credit) at the Bachelor of Science in Computer Science and Engineering program. The companion theory course was CSE 611 (Computer Interfacing and Microcontroller, 3 Credit).

Author: Tonmoy

Overview
- A collection of small AVR/ATmega8 projects and lab exercises used during the
  course. Each experiment folder contains source files, listings and a
  `Makefile` for building the project.

Supported hardware
- Microcontroller: ATmega8 (or compatible)
- Peripherals used across experiments: 7-segment displays, LEDs, switches

Project structure
- 7 Segment and Atmega8a connections.txt — wiring notes
- 7 Segment Automatic/ — automatic 7-seg counter example
- 7 Segment Even Odd Digits Automatic/ — automatic display of even/odd digits
- 7 Segment Switch Control/ — manual switch-controlled 7-seg example
- LED Blinking/ — simple LED blink example
- LED Blinking Even-Odd/ — LED patterns for even/odd counts
- Simple Calculator Experiment/ — small calculator-like input/operation demo

Building and running
- Each experiment folder contains a `Makefile`. To build an experiment,
  change into the experiment folder and run:

  make

- The `Makefile` targets depend on the toolchain installed (AVR-GCC,
  avr-libc, avrdude, etc.). Use your usual AVR toolchain commands to flash
  the generated hex file onto an ATmega8 (for example, with `avrdude`).

Notes
- These projects were written as lab exercises for learning microcontroller
  programming and interfacing. They are intentionally small and focused on
  demonstrating specific concepts (timers, GPIO, multiplexing, simple I/O).
- Review the wiring notes in `7 Segment and Atmega8a connections.txt` before
  connecting any hardware.

License
- Feel free to reuse and adapt these examples for learning. No formal license
  is attached — contact the author for any redistribution questions.

Contact
- Author: Tonmoy Chandro Das
# ATmega8-Programming 
Computer Interfacing and Microcontroller Lab
