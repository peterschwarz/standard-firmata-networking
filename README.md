# Standard Firmata - Networking

Deploy Standard Firamta which uses a networking stream instead of the serial port.


## Installation

1. Install [PlatformIO](http://platformio.org/)
2. Build and upload to your device 
    
    ```
    platformio run --target upload
    ```

## Adding additional boards

Currently, the build supports the Arduino Uno.  If you'd like to add additional board targets,
see the PlatformIO [docs](http://docs.platformio.org/en/latest/platforms/index.html) and add
add your board. 
