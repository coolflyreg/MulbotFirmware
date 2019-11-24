

#ifndef MCU_LPC1769
  #error "Oops! Make sure you have the LPC1769 environment selected in your IDE."
#endif

#define BOARD_INFO_NAME        "FLYboard"
#define BOARD_WEBSITE_URL " "

#undef F_CPU
#define F_CPU 120000000



//
// Servo pin
//
#define SERVO0_PIN         P1_23


//
// Limit Switches - Not Interrupt Capable
//
#define X_MIN_PIN          P1_24   // 10k pullup to 3.3V, 1K series.  Supports PWM
#define X_MAX_PIN          -1 // P1_25   // 10k pullup to 3.3V, 1K series
#define Y_MIN_PIN          P1_27 // P1_26   // 10k pullup to 3.3V, 1K series. Supports PWM // Change To Y MAX
#define Y_MAX_PIN          -1 // P1_27   // 10k pullup to 3.3V, 1K series
#define Z_MIN_PIN          P1_28   // The original Mks Sbase DIO19 has a 10k pullup to 3.3V or 5V, 1K series, so when using a Zprobe we must use DIO41 (J8 P1.22)
#define Z_MAX_PIN          -1 // P1_29   // 10k pullup to 3.3V, 1K series


//
// Steppers
//
#define X_STEP_PIN         P2_00
#define X_DIR_PIN          P0_05
#define X_ENABLE_PIN       P0_04

#define Y_STEP_PIN         P2_01
#define Y_DIR_PIN          P0_11
#define Y_ENABLE_PIN       P0_10

#define Z_STEP_PIN         P2_02
#define Z_DIR_PIN          P0_20
#define Z_ENABLE_PIN       P0_19

#define E0_STEP_PIN        P2_03
#define E0_DIR_PIN         P0_22
#define E0_ENABLE_PIN      P0_21

#define E1_STEP_PIN        P2_08
#define E1_DIR_PIN         P2_13
#define E1_ENABLE_PIN      P4_29

#define E2_STEP_PIN        P1_21
#define E2_DIR_PIN         P2_07
#define E2_ENABLE_PIN      P1_20

#define E3_STEP_PIN        P1_26  // Y_MIN_PIN
#define E3_DIR_PIN         P1_25  // X_MAX_PIN
#define E3_ENABLE_PIN      P1_29  // Z_MAX_PIN

#define E4_STEP_PIN        1  // TEMP_1_PIN
#define E4_DIR_PIN         3
#define E4_ENABLE_PIN      P1_29  // Z_MAX_PIN


//
// Temperature Sensors
// 3.3V max when defined as an analog input
//
#define TEMP_BED_PIN        -1 // 2   // A0 (TH1)
#define TEMP_0_PIN          0   // A1 (TH2)
#define TEMP_1_PIN          -1 // 1   // A2 (TH3)
#define TEMP_2_PIN          -1 // 3   // A3 (TH4)

//
// Heaters / Fans
//
#define HEATER_BED_PIN     P1_22//P2_05
#define HEATER_0_PIN       P2_05//P1_22
#define HEATER_1_PIN       -1 // P1_23
#define HEATER_2_PIN       -1 // P1_18
#ifndef FAN_PIN
  #define FAN_PIN          P2_06
#endif
#define V5_COOLING_PIN     P1_18


// 5V
// NC
// GND
#define PIN_P0_17          P0_17
#define PIN_P0_16          P0_16
#define PIN_P0_15          P0_15



// GND
#define PIN_P1_22          P1_22
#define PIN_P1_23          P1_23   // PWM Capable
#define PIN_P2_12          P2_12   // Interrupt Capable
#define PIN_P2_11          P2_11   // Interrupt Capable

//
// Průša i3 MK2 Multi Material Multiplexer Support
//
#if ENABLED(MK2_MULTIPLEXER)
  #define E_MUX0_PIN       P1_23   // J8-3
  #define E_MUX1_PIN       P2_12   // J8-4
  #define E_MUX2_PIN       P2_11   // J8-5
#endif



//
// Ethernet pins
//
#ifndef ULTIPANEL
  #define ENET_MDIO        P1_17   // J12-4
  #define ENET_RX_ER       P1_14   // J12-6
  #define ENET_RXD1        P1_10   // J12-8
#endif

#define ENET_MOC           P1_16   // J12-3
#define REF_CLK            P1_15   // J12-5
#define ENET_RXD0          P1_09   // J12-7
#define ENET_CRS           P1_08   // J12-9
#define ENET_TX_EN         P1_04   // J12-10
#define ENET_TXD0          P1_00   // J12-11
#define ENET_TXD1          P1_01   // J12-12


//****************************************************************
//*** OLD DISPLAY SETTING - BEGIN
//****************************************************************

//#define USB_SD_DISABLED
// #define USB_SD_ONBOARD        // Provide the onboard SD card to the host as a USB mass storage device



// #define LPC_SD_LCD          // Marlin uses the SD drive attached to the LCD
// #define LPC_SD_ONBOARD        // Marlin uses the SD drive attached to the control board

// #if ENABLED(LPC_SD_LCD)

//   #define SCK_PIN          P0_07
//   #define MISO_PIN         P0_08
//   #define MOSI_PIN         P0_09
//   #define SS_PIN           P0_28   // Chip select for SD card used by Marlin
//   #define ONBOARD_SD_CS    P0_06   // Chip select for "System" SD card

// #elif ENABLED(LPC_SD_ONBOARD)

//   // The external SD card is not used. Hardware SPI is used to access the card.
//   #if ENABLED(USB_SD_ONBOARD)
//     // When sharing the SD card with a PC we want the menu options to
//     // mount/unmount the card and refresh it. So we disable card detect.
//     #define SHARED_SD_CARD
//   #else
//     #define SD_DETECT_PIN  P0_27
//   #endif
//   #define SCK_PIN          P0_07
//   #define MISO_PIN         P0_08
//   #define MOSI_PIN         P0_09
//   #define SS_PIN           P0_06   // Chip select for SD card used by Marlin
//   #define ONBOARD_SD_CS    P0_06   // Chip select for "System" SD card

// #endif

//****************************************************************
//*** OLD DISPLAY SETTING - END
//****************************************************************

//****************************************************************
//*** NEW DISPLAY SETTING - BEGIN
//****************************************************************

#if SD_CONNECTION_IS(LCD) || SD_CONNECTION_IS(ONBOARD)

  #define SCK_PIN          P0_07
  #define MISO_PIN         P0_08
  #define MOSI_PIN         P0_09
  #define SS_PIN           P0_28   // Chip select for SD card used by Marlin
  #define ONBOARD_SD_CS    P0_06   // Chip select for "System" SD card

  #if SD_CONNECTION_IS(ONBOARD)
    #define SHARED_SD_CARD
  #else
    #define SD_DETECT_PIN  P0_27
  #endif

#endif


//****************************************************************
//*** NEW DISPLAY SETTING - END
//****************************************************************



/**
 * Smart LCD adapter
 *
 * The Smart LCD adapter can be used for the two 10 pin LCD controllers such as
 * REPRAP_DISCOUNT_SMART_CONTROLLER.  It can't be used for controllers that use
 * DOGLCD_A0, DOGLCD_CS, LCD_PINS_D5, LCD_PINS_D6 or LCD_PINS_D7. A custom cable
 * is needed to pick up 5V for the EXP1 connection.
 *
 * SD card on the LCD uses the same SPI signals as the LCD. This results in garbage/lines
 * on the LCD display during accesses of the SD card. The menus/code has been arranged so
 * that the garbage/lines are erased immediately after the SD card accesses are completed.
 */

#if ENABLED(ULTRA_LCD)
  #define BEEPER_PIN       P1_31   // EXP1.1
  #define BTN_ENC          P1_30   // EXP1.2
  #define BTN_EN1          P3_26   // EXP2.5
  #define BTN_EN2          P3_25   // EXP2.3
  #define LCD_PINS_RS      P0_16   // EXP1.4
  #define LCD_SDSS         P0_28   // EXP2.4
  #define LCD_PINS_ENABLE  P0_18   // EXP1.3
  #define LCD_PINS_D4      P0_15   // EXP1.5
  #if ANY(VIKI2, miniVIKI)
    #define DOGLCD_SCK     SCK_PIN
    #define DOGLCD_MOSI    MOSI_PIN
  #endif
#endif
