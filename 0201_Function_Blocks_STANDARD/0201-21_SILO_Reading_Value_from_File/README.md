Reading value from a text file 
==============================

This folder contains the source files for the demonstration project on reading
values from a text file. This is useful for using external data as an input to 
the control algorithm.

The SILO block reads a single value from a text file. The filename is given by 
the fname parameter (*value.txt* in this example). The path is relative to the 
data directory on the target device. By default it is /rex/data on Linux 
machines and C:\ProgramData\REX Controls\REX_active_version\*REXYGEN Runtime Core*\data on 
Windows machines. The SILO block can read the value continuously (CSF=on) or 
only when a trigger signal occurs (CSF=off).

Both SILO blocks read the data from the same file to demonstrate the two 
different modes. In real projects, you will most probably have one file for each
SILO block. You can use as many external files as needed.
 
## Timing of the project ##

The algorithm runs each 250 milliseconds (0.25 s). See the EXEC function block,  
tick x ntick0 = 0.05 x 5 = 0.25 

## Prerequisites ##
- *REXYGEN Runtime Core* must be installed and running on the target device.
- A text file named *value.txt* must be present in the data directory (/rex/data
on Linux and C:\ProgramData\REX Controls\REX_active_version\*REXYGEN Runtime Core*\data on 
Windows machines by default). 

## Running the example ##
- The **exec.mdl* file is the project main file.
- Open it with *REXYGEN Studio*, compile and download it to the target device.
- Switch to Watch mode.
- Change the value in the text file.
- Tick the BSTATE parameter of the MP_TRIGGER function block to generate a 
trigger for the SILO_triggered function block.
- Observe the Display readings. 

## Documentation ##

- **Press F1 for help** on the selected function block in the *REXYGEN Studio*.
- [SILO function block documentation](https://www.rexygen.com/doc/ENGLISH/MANUALS/BRef/SILO.html)
- [Function blocks of REXYGEN](https://www.rexygen.com/doc/PDF/ENGLISH/BRef_ENG.pdf)
- [REXYGEN Studio User Guide](https://www.rexygen.com/doc/PDF/ENGLISH/RexygenStudio_ENG.pdf)
- [Complete documentation of REXYGEN](http://www.rexygen.com/documentation-and-support)

## Additional information ##

- Visit the [REXYGEN webpage](http://www.rexygen.com) 
for more information about the example projects and developing advanced 
automation and control solutions using REXYGEN.