#ifndef Pins_Arduino_h
#define Pins_Arduino_h

#include <stdint.h>

#define USB_VID 0x303A
#define USB_PID 0x80D0
#define USB_MANUFACTURER_NAME "Unexpected Maker"
#define USB_PRODUCT_NAME "TinyS3"
#define USB_SERIAL ""

#define EXTERNAL_NUM_INTERRUPTS 46
#define NUM_DIGITAL_PINS        17
#define NUM_ANALOG_INPUTS       9

#define analogInputToDigitalPin(p)  (((p)<20)?(analogChannelToDigitalPin(p)):-1)
#define digitalPinToInterrupt(p)    (((p)<49)?(p):-1)
#define digitalPinHasPWM(p)         (p < 46)

static const uint8_t TX = 43;
static const uint8_t RX = 44;

static const uint8_t SDA = 8;
static const uint8_t SCL = 9;

static const uint8_t SS    = 34;
static const uint8_t MOSI  = 35;
static const uint8_t MISO  = 37;
static const uint8_t SDO  = 35;
static const uint8_t SDI  = 37;
static const uint8_t SCK   = 36;

static const uint8_t A0 = 1;
static const uint8_t A1 = 2;
static const uint8_t A2 = 3;
static const uint8_t A3 = 4;
static const uint8_t A4 = 5;
static const uint8_t A5 = 6;
static const uint8_t A6 = 7;
static const uint8_t A7 = 8;
static const uint8_t A8 = 9;

static const uint8_t T1 = 1;
static const uint8_t T2 = 2;
static const uint8_t T3 = 3;
static const uint8_t T4 = 4;
static const uint8_t T5 = 5;
static const uint8_t T6 = 6;
static const uint8_t T7 = 7;
static const uint8_t T8 = 8;
static const uint8_t T9 = 9;

static const uint8_t VBAT_SENSE = 10;
static const uint8_t VBUS_SENSE = 33;

static const uint8_t RGB_DATA = 18;
static const uint8_t RGB_PWR = 17;

/* Material Plane Sensor specific definitions */
#define HARDWARE_VARIANT                    "DIY Full S3"
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
#define TINYS3_BATTERY_MONITOR
//#define NO_BATTERY_MONITOR

//I2C pins for WiiMote camera
static const uint8_t SDA_PIN        = 8;
static const uint8_t SCL_PIN        = 9;

//LED pins
static const uint8_t BATTERY_LED_GREEN_PIN    = 6;   //Green battery led pin
static const uint8_t BATTERY_LED_RED_PIN      = 7;   //Red battery led pin
static const uint8_t CONNECTION_LED_GREEN_PIN = 21;   //Green connection led pin
static const uint8_t CONNECTION_LED_RED_PIN   = 5;   //Red connection led pin

//LED channels
static const uint8_t BATTERY_LED_GREEN        = 0;    //Green battery led channel
static const uint8_t BATTERY_LED_RED          = 1;    //Red battery led channel
static const uint8_t CONNECTION_LED_GREEN     = 2;    //Green connection led channel
static const uint8_t CONNECTION_LED_RED       = 3;    //Red connection led channel

//USB active
static const uint8_t USB_ACTIVE_PIN = 33;

//Charging STAT
static const uint8_t BATTERY_STAT = 1;

#endif /* Pins_Arduino_h */
