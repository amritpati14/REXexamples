REST API - Remote Gate Opener example 
=====================================

This folder contains the source files for the demonstration project on communication between two REXYGEN targets
via REST API.

The project simulates remote gate opening using two stations with REXYGEN. Master Station is responsible
for commands towards Gate (Slave Station). Master Station also reads Gate status every 5s (can be configured by
"BIS:t2" parameter).

## Prerequisites ##
- *REXYGEN Runtime Core* must be installed and running on both target devices.
- Targets needs to be network accessible

## Running the example (same for both devices)##
- The **exec.mdl* file is the project main file.
- Open it with *REXYGEN Studio*.
- Change the target device parameter in "EXEC" block according to your HW. PC-Linux is default.
- Change IP address in parameter "url" inside "HTTP" blocks according to your slave targets IP settings.
- Compile and download corresponding projects to the target devices.
- Change "CNB_GATE_S1:YCN"  to "open the gate" and observe the display (wait for time delay specified
in the "Gate" subsystem in Slave Station).

## Documentation ##
- **Press F1 for help** on the selected function block in the *REXYGEN Studio*.
- [Getting started with REXYGEN on the Raspberry Pi minicomputer](https://www.rexygen.com/doc/PDF/ENGLISH/RexygenGettingStarted_RasPi_ENG.pdf)
- [Function blocks of REXYGEN](https://www.rexygen.com/doc/PDF/ENGLISH/BRef_ENG.pdf)
- [REXYGEN Studio User Guide](https://www.rexygen.com/doc/PDF/ENGLISH/RexygenStudio_ENG.pdf)
- [Complete documentation of REXYGEN](http://www.rexygen.com/documentation-and-support)

## Additional information ##
- Raspberry Pi is a trademark of the [Raspberry Pi Foundation](http://www.raspberrypi.org).
- Visit the [REXYGEN webpage](http://www.rexygen.com) 
for more information about the example projects and developing advanced 
automation and control solutions using REXYGEN.
- [MikroElektronika] (http://www.mikroe.com/)