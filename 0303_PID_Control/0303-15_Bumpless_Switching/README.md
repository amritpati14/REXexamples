PIDU - Bumpless Switching
=========================

This folder contains the source files for the demonstration project on bumpless
switchnig between manual and automatic modes of a PID controller.

Actual set point value is stored in MCU_sp block and can be changed by CNB_sp_UP
and CNB_sp_DN blocks. Hand value can be controlled by CNB_hv_UP and CNB_hv_DN
blocks. The value is stored in MCU_hv block analogically. This block tracks the
manipulated variable (mv) of the PID controller (PIDU), so the bumples switching 
from AUT to MAN mode is possible. The process value (pv) is tracked with MCU_sp 
block, so switching from MAN to AUT mode can be done without bumps.   
 
## Timing of the project ##

The algorithm runs each 100 milliseconds (0.1 s). See the EXEC function block,  
tick x ntick0 = 0.05 x 2 = 0.1 

## Prerequisites ##
- *REXYGEN Runtime Core* must be installed and running on the target device.

## Running the example ##
- The **exec.mdl* file is the project main file.
- Open it with *REXYGEN Studio*, compile and download it to the target device.
- Switch to online mode and watch the algorithm.
- Open trend diagnostic window for the block TRND_Bumpless in bumpless_control task.
- Change the setpoint by CNB_sp_UP and CNB_sp_DN blocks. The hand value is 
tracked by controller output (from PIDU:mv to MCU_hv:tv).
- Switch the CNB_MAN on. Thanks to the tracking, bumpless switching from AUT to 
MAN mode can be done.
- Change the hand value by CNB_hv_UP and CNB_hv_DN blocks. The setpoint is 
tracked by the process output (MDL_PROCESS:y -> SSW_1 -> MCU_sp:tv).
- Switch the CNB_MAN off. Thanks to the tracking, bumpless switching from MAN to 
AUT mode can be done.

## Documentation ##

- **Press F1 for help** on the selected function block in the *REXYGEN Studio*.
- [PIDU function block documentation](https://www.rexygen.com/doc/ENGLISH/MANUALS/BRef/PIDU.html)
- [Function blocks of REXYGEN](https://www.rexygen.com/doc/PDF/ENGLISH/BRef_ENG.pdf)
- [REXYGEN Studio User Guide](https://www.rexygen.com/doc/PDF/ENGLISH/RexygenStudio_ENG.pdf)
- [Complete documentation of REXYGEN](http://www.rexygen.com/documentation-and-support)

## Additional information ##

- Visit the [REXYGEN webpage](http://www.rexygen.com) 
for more information about the example projects and developing advanced 
automation and control solutions using REXYGEN.