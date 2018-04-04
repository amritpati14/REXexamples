ThingSpeak API example
======================

The source files located in this folder illustrate the use of a HTTP function block.

Block HTTP is set up to send data to ThingSpeak channel via ThingSpeak API. ThingSpeak
channel can be used to visualize your data and access it from remote computers / devices.

## Note ##
This example can be easily modified to any other similar API which is using JSON formatting.

## Timing of the project ##
The algorithm runs each 500 milliseconds (0.5 s). See the EXEC function block,  
tick x ntick0 = 0.1 x 5 = 0.5 s

## Prerequisites ##
- *REXYGEN Runtime Core* must be installed and running on the target device.
- Registration (free) at ThingSpeak in order to get unique API key

## Running the example ##
- The **exec.mdl* file is the project main file.
- Open it with *REXYGEN Studio*.
- Specify your unique ThingSpeak API key into CNS_APIkey:scv. It will concatenate together with 
  parameter "url" of "HTTP" block whole GET request (https://api.thingspeak.com/update.json?api_key=your_API_key)
- Change the target device parameter in "EXEC" block according to your HW. PC-Windows is default.
- Compile and download it to the target device.
- Change CNB_TRIGGER_POST to ON and check https://thingspeak.com/channels/your_channel_ID to
see the posted data.

## Documentation ##
- **Press F1 for help** on the selected function block in the *REXYGEN Studio*.
- [ThingSpeak API documentation](https://www.mathworks.com/help/thingspeak/api-reference.html)
- [REXYGEN Studio User Guide](https://www.rexygen.com/doc/PDF/ENGLISH/RexygenStudio_ENG.pdf)
- [Complete documentation of REXYGEN](http://www.rexygen.com/documentation-and-support)

## Additional information ##
- Visit the [REXYGEN webpage](http://www.rexygen.com) 
for more information about the example projects and developing advanced 
automation and control solutions using REXYGEN.