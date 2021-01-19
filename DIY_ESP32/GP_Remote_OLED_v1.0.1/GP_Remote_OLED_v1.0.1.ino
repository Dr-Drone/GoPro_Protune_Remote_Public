
//// WiFi Stuff///////////////
#include <WiFiManager.h>
#include <WiFi.h>
#include <HTTPClient.h>
HTTPClient http;

///// OLED Stuff//////////////
#include <SPI.h>
#include <Wire.h>
#include <Adafruit_GFX.h>
#include <Adafruit_SSD1306.h>
#define SCREEN_WIDTH 128 // OLED display width, in pixels
#define SCREEN_HEIGHT 64 // OLED display height, in pixels
Adafruit_SSD1306 display(SCREEN_WIDTH, SCREEN_HEIGHT, &Wire, -1);

//////////////////////////////////////////////////

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
