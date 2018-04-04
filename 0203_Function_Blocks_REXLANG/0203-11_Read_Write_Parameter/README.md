REXLANG read / write parameter example
======================================

The source files located in this folder illustrate the use of a REXLANG function block
in order to get and set input/output/parameter of arbitrary block in REXYGEN.

On change of CNI1, CNR1 or CNS1 values REXLANG will set values of corresponding blocks
(CNI, CNR, CNS). REXLANG will also get values from CNI, CNR, CNS and write it to REXLANG
outputs.

## Timing of the project ##

The algorithm runs each 100 milliseconds (0.1 s). See the EXEC function block,  
tick x ntick0 = 0.05 x 2 = 0.1 s

## Prerequisities ##
- *REXYGEN Runtime Core* must be installed and running on the target device.

## Running the example ##
- The **exec.mdl* file is the project main file.
- Open it with *REXYGEN Studio*.
- Compile and download it to the target device.
- Change CNI1, CNR1 or CNS1. Observe changes.

## Documentation ##

- **Press F1 for help** on the selected function block in the *REXYGEN Studio*.
- [REXYGEN Studio User Guide](https://www.rexygen.com/doc/PDF/ENGLISH/RexygenStudio_ENG.pdf)
- [Complete documentation of REXYGEN](http://www.rexygen.com/documentation-and-support)

## Additional information ##

- Visit the [REXYGEN webpage](http://www.rexygen.com) 
for more information about the example projects and developing advanced 
automation and control solutions using REXYGEN.