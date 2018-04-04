EPC - sending e-mail notifications from Linux 
=============================================
 
This is an example on sending e-mail notifications from Linux machines. The 
example is based on the EPC function block, which requires a licence for 
advanced function blocks.

**For basic e-mail notifications please refer to example 0202-10 on using the 
SMTP function block.**

The execution of the external program is triggered by the EXEC input of the EPC
function block. In this example the external program is a Python script located 
in /rex/rexcore/email_notification.py (the *cmd* parameter of the EPC function 
block). 

The EPC function block requires at least one input is connected although no data
is passed to the script. That's why the RTOV function block is present. Later 
you can use it to include process data in your notification e-mail. The data is 
passed through a text file, in this case /rex/data/epc_datain.txt (the *ifns*
parameter of the EPC function block). 

Remember that **frequent writes to SD cards or compact flash disks can corrupt 
your storage medium**. Consider using tmpfs (ramdisk) for working files of the 
EPC function block. You will need to define a symlink to e.g. /tmp or /run/tmp 
inside the /rex/rexcore directory.

## Timing of the project ##

The algorithm runs each 500 milliseconds (0.5 s). See the EXEC function block,  
tick x ntick0 = 0.1 x 5 = 0.5 

## Prerequisites ##
- *REXYGEN Runtime Core* and AdvBlk modules must be installed and running on the target device.
- A valid licence for advanced function blocks is required.
- Configure e-mail settings in the .py file.
- Copy the .py file to /rex/rexcore on the target device.

## Running the example ##
- The **exec.mdl* file is the project main file.
- Open it with *REXYGEN Studio*, compile and download it to the target device.
- Switch to online mode and watch the algorithm.
- Enable online monitoring of the EPC block (Target->Watch Selection).
- Change CNB_TRIGGER to ON.
- Check your inbox for incoming e-mail notification.
- Toggle the CNB_TRIGGER Boolean constant again to send another e-mail. 

## Documentation ##

- **Press F1 for help** on the selected function block in the *REXYGEN Studio*.
- [EPC function block documentation](https://www.rexygen.com/doc/ENGLISH/MANUALS/BRef/EPC.html)
- [Function blocks of REXYGEN](https://www.rexygen.com/doc/PDF/ENGLISH/BRef_ENG.pdf)
- [REXYGEN Studio User Guide](https://www.rexygen.com/doc/PDF/ENGLISH/RexygenStudio_ENG.pdf)
- [Complete documentation of REXYGEN](http://www.rexygen.com/documentation-and-support)

## Additional information ##

- Visit the [REXYGEN webpage](http://www.rexygen.com) 
for more information about the example projects and developing advanced 
automation and control solutions using REXYGEN.