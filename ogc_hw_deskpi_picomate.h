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
 *                                                                                                        User Interface
 **********************************************************************************************************************/
/*                                                                                                             Button */
#define UI_BUTTON_COUNT ( 1U )
#define UI_BUTTON_1_CONNECTION ( "GPIO" )
#define UI_BUTTON_1_PULL ( 0U )
#define UI_BUTTON_1_PIN ( 26U )

/*                                                                                                            Encoder */
#define UI_ENCODER_COUNT ( 1U )
#define UI_ENCODER_1_CONNECTION ( "GPIO" )
#define UI_ENCODER_1_PHASE_A_PULL ( 0U )
#define UI_ENCODER_1_PHASE_A_PIN ( 7U )
#define UI_ENCODER_1_PHASE_B_PULL ( 0U )
#define UI_ENCODER_1_PHASE_B_PIN ( 6U )

/*                                                                                                ZTS6531S Microphone */
#define UI_MICROPHONE_COUNT ( 1U )
#define UI_MICROPHONE_1_TYPE ( "ZTS6531S" )
#define UI_MICROPHONE_1_CONNECTION ( "PDM" )
#define UI_MICROPHONE_1_CLK_PIN ( 9U )
#define UI_MICROPHONE_1_DATA_PIN ( 8U )

/*                                                                                                     WS2812 RGB LED */
#define UI_INDICATOR_MULTI_COUNT ( 1U )
#define UI_INDICATOR_MULTI_1_TYPE ( "WS2812" )
#define UI_INDICATOR_MULTI_1_CONNECTION ( "GPIO" )
#define UI_INDICATOR_MULTI_1_PIN ( 22U )

/*                                                                                                       Piezo Buzzer */
#define UI_SPEAKER_COUNT ( 1U )
#define UI_SPEAKER_1_TYPE ( "PWM" )
#define UI_SPEAKER_1_PIN ( 27U )

/*                                                                                      SSD1315 128 x 64 OLED Display */
#define UI_DISPLAY_COUNT ( 1U )
#define UI_DISPLAY_1_TYPE ( "SSD1315" )
#define UI_DISPLAY_1_CONNECTION ( "I2C" )
#define UI_DISPLAY_1_CONNECTION_NUM ( 0U )
#define UI_DISPLAY_1_ADDR ( 0x3C )
#define UI_DISPLAY_1_SCL_PIN ( 17U )
#define UI_DISPLAY_1_SDA_PIN ( 16U )
#define UI_DISPLAY_1_HEIGHT ( 64U )
#define UI_DISPLAY_1_WIDTH ( 128U )

/***********************************************************************************************************************
 *                                                                                                               Sensors
 **********************************************************************************************************************/
/*                                                                                       LSM6DS3TR-C Gyroscope Sensor */
#define SENSOR_GYROSCOPE_COUNT ( 1U )
#define SENSOR_GYROSCOPE_1_TYPE ( "LSM6DS3TR-C" )
#define SENSOR_GYROSCOPE_1_CONNECTION ( "I2C" )
#define SENSOR_GYROSCOPE_1_CONNECTION_NUM ( 1U )
#define SENSOR_GYROSCOPE_1_ADDR ( 0x6A )
#define SENSOR_GYROSCOPE_1_SCL_PIN ( 15U )
#define SENSOR_GYROSCOPE_1_SDA_PIN ( 14U )

/*                                                                               MMC5603NJ 3-Axis Magnetometer Sensor */
#define SENSOR_MAGNETOMETER_COUNT ( 1U )
#define SENSOR_MAGNETOMETER_1_TYPE ( "MMC5603NJ" )
#define SENSOR_MAGNETOMETER_1_CONNECTION ( "I2C" )
#define SENSOR_MAGNETOMETER_1_CONNECTION_NUM ( 1U )
#define SENSOR_MAGNETOMETER_1_ADDR ( 0x30 )
#define SENSOR_MAGNETOMETER_1_SCL_PIN ( 15U )
#define SENSOR_MAGNETOMETER_1_SDA_PIN ( 14U )

/*                                                                                LTR-381RGB-01 Photosensitive Sensor */
#define SENSOR_COLOR_SENSE_COUNT ( 1U )
#define SENSOR_COLOR_SENSE_1_TYPE ( "LTR-381RGB-01" )
#define SENSOR_COLOR_SENSE_1_CONNECTION ( "I2C" )
#define SENSOR_COLOR_SENSE_1_CONNECTION_NUM ( 1U )
#define SENSOR_COLOR_SENSE_1_ADDR ( 0x53 )
#define SENSOR_COLOR_SENSE_1_SCL_PIN ( 15U )
#define SENSOR_COLOR_SENSE_1_SDA_PIN ( 14U )

/*                                                                                                   AS312 PIR Sensor */
#define SENSOR_PIR_COUNT ( 1U )
#define SENSOR_PIR_1_TYPE ( "AS312" )
#define SENSOR_PIR_1_CONNECTION ( "GPIO" )
#define SENSOR_PIR_1_PULL ( 0U )
#define SENSOR_PIR_1_PIN ( 28U )

/*                                                                          SHT30-DIS Temperature and Humidity Sensor */
#define SENSOR_TEMP_HUMIDITY_COUNT ( 1U )
#define SENSOR_TEMP_HUMIDITY_1_TYPE ( "SHT30-DIS" )
#define SENSOR_TEMP_HUMIDITY_1_CONNECTION ( "I2C" )
#define SENSOR_TEMP_HUMIDITY_1_CONNECTION_NUM ( 1U )
#define SENSOR_TEMP_HUMIDITY_1_ADDR ( 0x44 )
#define SENSOR_TEMP_HUMIDITY_1_SCL_PIN ( 15U )
#define SENSOR_TEMP_HUMIDITY_1_SDA_PIN ( 14U )

/***********************************************************************************************************************
 *                                                                                                     Expansion Headers
 **********************************************************************************************************************/
/*                                          Counter clockwise around Raspbery Pi RP2040 Pico/Pico-W Controller Header */
#define EXPANSION_HEADER_COUNT ( 11U )

/*                                                                                                 Grove connector 01 */
#define EXPANSION_HEADER_1_TYPE ( "GROVE" )
#define EXPANSION_HEADER_1_1_PIN ( 0U )
#define EXPANSION_HEADER_1_2_PIN ( 1U )

/*                                                                                                 Grove connector 02 */
#define EXPANSION_HEADER_2_TYPE ( "GROVE" )
#define EXPANSION_HEADER_2_1_PIN ( 2U )
#define EXPANSION_HEADER_2_2_PIN ( 3U )

/*                                                                                                 Grove connector 03 */
#define EXPANSION_HEADER_3_TYPE ( "GROVE" )
#define EXPANSION_HEADER_3_1_PIN ( 4U )
#define EXPANSION_HEADER_3_2_PIN ( 5U )

/*                                                                                                 Grove connector 04 */
#define EXPANSION_HEADER_4_TYPE ( "GROVE" )
#define EXPANSION_HEADER_4_1_PIN ( 10U )
#define EXPANSION_HEADER_4_2_PIN ( 11U )

/*                                                                                                 Grove connector 05 */
#define EXPANSION_HEADER_5_TYPE ( "GROVE" )
#define EXPANSION_HEADER_5_1_PIN ( 12U )
#define EXPANSION_HEADER_5_2_PIN ( 13U )

/*                                                                                                 Grove connector 06 */
#define EXPANSION_HEADER_6_TYPE ( "GROVE" )
#define EXPANSION_HEADER_6_1_PIN ( 14U )
#define EXPANSION_HEADER_6_2_PIN ( 15U )

/*                                                                                                 Grove connector 07 */
#define EXPANSION_HEADER_7_TYPE ( "GROVE" )
#define EXPANSION_HEADER_7_1_PIN ( 16U )
#define EXPANSION_HEADER_7_2_PIN ( 17U )

/*                                                                                                 Grove connector 08 */
#define EXPANSION_HEADER_8_TYPE ( "GROVE" )
#define EXPANSION_HEADER_8_1_PIN ( 18U )
#define EXPANSION_HEADER_8_2_PIN ( 19U )

/*                                                                                                 Grove connector 09 */
#define EXPANSION_HEADER_9_TYPE ( "GROVE" )
#define EXPANSION_HEADER_9_1_PIN ( 20U )
#define EXPANSION_HEADER_9_2_PIN ( 21U )

/*                                                                                                 Grove connector 10 */
#define EXPANSION_HEADER_10_TYPE ( "GROVE" )
#define EXPANSION_HEADER_10_1_PIN ( 22U )
#define EXPANSION_HEADER_10_2_PIN ( 26U )

/*                                                                                                 Grove connector 11 */
#define EXPANSION_HEADER_11_TYPE ( "GROVE" )
#define EXPANSION_HEADER_11_1_PIN ( 27U )
#define EXPANSION_HEADER_11_2_PIN ( 29U )

#endif /* OGC_HW_DESKPI_PICOMATE_H */
