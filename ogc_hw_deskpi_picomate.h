/***********************************************************************************************************************
 * OGC.Engineering
 * ogc_hw_deskpi_picomate.h
 * dustin ( at ) ogc.engineering
 *
 * Hardware description for the DeskPi PicoMate development baseboard for the Raspberry Pi Pico and Pico-W
 **********************************************************************************************************************/
 
#ifndef OGC_HW_DESKPI_PICOMATE_H
#define OGC_HW_DESKPI_PICOMATE_H

/* TODO: include header for common ogc layer definitions for connection types, etc. to reduce memory footprint */
    /* direction of needed internal pull, -1 = pulldown, 1 = pullup, 0 = nopull */
/***********************************************************************************************************************
 *                                                                                                               Version
 **********************************************************************************************************************/
#define VERSION_HW__MAJOR ( 0 )
#define VERSION_HW__MINOR ( 1 )
#define VERSION_HW__PATCH ( 0 )
#define VERSION_HW__STRING "v" STR( VERSION_HW__MAJOR ) "." STR( VERSION_HW__MINOR ) "." STR( VERSION_HW__PATCH )

/***********************************************************************************************************************
 *                                                                                                        User Interface
 **********************************************************************************************************************/
/*                                                                                                             Button */
#define UI_BUTTON_COUNT ( 1 )
#define UI_BUTTON_1_CONNECTION ( "GPIO" )
#define UI_BUTTON_1_PULL ( 0 )
#define UI_BUTTON_1_PIN ( 26 )

/*                                                                                                            Encoder */
#define UI_ENCODER_COUNT ( 1 )
#define UI_ENCODER_1_CONNECTION ( "GPIO" )
#define UI_ENCODER_1_PHASE_A_PULL ( 0 )
#define UI_ENCODER_1_PHASE_A_PIN ( 7 )
#define UI_ENCODER_1_PHASE_B_PULL ( 0 )
#define UI_ENCODER_1_PHASE_B_PIN ( 6 )

/*                                                                                                ZTS6531S Microphone */
#define UI_MICROPHONE_COUNT ( 1 )
#define UI_MICROPHONE_1_TYPE ( "ZTS6531S" )
#define UI_MICROPHONE_1_CONNECTION ( "PDM" )
#define UI_MICROPHONE_1_CLK_PIN ( 9 )
#define UI_MICROPHONE_1_DATA_PIN ( 8 )

/*                                                                                                     WS2812 RGB LED */
#define UI_INDICATOR_MULTI_COUNT ( 1 )
#define UI_INDICATOR_MULTI_1_TYPE ( "WS2812" )
#define UI_INDICATOR_MULTI_1_CONNECTION ( "GPIO" )
#define UI_INDICATOR_MULTI_1_PIN ( 22 )

/*                                                                                                       Piezo Buzzer */
#define UI_SPEAKER_COUNT ( 1 )
#define UI_SPEAKER_1_TYPE ( "PWM" )
#define UI_SPEAKER_1_PIN ( 27 )

/*                                                                                      SSD1315 128 x 64 OLED Display */
#define UI_DISPLAY_COUNT ( 1 )
#define UI_DISPLAY_1_TYPE ( "SSD1315" )
#define UI_DISPLAY_1_CONNECTION ( "I2C" )
#define UI_DISPLAY_1_CONNECTION_NUM ( 0 )
#define UI_DISPLAY_1_ADDR ( 0x3C )
#define UI_DISPLAY_1_SCL_PIN ( 17 )
#define UI_DISPLAY_1_SDA_PIN ( 16 )
#define UI_DISPLAY_1_HEIGHT ( 64 )
#define UI_DISPLAY_1_WIDTH ( 128 )

/***********************************************************************************************************************
 *                                                                                                               Sensors
 **********************************************************************************************************************/
/*                                                                                       LSM6DS3TR-C Gyroscope Sensor */
#define SENSOR_GYROSCOPE_COUNT ( 1 )
#define SENSOR_GYROSCOPE_1_TYPE ( "LSM6DS3TR-C" )
#define SENSOR_GYROSCOPE_1_CONNECTION ( "I2C" )
#define SENSOR_GYROSCOPE_1_CONNECTION_NUM ( 1 )
#define SENSOR_GYROSCOPE_1_ADDR ( 0x6A )
#define SENSOR_GYROSCOPE_1_SCL_PIN ( 15 )
#define SENSOR_GYROSCOPE_1_SDA_PIN ( 14 )

/*                                                                               MMC5603NJ 3-Axis Magnetometer Sensor */
#define SENSOR_MAGNETOMETER_COUNT ( 1 )
#define SENSOR_MAGNETOMETER_1_TYPE ( "MMC5603NJ" )
#define SENSOR_MAGNETOMETER_1_CONNECTION ( "I2C" )
#define SENSOR_MAGNETOMETER_1_CONNECTION_NUM ( 1 )
#define SENSOR_MAGNETOMETER_1_ADDR ( 0x30 )
#define SENSOR_MAGNETOMETER_1_SCL_PIN ( 15 )
#define SENSOR_MAGNETOMETER_1_SDA_PIN ( 14 )

/*                                                                                LTR-381RGB-01 Photosensitive Sensor */
#define SENSOR_COLOR_SENSE_COUNT ( 1 )
#define SENSOR_COLOR_SENSE_1_TYPE ( "LTR-381RGB-01" )
#define SENSOR_COLOR_SENSE_1_CONNECTION ( "I2C" )
#define SENSOR_COLOR_SENSE_1_CONNECTION_NUM ( 1 )
#define SENSOR_COLOR_SENSE_1_ADDR ( 0x53 )
#define SENSOR_COLOR_SENSE_1_SCL_PIN ( 15 )
#define SENSOR_COLOR_SENSE_1_SDA_PIN ( 14 )

/*                                                                                                   AS312 PIR Sensor */
#define SENSOR_PIR_COUNT ( 1 )
#define SENSOR_PIR_1_TYPE ( "AS312" )
#define SENSOR_PIR_1_CONNECTION ( "GPIO" )
#define SENSOR_PIR_1_PULL ( 0 )
#define SENSOR_PIR_1_PIN ( 28 )

/*                                                                          SHT30-DIS Temperature and Humidity Sensor */
#define SENSOR_TEMP_HUMIDITY_COUNT ( 1 )
#define SENSOR_TEMP_HUMIDITY_1_TYPE ( "SHT30-DIS" )
#define SENSOR_TEMP_HUMIDITY_1_CONNECTION ( "I2C" )
#define SENSOR_TEMP_HUMIDITY_1_CONNECTION_NUM ( 1 )
#define SENSOR_TEMP_HUMIDITY_1_ADDR ( 0x44 )
#define SENSOR_TEMP_HUMIDITY_1_SCL_PIN ( 15 )
#define SENSOR_TEMP_HUMIDITY_1_SDA_PIN ( 14 )

/***********************************************************************************************************************
 *                                                                                                     Expansion Headers
 **********************************************************************************************************************/
/*                                          Counter clockwise around Raspbery Pi RP2040 Pico/Pico-W Controller Header */
#define EXPANSION_HEADER_COUNT ( 11 )

/*                                                                                                 Grove connector 01 */
#define EXPANSION_HEADER_1_TYPE ( "GROVE" )
#define EXPANSION_HEADER_1_1_PIN ( 0 )
#define EXPANSION_HEADER_1_2_PIN ( 1 )

/*                                                                                                 Grove connector 02 */
#define EXPANSION_HEADER_2_TYPE ( "GROVE" )
#define EXPANSION_HEADER_2_1_PIN ( 2 )
#define EXPANSION_HEADER_2_2_PIN ( 3 )

/*                                                                                                 Grove connector 03 */
#define EXPANSION_HEADER_3_TYPE ( "GROVE" )
#define EXPANSION_HEADER_3_1_PIN ( 4 )
#define EXPANSION_HEADER_3_2_PIN ( 5 )

/*                                                                                                 Grove connector 04 */
#define EXPANSION_HEADER_4_TYPE ( "GROVE" )
#define EXPANSION_HEADER_4_1_PIN ( 10 )
#define EXPANSION_HEADER_4_2_PIN ( 11 )

/*                                                                                                 Grove connector 05 */
#define EXPANSION_HEADER_5_TYPE ( "GROVE" )
#define EXPANSION_HEADER_5_1_PIN ( 12 )
#define EXPANSION_HEADER_5_2_PIN ( 13 )

/*                                                                                                 Grove connector 06 */
#define EXPANSION_HEADER_6_TYPE ( "GROVE" )
#define EXPANSION_HEADER_6_1_PIN ( 14 )
#define EXPANSION_HEADER_6_2_PIN ( 15 )

/*                                                                                                 Grove connector 07 */
#define EXPANSION_HEADER_7_TYPE ( "GROVE" )
#define EXPANSION_HEADER_7_1_PIN ( 16 )
#define EXPANSION_HEADER_7_2_PIN ( 17 )

/*                                                                                                 Grove connector 08 */
#define EXPANSION_HEADER_8_TYPE ( "GROVE" )
#define EXPANSION_HEADER_8_1_PIN ( 18 )
#define EXPANSION_HEADER_8_2_PIN ( 19 )

/*                                                                                                 Grove connector 09 */
#define EXPANSION_HEADER_9_TYPE ( "GROVE" )
#define EXPANSION_HEADER_9_1_PIN ( 20 )
#define EXPANSION_HEADER_9_2_PIN ( 21 )

/*                                                                                                 Grove connector 10 */
#define EXPANSION_HEADER_10_TYPE ( "GROVE" )
#define EXPANSION_HEADER_10_1_PIN ( 22 )
#define EXPANSION_HEADER_10_2_PIN ( 26 )

/*                                                                                                 Grove connector 11 */
#define EXPANSION_HEADER_11_TYPE ( "GROVE" )
#define EXPANSION_HEADER_11_1_PIN ( 27 )
#define EXPANSION_HEADER_11_2_PIN ( 29 )

#endif /* OGC_HW_DESKPI_PICOMATE_H */
