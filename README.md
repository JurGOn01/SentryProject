# SentryGun Project

SentryGun Project is a hobby spotenous project to make a Sentry Gun.

This project has been inspired by challenge and the TF2 and Deep Rock Glactic game.

Project aims to have a working Sentry Gun alike those mention games.
It won't be trying to replicate exactly the same santry guns that are in those games; it is more of inspiration.

## Capture of Requirements

### System Level Requirements

1. The system shall have gun like mechanism to shoot bullets at the target.

2. The system shall have moving parts such that the system's gun can move in XY axis.

3. The system shall be controlled by the user with a use of controller.

4. The system shall have own power storage to run without power from mains.

5. The system shall have apperance and functionality as close to the Sentry Gun from Deep Rock Galactic.

### Hardware Requirements

1. The system shall have servor motors to move the gun element in XY axis,

2. The system shall have running time of 8 hours when running idle and minimum of 1 hours at continous firing,

3. The system shall be controlled via use of IR remote; instrucing the system to go from STAND-BY state to ON state and allow for bullet firing.

4. The system shall have object detection using the ESP32-CAM-MB to detect the target.

5. The system shall be controlled by the Arduino UNO ECO.

6. The system must use laser to indicate where the gun is pointing.

7. The system shall have a electronic display to show the remianing bullets in the magazine

### Software Requirements

1. The software shall have 2 modes of operation: STAND-BY and ON.
- STAND-BY state occurs when the system is not trying to detect the target 
- ON state occurs when the system is acitivly searching for target.

2. The software shall be written in C / Arduino langauge that Arduino UNO and ESP32 can accept.

3. The software shall establish communication between Arduino UNO and ESP32 CAM



### List Of Components

- ESP32-CAM module 
- Arduino UNO 
- IR reciver
- IR transmitor (remote)
- Flash light
- Buck Converters
- Laser 
- Servo motors x2 (X and Y), 1x 360 and 1x 180
- lithium battery 12V (Main battery)
- 2 electric motor guns		
- 3D parts - X and Y gun moving.



## Background Research
ESP32 CAM - https://www.youtube.com/watch?v=visj0KE5VtY
Comms between ESP32-CAM and Arduino Uno - https://forum.arduino.cc/t/serial-communication-between-esp32-cam-and-arduino-uno/935074
How relay works:
https://www.youtube.com/watch?v=n594CkrP6xE
https://www.geya.net/5v-relay-module-how-it-works-and-application/

ESP32-CAM and OpenVC - https://how2electronics.com/esp32-cam-based-object-detection-identification-with-opencv/
- essentially, ESP32 makes a webserver and the OpenVC does object detection with pyhton... need to understand the tech more tho...
https://www.youtube.com/watch?v=7qPIRBY6C8c
https://www.youtube.com/watch?v=QQEvL_pElOg
https://www.youtube.com/watch?v=XBRTx1N7o-8
https://www.youtube.com/watch?v=29PKDYjxmL0&t=1s

![](/Imgs/Serial%20connection%20ATMEGA328%20%26%20ESP-32%20CAM%20.png)

lithium battery charging - https://batteryuniversity.com/article/bu-409-charging-lithium-ion

##List of components


