#ifndef Pins_Arduino_h
#define Pins_Arduino_h

#include <stdint.h>
#include "soc/soc_caps.h"

#define USB_VID 0x16D0
#define USB_PID 0x11CE
#define USB_PRODUCT_NAME "Material Plane Sensor"
#define USB_MANUFACTURER_NAME   "Material Foundry"

#define EXTERNAL_NUM_INTERRUPTS 46
#define NUM_DIGITAL_PINS        48
#define NUM_ANALOG_INPUTS       20

// Some boards have too low voltage on this pin (board design bug)
// Use different pin with 3V and connect with 48
// and change this setup for the chosen pin (for example 38)
static const uint8_t LED_BUILTIN = SOC_GPIO_PIN_COUNT+48;
#define BUILTIN_LED  LED_BUILTIN // backward compatibility
#define LED_BUILTIN LED_BUILTIN
#define RGB_BUILTIN LED_BUILTIN
#define RGB_BRIGHTNESS 64

#define analogInputToDigitalPin(p)  (((p)<20)?(analogChannelToDigitalPin(p)):-1)
#define digitalPinToInterrupt(p)    (((p)<48)?(p):-1)
#define digitalPinHasPWM(p)         (p < 46)

static const uint8_t TX = 43;
static const uint8_t RX = 44;

static const uint8_t SDA = 8;
static const uint8_t SCL = 9;

static const uint8_t SS    = 10;
static const uint8_t MOSI  = 11;
static const uint8_t MISO  = 13;
static const uint8_t SCK   = 12;

static const uint8_t A0 = 1;
static const uint8_t A1 = 2;
static const uint8_t A2 = 3;
static const uint8_t A3 = 4;
static const uint8_t A4 = 5;
static const uint8_t A5 = 6;
static const uint8_t A6 = 7;
static const uint8_t A7 = 8;
static const uint8_t A8 = 9;
static const uint8_t A9 = 10;
static const uint8_t A10 = 11;
static const uint8_t A11 = 12;
static const uint8_t A12 = 13;
static const uint8_t A13 = 14;
static const uint8_t A14 = 15;
static const uint8_t A15 = 16;
static const uint8_t A16 = 17;
static const uint8_t A17 = 18;
static const uint8_t A18 = 19;
static const uint8_t A19 = 20;

static const uint8_t T1 = 1;
static const uint8_t T2 = 2;
static const uint8_t T3 = 3;
static const uint8_t T4 = 4;
static const uint8_t T5 = 5;
static const uint8_t T6 = 6;
static const uint8_t T7 = 7;
static const uint8_t T8 = 8;
static const uint8_t T9 = 9;
static const uint8_t T10 = 10;
static const uint8_t T11 = 11;
static const uint8_t T12 = 12;
static const uint8_t T13 = 13;
static const uint8_t T14 = 14;

/* Material Plane Sensor specific definitions */

#define SERIAL_DEBUG
#define HARDWARE_VARIANT                    "Production"
#define HARDWARE_VERSION                    "1.0"
#define NATIVE_USB
#define PAJ_SENSOR
//#define WIIMOTE_SENSOR
#define ID_SENSOR
#define BATTERY_LED
//#define CONNECTION_LED
#define EN_SW
#define PRODUCTION_BATTERY_MONITOR
//#define TINYPICO_BATTERY_MONITOR
//#define NO_BATTERY_MONITOR

static const uint8_t EN_SW_PIN              = 11;   //Enable switch pin

//LED pins
static const uint8_t BATTERY_LED_GREEN_PIN          = 10;   //Green led pin
static const uint8_t BATTERY_LED_GREEN              = 0;    //Green led channel
static const uint8_t BATTERY_LED_RED_PIN            = 9;    //Red led pin
static const uint8_t BATTERY_LED_RED                = 1;    //Red led channel

//MAX17260 pins
static const uint32_t MAX17260_CLK          = 400000;   //I2C Clock
static const uint8_t MAX17260_SDA_PIN       = 41;   //SDA pin
static const uint8_t MAX17260_SCL_PIN       = 40;   //SCL pin
static const uint8_t MAX17260_ALERT_PIN     = 42;   //Alert pin for MAX17260

//MCP73871 pins
static const uint8_t MCP73871_USB_SEL_PIN   = 39;   //input, select between USB (low) or AC-DC (high)
static const uint8_t MCP73871_PROG2_PIN     = 37;   //input, USB current select, 100mA (low) or 500mA (high) => ext pullup
static const uint8_t MCP73871_TE_PIN        = 47;   //input, safety time enable (en == low)
static const uint8_t MCP73871_CE_PIN        = 38;   //input, charge enable (en == high) => ext pullup
static const uint8_t MCP73871_PG_PIN        = 36;   //output, power good (open-drain)
static const uint8_t MCP73871_STAT1_PIN     = 48;   //output, stat1 (open-drain)
static const uint8_t MCP73871_STAT2_PIN     = 35;   //output, stat2 (open-drain)

//LM66200 pins
static const uint8_t LM66200_POWER_STATE_PIN = 21;

//IR ID sensor
static const uint8_t RMT_IN_PIN             = 3;
static const uint8_t RMT_PWR_PIN            = 46;

//PAJ7025R3 pins
static const uint8_t PAJ_CS_PIN             = 7;
static const uint8_t PAJ_MOSI_PIN           = 4;
static const uint8_t PAJ_MISO_PIN           = 5;
static const uint8_t PAJ_SCK_PIN            = 6;
static const uint8_t PAJ_VSYNC_PIN          = 15;
static const uint8_t PAJ_LEDSIDE_PIN        = 17;
static const uint8_t PAJ_FOD_PIN            = 16;
static const uint8_t PAJ_PWR_PIN            = 18;

#endif /* Pins_Arduino_h */
