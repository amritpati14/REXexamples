Click board current loop example 
================================

This folder contains the source files for the demonstration project on current
loop using Click boards "4-20 mA T click board" and "4-20 mA R click board".

The project shows how to configure current loop between two standalone devices
(e.g. Raspberry Pi) with transmitter and receiver connected by pair of wires.

## Prerequisites ##
- *REXYGEN Runtime Core* must be installed and running on both target devices (e.g. Raspberry Pi).
- SPI bus must be enabled and available on both target devices (e.g. /dev/spidev0.0).
- Click boards installed on target devices (e.g. Pi click shield for Raspberry Pi or directly to SPI pins)
- The wiring between transmiter and receiver (current loop).


## Running the example (same for both devices)##
- The **exec.mdl* file is the project main file.
- Open it with *REXYGEN Studio*.
- Specify the SPI bus by the "p0" parameter of the REXLANG function block.
- Compile and download corresponding project to the target device according to the installed click board.
- Setup desired current by "CNR_current" in "4_20mA_T_click_task" (transmitter) and see the output of "LIN" block
in "4_20mA_R_click_task" (receiver).

## Documentation ##
- **Press F1 for help** on the selected function block in the *REXYGEN Studio*.
- [Getting started with REXYGEN on the Raspberry Pi minicomputer](https://www.rexygen.com/doc/PDF/ENGLISH/RexygenGettingStarted_RasPi_ENG.pdf)
- [Function blocks of REXYGEN](https://www.rexygen.com/doc/PDF/ENGLISH/BRef_ENG.pdf)
- [4-20 mA R click board] (http://www.mikroe.com/click/4-20ma-r/)
- [4-20 mA T click board] (http://www.mikroe.com/click/4-20ma-t/)
- MCP24921 datasheet, MCP3201 datasheet (attached in transmitter and receiver folders)
- [REXYGEN Studio User Guide](https://www.rexygen.com/doc/PDF/ENGLISH/RexygenStudio_ENG.pdf)
- [Complete documentation of REXYGEN](http://www.rexygen.com/documentation-and-support)

## Additional information ##
- Raspberry Pi is a trademark of the [Raspberry Pi Foundation](http://www.raspberrypi.org).
- Visit the [REXYGEN webpage](http://www.rexygen.com) 
for more information about the example projects and developing advanced 
automation and control solutions using REXYGEN.
- [MikroElektronika] (http://www.mikroe.com/)