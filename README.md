# OGC.Engineering
### ogc_hw_deskpi_picomate - hardware description for the DeskPi PicoMate development platform
developer contact - dustin ( at ) ogc.engineering

---

## Description:
* Hardware description definitions for OGC.Engineering C based layered development
* Development baseboard for the Raspberry Pi RP2040 Pico and Pico-W 
* Documentation can be found at https://wiki.deskpi.com/picomate/
* Features:
```
Built-in battery connector for on-the-go projects

Grove expansion ports have 3V3 and Ground along with the following GPIO
    * see Pin Resources in controller repository for additional capabilities
    * some pins shared with other modules
Counter clockwise
1 - GP0, GP1
2 - GP2, GP3
3 - GP4, GP5
4 - GP10, GP11
5 - GP12, GP13
6 - GP14, GP15
7 - GP16, GP17
8 - GP18, GP19
9 - GP20, GP21
10 - GP22, GP26
11 - GP27, GP29

User Interface - Inputs
    Button ( GPIO )
        GP26
    Rotary Encoder ( GPIO )
        A - GP7
        B - GP6
    Microphone [ ZTS6531S ] ( PDM )
        CLK - GP9
        DATA - GP8

User Interface - Outputs
    RGB Lights [ WS2812 ] ( GPIO )
        DIN - GP22
    Buzzer ( Generic PWM )
        CTRL - GP27
    OLED Display 128x64 [ SSD1315 ] ( I2C0, addr 0x3C )
        SCL - GP17
        SDA - GP16

Environmental Sensors
    Gyroscope Sensor [ LSM6DS3TR-C ] ( I2C1, addr 0x6A )
        SCL - GP15
        SDA - GP14
    3-Axis Magnetometer Sensor [ MMC5603NJ ] ( I2C1, addr 0x30 )
        SCL - GP15
        SDA - GP14
    Photosensitive Sensor [ LTR-381RGB-01 ] ( I2C1, addr 0x53 )
        SCL - GP15
        SDA - GP14
    Temperature and Humidity Sensor [ SHT30-DIS ] ( I2C1, addr 0x44 )
        SCL - GP15
        SDA - GP14
    PIR Sensor [ AS312 ] ( GPIO )
        DOUT - GP28
```
