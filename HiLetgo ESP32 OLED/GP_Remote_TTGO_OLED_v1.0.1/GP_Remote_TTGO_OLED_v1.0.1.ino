///// OLED Stuff//////////////
#include <SPI.h>
#include <Wire.h>
#include <Adafruit_GFX.h>
#include <Adafruit_SSD1306.h>

////////OLED Setup////////////
#define SCREEN_WIDTH 128 // OLED display width, in pixels
#define SCREEN_HEIGHT 64 // OLED display height, in pixels
//Pins and i2c///
#define OLED_SDA 4
#define OLED_SCL 15 
#define OLED_RST 16
Adafruit_SSD1306 display(SCREEN_WIDTH, SCREEN_HEIGHT, &Wire, OLED_RST);
////////////////////////////////////////////////////////////////////////////

//// WiFi Stuff///////////////
#include <WiFiManager.h>
#include <WiFi.h>
#include <HTTPClient.h>
HTTPClient http;

//////////////////Header Files////////////
#include "WiFi_AP_Init.h"
#include "Commands.h"
#include "Menu_System.h"
#include "Button_Interrupt.h"
#include "OLED_Menu_Disp.h"

//////////////////////////////////////


void setup()
{
  Serial.begin(115200);
  wifi_init();
  core_two_button_interrupt();
 }

void loop() {
  delay(500);
  menu_display();
  }
