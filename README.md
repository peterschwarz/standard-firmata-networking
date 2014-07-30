
# StandardFirmata - Ethernet

This firmware provides the StandardFirmata protocol over tcp via Ethernet. The socket is available on port 5000.  

Currently, the ip address is hardcoded to `192.168.2.100`.  This can be changed, or DHCP can be enabled by uncommenting out the line:

```
//#define DHCP 1
```

It has been tested with an Arduino Uno and the [Ethernet Shield](http://arduino.cc/en/Main/ArduinoEthernetShield).

See [here](http://firmata.org) find more information about Firmata.

## How to install and use

The full procedure is detailed in [INSTALL.md](./INSTALL.md).

## Credits

Started from the foundation of [Bare-Arduino-Project](https://github.com/WeAreLeka/Bare-Arduino-Project)

Inspiration and a bit of code (EthernetStream in particular) from [ArduinoCommander-ethernet](https://github.com/4ntoine/ArduinoCommander-ethernet)

##Copyright and License

```
The MIT License (MIT)

Copyright (c) 2014 Peter Schwarz

Permission is hereby granted, free of charge, to any person obtaining a copy
of this software and associated documentation files (the "Software"), to deal
in the Software without restriction, including without limitation the rights
to use, copy, modify, merge, publish, distribute, sublicense, and/or sell
copies of the Software, and to permit persons to whom the Software is
furnished to do so, subject to the following conditions:

The above copyright notice and this permission notice shall be included in all
copies or substantial portions of the Software.

THE SOFTWARE IS PROVIDED "AS IS", WITHOUT WARRANTY OF ANY KIND, EXPRESS OR
IMPLIED, INCLUDING BUT NOT LIMITED TO THE WARRANTIES OF MERCHANTABILITY,
FITNESS FOR A PARTICULAR PURPOSE AND NONINFRINGEMENT. IN NO EVENT SHALL THE
AUTHORS OR COPYRIGHT HOLDERS BE LIABLE FOR ANY CLAIM, DAMAGES OR OTHER
LIABILITY, WHETHER IN AN ACTION OF CONTRACT, TORT OR OTHERWISE, ARISING FROM,
OUT OF OR IN CONNECTION WITH THE SOFTWARE OR THE USE OR OTHER DEALINGS IN THE
SOFTWARE.
```

