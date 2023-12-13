#ifndef Pins_Arduino_h
#define Pins_Arduino_h

#include <stdint.h>

#define EXTERNAL_NUM_INTERRUPTS 16
#define NUM_DIGITAL_PINS        40
#define NUM_ANALOG_INPUTS       16

#define analogInputToDigitalPin(p)  (((p)<20)?(analogChannelToDigitalPin(p)):-1)
#define digitalPinToInterrupt(p)    (((p)<40)?(p):-1)
#define digitalPinHasPWM(p)         (p < 34)

static const uint8_t TX = 1;
static const uint8_t RX = 3;

static const uint8_t SDA = 21;
static const uint8_t SCL = 22;

static const uint8_t SS    = 5;
static const uint8_t MOSI  = 23;
static const uint8_t MISO  = 19;
static const uint8_t SCK   = 18;

static const uint8_t A0 = 36;
static const uint8_t A3 = 39;
static const uint8_t A4 = 32;
static const uint8_t A5 = 33;
static const uint8_t A6 = 34;
static const uint8_t A7 = 35;
static const uint8_t A10 = 4;
static const uint8_t A11 = 0;
static const uint8_t A12 = 2;
static const uint8_t A13 = 15;
static const uint8_t A14 = 13;
static const uint8_t A15 = 12;
static const uint8_t A16 = 14;
static const uint8_t A17 = 27;
static const uint8_t A18 = 25;
static const uint8_t A19 = 26;

static const uint8_t T0 = 4;
static const uint8_t T1 = 0;
static const uint8_t T2 = 2;
static const uint8_t T3 = 15;
static const uint8_t T4 = 13;
static const uint8_t T5 = 12;
static const uint8_t T6 = 14;
static const uint8_t T7 = 27;
static const uint8_t T8 = 33;
static const uint8_t T9 = 32;

static const uint8_t DAC1 = 25;
static const uint8_t DAC2 = 26;

/* Material Plane Sensor specific definitions */

#define HARDWARE_VARIANT                    "DIY Basic"
#define HARDWARE_VERSION                    "1.0"
//#define NATIVE_USB
//#define PAJ_SENSOR
#define WIIMOTE_SENSOR
//#define ID_SENSOR
#define BATTERY_LED
#define CONNECTION_LED
//#define EN_SW
//#define PRODUCTION_BATTERY_MONITOR
//#define TINYPICO_BATTERY_MONITOR
#define NO_BATTERY_MONITOR

//I2C pins for WiiMote camera
static const uint8_t SDA_PIN = 21;
static const uint8_t SCL_PIN = 22;

//LED pins
static const uint8_t BATTERY_LED_GREEN_PIN    = 25;   //Green battery led pin
static const uint8_t BATTERY_LED_RED_PIN      = 26;   //Red battery led pin
static const uint8_t CONNECTION_LED_GREEN_PIN = 27;   //Green connection led pin
static const uint8_t CONNECTION_LED_RED_PIN   = 15;   //Red connection led pin

//LED channels
static const uint8_t BATTERY_LED_GREEN        = 0;    //Green battery led channel
static const uint8_t BATTERY_LED_RED          = 1;    //Red battery led channel
static const uint8_t CONNECTION_LED_GREEN     = 2;    //Green connection led channel
static const uint8_t CONNECTION_LED_RED       = 3;    //Red connection led channel

#endif /* Pins_Arduino_h */
