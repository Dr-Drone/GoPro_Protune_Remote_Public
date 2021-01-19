////////////Button Def/////////////////
#define BUTTON1PIN 35
#define BUTTON2PIN 0


uint8_t menu_splash_screen = 0;
uint8_t PT = 0;
uint8_t white_balance = 0;
uint8_t color = 0;
uint8_t iso_limit = 0;
uint8_t iso_mode = 0;
uint8_t sharpness = 0;
uint8_t EV = 0;
uint8_t Exposure = 0;
uint8_t Exposure_Setting = 0;
uint8_t Exposure_Page = 0;


long lastDebounceButton1 = 0;    // Holds Button1 last debounce
long lastDebounceButton2 = 0;    // Holds Button2 last debounce
long debounceDelay       = 400;  // 200ms between re-polling

////////////// Interrupt Function////////

// INTRPT Function to execute when Button 1 is Pushed
void toggleButton1() {
  if ((millis() - lastDebounceButton1) > debounceDelay) {
    menu_splash_screen += 1;
    Serial.print("Button 1 pressed: ");
    switch (menu_splash_screen) {
      case 1:
        Serial.println("PT");
        break;
      case 2:
        Serial.println("White Balance");
        break;
      case 3:
        Serial.println("Color");
        break;
      case 4:
        Serial.println("ISO Limit");
        break;
      case 5:
        Serial.println("ISO Mode");
        break;
      case 6:
        Serial.println("Sharpness");
        break;
      case 7:
        Serial.println("EV");
        break;
      case 8:
        Serial.println("Exposure");
        break;
      case 9:
        Serial.println("Exposure @ x");
        break;
      case 10:
        Serial.print("End");
        menu_splash_screen = 0;
        break;

    }
    //   SendCommand1();
    lastDebounceButton1 = millis();
  }
}

/////////// INTRPT Function to execute when Button 2 is Pushed
void toggleButton2() {
  if ((millis() - lastDebounceButton2) > debounceDelay) {
    Serial.print("Button 2 is pressed: ");

    if (menu_splash_screen == 1) {
      PT += 1;
      switch (PT) {
        case 1:
          Serial.println("On");
          PT_on();
          break;
        case 2:
          Serial.println("off");
          PT_off();
          break;
        case 3:
          Serial.println("End");
          PT = 0;
          break;
      }
    }
    else if (menu_splash_screen == 2) {
      white_balance += 1;
      switch (white_balance) {
        case 1:
          Serial.println("Auto");
          autowb();
          break;
        case 2:
          Serial.println("3000k");
          wb3000();
          break;
        case 3:
          Serial.println("4000k");
          wb4000();
          break;
        case 4:
          Serial.println("4800k");
          wb4800();
          break;
        case 5:
          Serial.println("5500k");
          wb5500();
          break;
        case 6:
          Serial.println("6000k");
          wb6000();
          break;
        case 7:
          Serial.println("6500k");
          wb6500();
          break;
        case 8:
          Serial.println("Native");
          nativewb();
          break;
        case 9:
          Serial.println("End");
          white_balance = 0;
          break;
      }
    }

    else if (menu_splash_screen == 3) {
      color += 1;
      switch (color) {
        case 1:
          Serial.println("GP");
          color_gp();
          break;
        case 2:
          Serial.println("Flat");
          color_flat();
          break;
        case 3:
          Serial.println("End");
          color = 0;
          break;
      }
    }

    else if (menu_splash_screen == 4) {
      iso_limit += 1;
      switch (iso_limit) {
        case 1:
          Serial.println("6400");
          iso6400();
          break;
        case 2:
          Serial.println("3200");
          iso3200();
          break;
        case 3:
          Serial.println("1600");
          iso1600();
          break;
        case 4:
          Serial.println("800");
          iso800();
          break;
        case 5:
          Serial.println("400");
          iso400();
          break;
        case 6:
          Serial.println("200");
          iso400();//Change to iso200 if using hero 5
          break;
        case 7:
          Serial.println("100");
          iso400();//Change to iso100 if using hero 5
          break;
        case 8:
          Serial.println("End");
          iso_limit = 0;
          break;
      }
    }

    else if (menu_splash_screen == 5) {
      iso_mode += 1;
      switch (iso_mode) {
        case 1:
          Serial.println("Max");
          iso_max();
          break;
        case 2:
          Serial.println("Lock");
          iso_lock();
          break;
        case 3:
          Serial.println("End");
          iso_mode = 0;
          break;
      }
    }
    else if (menu_splash_screen == 6) {
      sharpness += 1;
      switch (sharpness) {
        case 1:
          Serial.println("High");
          sharpnesshigh();
          break;
        case 2:
          Serial.println("Medium");
          sharpnesslow();
          break;
        case 3:
          Serial.println("Low");
          sharpnessmedium();
          break;

        case 4:
          Serial.println("End");
          sharpness = 0;
          break;
      }
    }

    else if (menu_splash_screen == 7) {
      EV += 1;
      switch (EV) {
        case 1:
          Serial.println("+2");
          EVP2();
          break;
        case 2:
          Serial.println("+1.5");
          EVP15();
          break;
        case 3:
          Serial.println("+1.0");
          EVP1();
          break;
        case 4:
          Serial.println("+0.5");
          EVP05();
          break;
        case 5:
          Serial.println("0.0");
          EVZero();
          break;
        case 6:
          Serial.println("-0.5");
          EVN05();
          break;
        case 7:
          Serial.println("-1.0");
          EVN1();
          break;
        case 8:
          Serial.println("-1.5");
          EVN15();
          break;
        case 9:
          Serial.println("-2.0");
          EVN2();
          break;
        case 10:
          Serial.println("End");
          EV = 0;
          break;
      }
    }

    else if (menu_splash_screen == 8) {
      Exposure += 1;
      switch (Exposure) {
        case 1:
          Serial.println("Auto");
          exposure_auto();
          break;
        case 2:
          Serial.println("24FPS");
          Exposure_Setting = 1;
          break;
        case 3:
          Serial.println("30FPS");
          Exposure_Setting = 2;
          break;
        case 4:
          Serial.println("48FPS");
          Exposure_Setting = 3;
          break;
        case 5:
          Serial.println("60FPS");
          Exposure_Setting = 4;
          break;
        case 6:
          Serial.println("90FPS");
          Exposure_Setting = 5;
          break;
        case 7:
          Serial.println("120FPS");
          Exposure_Setting = 6;
          break;
        case 8:
          Serial.println("240FPS");
          Exposure_Setting = 7;
          break;
        case 9:
          Serial.println("End");
          Exposure_Setting = 0;
          Exposure = 0;
          break;
      }
    }

    else if (menu_splash_screen == 8) {
      Exposure += 1;
      switch (Exposure) {
        case 1:
          Serial.println("Auto");
          exposure_auto();
          break;
        case 2:
          Serial.println("24FPS");
          Exposure_Setting = 1;
          break;
        case 3:
          Serial.println("30FPS");
          Exposure_Setting = 2;
          break;
        case 4:
          Serial.println("48FPS");
          Exposure_Setting = 3;
          break;
        case 5:
          Serial.println("60FPS");
          Exposure_Setting = 4;
          break;
        case 6:
          Serial.println("90FPS");
          Exposure_Setting = 5;
          break;
        case 7:
          Serial.println("120FPS");
          Exposure_Setting = 6;
          break;
        case 8:
          Serial.println("240FPS");
          Exposure_Setting = 7;
          break;
        case 9:
          Serial.println("End");
          Exposure_Setting = 0;
          Exposure = 0;
          break;
      }
    }

    else if ((menu_splash_screen == 9) && (Exposure_Setting > 0)) {
      if (Exposure_Setting == 1) {
        Exposure_Page += 1;
        switch (Exposure_Page) {
          case 1:
            Serial.println("1/24");
            exp24();
            break;
          case 2:
            Serial.println("1/48");
            exp48();
            break;
          case 3:
            Serial.println("1/96");
            exp96();
            break;
          case 4:
            Serial.println("End");
            Exposure_Page = 0;
            break;
        }
      }
      
     else if (Exposure_Setting == 2) {
        Exposure_Page += 1;
        switch (Exposure_Page) {
          case 1:
            Serial.println("1/30");
            exp30();
            break;
          case 2:
            Serial.println("1/60");
            exp60();
            break;
          case 3:
            Serial.println("1/120");
            exp120();
            break;
          case 4:
            Serial.println("End");
            Exposure_Page = 0;
            break;
        }
      }
      
      else if (Exposure_Setting == 3) {
        Exposure_Page += 1;
        switch (Exposure_Page) {
          case 1:
            Serial.println("1/48");
            exp48();
            break;
          case 2:
            Serial.println("1/96");
            exp96();
            break;
          case 3:
            Serial.println("1/192");
            exp192();
            break;
          case 4:
            Serial.println("End");
            Exposure_Page = 0;
            break;
        }
      }
      else if (Exposure_Setting == 4) {
        Exposure_Page += 1;
        switch (Exposure_Page) {
          case 1:
            Serial.println("1/60");
            exp60();
            break;
          case 2:
            Serial.println("1/120");
            exp120();
            break;
          case 3:
            Serial.println("1/240");
            exp240();
            break;
          case 4:
            Serial.println("End");
            Exposure_Page = 0;
            break;
        }
      }
      
      else if (Exposure_Setting == 5) {
        Exposure_Page += 1;
        switch (Exposure_Page) {
          case 1:
            Serial.println("1/90");
            exp90();
            break;
          case 2:
            Serial.println("1/180");
            exp180();
            break;
          case 3:
            Serial.println("1/360");
            exp360();
            break;
          case 4:
            Serial.println("End");
            Exposure_Page = 0;
            break;
        }
      }

      else if (Exposure_Setting == 6) {
        Exposure_Page += 1;
        switch (Exposure_Page) {
          case 1:
            Serial.println("1/120");
            exp120();
            break;
          case 2:
            Serial.println("1/240");
            exp240();
            break;
          case 3:
            Serial.println("1/480");
            exp480();
            break;
          case 4:
            Serial.println("End");
            Exposure_Page = 0;
            break;
        }
      }

      else if (Exposure_Setting == 7) {
        Exposure_Page += 1;
        switch (Exposure_Page) {
          case 1:
            Serial.println("1/120");
            exp120();
            break;
          case 2:
            Serial.println("1/240");
            exp240();
            break;
          case 3:
            Serial.println("1/480");
            exp480();
            break;
          case 4:
            Serial.println("End");
            Exposure_Page = 0;
            break;
        }
      } 
    }
    
    lastDebounceButton2 = millis();
  }
}
