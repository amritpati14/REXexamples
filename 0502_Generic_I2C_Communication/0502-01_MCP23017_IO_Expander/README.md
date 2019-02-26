Using the MCP23017 I/O expander 
===============================

This folder contains the source files for working with the GPIO pins of the
MCP23017 16-bit I/O expander via I2C bus (e.g. on the Raspberry Pi or ALIX). 
The example is based on the REXLANG user-programmable function block of the REXYGEN System. 

The GPIO port A is used for digital outputs. The GPIO port B is used for digital
inputs with the internal pull-up resistors enabled. 

## Timing of the project ##

The algorithm runs each 200 milliseconds (0.2 s). See the EXEC function block,  
tick x ntick0 = 0.1 x 2 = 0.2 

## Prerequisites ##
- *REXYGEN Runtime Core* must be installed and running on the target device (Raspberry Pi).
- I2C bus must be enabled and available (e.g. /dev/i2c-1).
- The wiring must comply with the attached datasheet. 

## Running the example ##
- The **exec.mdl* file is the project main file.
- Open it with *REXYGEN Studio*.
- Specify the I2C bus by the p0 parameter of the REXLANG function block.
- Compile and download it to the target device.
- Switch to online mode and watch the algorithm.
- Enable online monitoring of the CNB_GPA blocks (Target->Watch Selection) and 
the BDOCT_GPIOB block.
- Toggle the CNB_GPA constants and observe the pins of the MCP23017 I/O 
expander.
- Apply external voltage to GPIOB pins and observe the outputs of BDOCT_GPIOB 
block.  

## Documentation ##

- **Press F1 for help** on the selected function block in the *REXYGEN Studio*.
- [Getting started with REXYGEN on the Raspberry Pi minicomputer](https://www.rexygen.com/doc/PDF/ENGLISH/RexygenGettingStarted_RasPi_ENG.pdf)
- [Function blocks of REXYGEN](https://www.rexygen.com/doc/PDF/ENGLISH/BRef_ENG.pdf)
- MCP23017 datasheet (attached)
- [REXYGEN Studio User Guide](https://www.rexygen.com/doc/PDF/ENGLISH/RexygenStudio_ENG.pdf)
- [Complete documentation of REXYGEN](http://www.rexygen.com/documentation-and-support)

## Additional information ##

- Raspberry Pi is a trademark of the [Raspberry Pi Foundation](http://www.raspberrypi.org).
- Visit the [REXYGEN webpage](http://www.rexygen.com) 
for more information about the example projects and developing advanced 
automation and control solutions using REXYGEN.


