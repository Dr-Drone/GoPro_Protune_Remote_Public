
/////////////////////////Libraries////////////////////////
/////////WiFi Stuff///////////                          //
#include <WiFiManager.h>                                //
#include <WiFi.h>                                       //
#include <HTTPClient.h>                                 //
HTTPClient http;                                        //
//////LCD Stuff////////////                             //
#include <TFT_eSPI.h>                                   //
#include <SPI.h>                                        //                                                       //
///////////////////////////////////////////////////////////

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
