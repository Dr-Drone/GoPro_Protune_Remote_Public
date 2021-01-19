void menu_display() {

  switch (menu_splash_screen) {
    case 1:
      display.stopscroll();
      display.setTextColor(WHITE);
      display.setCursor(30, 24);
      display.setTextSize(1);
      display.println("PT: ");
      display.display();
      delay(150);
      display.clearDisplay();

      if (menu_splash_screen == 1 && PT == 1) {

        display.setTextColor(WHITE);
        display.setCursor(30, 24);
        display.setTextSize(1);
        display.println("PT: On");
        display.display();
        delay(150);
        display.clearDisplay();

      }

      else if (menu_splash_screen == 1 && PT == 2) {

        display.setTextColor(WHITE);
        display.setCursor(30, 24);
        display.setTextSize(1);
        display.println("PT: Off");
        display.display();
        delay(150);
        display.clearDisplay();

      }

      break;

    case 2:

      display.setTextColor(WHITE);
      display.setCursor(40, 24);
      display.setTextSize(1);
      display.println("WB: ");
      display.display();
      delay(150);
      display.clearDisplay();


      if (menu_splash_screen == 2 && white_balance == 1) {

        display.setTextColor(WHITE);
        display.setCursor(40, 24);
        display.setTextSize(1);
        display.println("WB: Auto");
        display.display();
        delay(150);
        display.clearDisplay();

      }


      else if (menu_splash_screen == 2 && white_balance == 2) {

        display.setTextColor(WHITE);
        display.setCursor(40, 24);
        display.setTextSize(1);
        display.println("WB: 3000K");
        display.display();
        delay(150);
        display.clearDisplay();

      }

      else if (menu_splash_screen == 2 && white_balance == 3) {

        display.setTextColor(WHITE);
        display.setCursor(40, 24);
        display.setTextSize(1);
        display.println("WB: 4000K");
        display.display();
        delay(150);
        display.clearDisplay();

      }

      else if (menu_splash_screen == 2 && white_balance == 4) {

        display.setTextColor(WHITE);
        display.setCursor(40, 24);
        display.setTextSize(1);
        display.println("WB: 4800K");
        display.display();
        delay(150);
        display.clearDisplay();

      }

      else if (menu_splash_screen == 2 && white_balance == 5) {

        display.setTextColor(WHITE);
        display.setCursor(40, 24);
        display.setTextSize(1);
        display.println("WB: 5500K");
        display.display();
        delay(150);
        display.clearDisplay();

      }

      else if (menu_splash_screen == 2 && white_balance == 6) {

        display.setTextColor(WHITE);
        display.setCursor(40, 24);
        display.setTextSize(1);
        display.println("WB: 6000K");
        display.display();
        delay(150);
        display.clearDisplay();

      }

      else if (menu_splash_screen == 2 && white_balance == 7) {

        display.setTextColor(WHITE);
        display.setCursor(40, 24);
        display.setTextSize(1);
        display.println("WB: 6500K");
        display.display();
        delay(150);
        display.clearDisplay();

      }

      else if (menu_splash_screen == 2 && white_balance == 8) {

        display.setTextColor(WHITE);
        display.setCursor(40, 24);
        display.setTextSize(1);
        display.println("WB: Native");
        display.display();
        delay(150);
        display.clearDisplay();

      }

      break;
    //////////////////////////////////////////////
    case 3:
      display.setTextColor(WHITE);
      display.setCursor(30, 24);
      display.setTextSize(1);
      display.println("Color: ");
      display.display();
      delay(150);
      display.clearDisplay();

      if (menu_splash_screen == 3 && color == 1) {

        display.setTextColor(WHITE);
        display.setCursor(30, 24);
        display.setTextSize(1);
        display.println("Color: GP");
        display.display();
        delay(150);
        display.clearDisplay();

      }

      else if (menu_splash_screen == 3 && color == 2) {

        display.setTextColor(WHITE);
        display.setCursor(30, 24);
        display.setTextSize(1);
        display.println("Color: Flat");
        display.display();
        delay(150);
        display.clearDisplay();
      }

      break;

    //////////////////////////////////////////
    case 4:
      display.setTextColor(WHITE);
      display.setCursor(30, 24);
      display.setTextSize(1);
      display.println("ISO Limit:");
      display.display();
      delay(150);
      display.clearDisplay();


      if (menu_splash_screen == 4 && iso_limit == 1) {

        display.setTextColor(WHITE);
        display.setCursor(30, 24);
        display.setTextSize(1);
        display.println("ISO Limit: 6400");
        display.display();
        delay(150);
        display.clearDisplay();

      }


      else if (menu_splash_screen == 4 && iso_limit == 2) {

        display.setTextColor(WHITE);
        display.setCursor(30, 24);
        display.setTextSize(1);
        display.println("ISO Limit: 3200");
        display.display();
        delay(150);
        display.clearDisplay();

      }

      else if (menu_splash_screen == 4 && iso_limit == 3) {

        display.setTextColor(WHITE);
        display.setCursor(30, 24);
        display.setTextSize(1);
        display.println("ISO Limit: 1600");
        display.display();
        delay(150);
        display.clearDisplay();

      }

      else if (menu_splash_screen == 4 && iso_limit == 4) {

        display.setTextColor(WHITE);
        display.setCursor(30, 24);
        display.setTextSize(1);
        display.println("ISO Limit: 800");
        display.display();
        delay(150);
        display.clearDisplay();

      }

      else if (menu_splash_screen == 4 && iso_limit == 5) {

        display.setTextColor(WHITE);
        display.setCursor(30, 24);
        display.setTextSize(1);
        display.println("ISO Limit: 400");
        display.display();
        delay(150);
        display.clearDisplay();

      }

      else if (menu_splash_screen == 4 && iso_limit == 6) {

        display.setTextColor(WHITE);
        display.setCursor(30, 24);
        display.setTextSize(1);
        display.println("ISO Limit: 200");
        display.display();
        delay(150);
        display.clearDisplay();

      }

      else if (menu_splash_screen == 4 && iso_limit == 7) {

        display.setTextColor(WHITE);
        display.setCursor(30, 24);
        display.setTextSize(1);
        display.println("ISO Limit: 100");
        display.display();
        delay(150);
        display.clearDisplay();

      }



      break;


    /////////////////////////////////////////
    case 5:
      display.setTextColor(WHITE);
      display.setCursor(30, 24);
      display.setTextSize(1);
      display.println("ISO Mode: ");
      display.display();
      delay(150);
      display.clearDisplay();

      if (menu_splash_screen == 5 && iso_mode == 1) {

        display.setTextColor(WHITE);
        display.setCursor(30, 24);
        display.setTextSize(1);
        display.println("ISO Mode: Max");
        display.display();
        delay(150);
        display.clearDisplay();

      }

      else if (menu_splash_screen == 5 && iso_mode == 2) {

        display.setTextColor(WHITE);
        display.setCursor(30, 24);
        display.setTextSize(1);
        display.println("ISO Mode: Lock");
        display.display();
        delay(150);
        display.clearDisplay();
      }



      break;

    //////////////////////////////////////////
    case 6:
      display.setTextColor(WHITE);
      display.setCursor(24, 24);
      display.setTextSize(1);
      display.println("Sharpness: ");
      display.display();
      delay(150);
      display.clearDisplay();

      if (menu_splash_screen == 6 && sharpness == 1) {

        display.setTextColor(WHITE);
        display.setCursor(24, 24);
        display.setTextSize(1);
        display.println("Sharpness: High");
        display.display();
        delay(150);
        display.clearDisplay();

      }

      else if (menu_splash_screen == 6 && sharpness == 2) {

        display.setTextColor(WHITE);
        display.setCursor(24, 24);
        display.setTextSize(1);
        display.println("Sharpness: Med");
        display.display();
        delay(150);
        display.clearDisplay();
      }

      else if (menu_splash_screen == 6 && sharpness == 3) {

        display.setTextColor(WHITE);
        display.setCursor(24, 24);
        display.setTextSize(1);
        display.println("Sharpness: Low");
        display.display();
        delay(150);
        display.clearDisplay();
      }

      break;

    ////////////////////////////////////////

    case 7:
      display.setTextColor(WHITE);
      display.setCursor(45, 24);
      display.setTextSize(1);
      display.println("EV: ");
      display.display();
      delay(150);
      display.clearDisplay();

      if (menu_splash_screen == 7 && EV == 1) {

        display.setTextColor(WHITE);
        display.setCursor(45, 24);
        display.setTextSize(1);
        display.println("EV: +2.0");
        display.display();
        delay(150);
        display.clearDisplay();

      }


      else if (menu_splash_screen == 7 && EV == 2) {

        display.setTextColor(WHITE);
        display.setCursor(45, 24);
        display.setTextSize(1);
        display.println("EV: +1.5");
        display.display();
        delay(150);
        display.clearDisplay();

      }

      else if (menu_splash_screen == 7 && EV == 3) {

        display.setTextColor(WHITE);
        display.setCursor(45, 24);
        display.setTextSize(1);
        display.println("EV: +1.0");
        display.display();
        delay(150);
        display.clearDisplay();

      }

      else if (menu_splash_screen == 7 && EV == 4) {

        display.setTextColor(WHITE);
        display.setCursor(45, 24);
        display.setTextSize(1);
        display.println("EV: +0.5");
        display.display();
        delay(150);
        display.clearDisplay();

      }

      else if (menu_splash_screen == 7 && EV == 5) {

        display.setTextColor(WHITE);
        display.setCursor(45, 24);
        display.setTextSize(1);
        display.println("EV: +0.0");
        display.display();
        delay(150);
        display.clearDisplay();

      }

      else if (menu_splash_screen == 7 && EV == 6) {

        display.setTextColor(WHITE);
        display.setCursor(45, 24);
        display.setTextSize(1);
        display.println("EV: -0.5");
        display.display();
        delay(150);
        display.clearDisplay();

      }

      else if (menu_splash_screen == 7 && EV == 7) {

        display.setTextColor(WHITE);
        display.setCursor(45, 24);
        display.setTextSize(1);
        display.println("EV: -1.0");
        display.display();
        delay(150);
        display.clearDisplay();

      }

      else if (menu_splash_screen == 7 && EV == 8) {

        display.setTextColor(WHITE);
        display.setCursor(45, 24);
        display.setTextSize(1);
        display.println("EV: -1.5");
        display.display();
        delay(150);
        display.clearDisplay();

      }

      else if (menu_splash_screen == 7 && EV == 9) {

        display.setTextColor(WHITE);
        display.setCursor(45, 24);
        display.setTextSize(1);
        display.println("EV: -2.0");
        display.display();
        delay(150);
        display.clearDisplay();

      }


      break;

    /////////////////////////////////////

    case 8:
      display.setTextColor(WHITE);
      display.setCursor(10, 24);
      display.setTextSize(1);
      display.println("Exp (FPS): ");
      display.display();
      delay(150);
      display.clearDisplay();


      if (menu_splash_screen == 8 && Exposure == 1) {

        display.setTextColor(WHITE);
        display.setCursor(10, 24);
        display.setTextSize(1);
        display.println("Exp (FPS): Auto");
        display.display();
        delay(150);
        display.clearDisplay();

      }
      
      else if (menu_splash_screen == 8 && Exposure == 2) {

        display.setTextColor(WHITE);
        display.setCursor(10, 24);
        display.setTextSize(1);
        display.println("Exp (FPS): 24FPS");
        display.display();
        delay(150);
        display.clearDisplay();

      }


      else if (menu_splash_screen == 8 && Exposure == 3) {

        display.setTextColor(WHITE);
        display.setCursor(10, 24);
        display.setTextSize(1);
        display.println("Exp (FPS): 30FPS");
        display.display();
        delay(150);
        display.clearDisplay();

      }

      else if (menu_splash_screen == 8 && Exposure == 4) {

        display.setTextColor(WHITE);
        display.setCursor(10, 24);
        display.setTextSize(1);
        display.println("Exp (FPS): 48FPS");
        display.display();
        delay(150);
        display.clearDisplay();

      }

      else if (menu_splash_screen == 8 && Exposure == 5) {

        display.setTextColor(WHITE);
        display.setCursor(10, 24);
        display.setTextSize(1);
        display.println("Exp (FPS): 60FPS");
        display.display();
        delay(150);
        display.clearDisplay();

      }

      else if (menu_splash_screen == 8 && Exposure == 6) {

        display.setTextColor(WHITE);
        display.setCursor(10, 24);
        display.setTextSize(1);
        display.println("Exp (FPS): 90FPS");
        display.display();
        delay(150);
        display.clearDisplay();

      }

      else if (menu_splash_screen == 8 && Exposure == 7) {

        display.setTextColor(WHITE);
        display.setCursor(10, 24);
        display.setTextSize(1);
        display.println("Exp (FPS): 120FPS");
        display.display();
        delay(150);
        display.clearDisplay();

      }

      else if (menu_splash_screen == 8 && Exposure == 8) {

        display.setTextColor(WHITE);
        display.setCursor(10, 24);
        display.setTextSize(1);
        display.println("Exp (FPS): 240FPS");
        display.display();
        delay(150);
        display.clearDisplay();

      }

      break;

    //////////////////////////////////////

    case 9:

      if (Exposure_Setting == 1) {

        display.setTextColor(WHITE);
        display.setCursor(10, 24);
        display.setTextSize(1);
        display.println("Exp 24FPS: ");
        display.display();
        delay(150);
        display.clearDisplay();


        if (menu_splash_screen == 9 && Exposure_Page == 1) {

          display.setTextColor(WHITE);
          display.setCursor(10, 24);
          display.setTextSize(1);
          display.println("Exp 24FPS: 1/24");
          display.display();
          delay(150);
          display.clearDisplay();

        }


        else if (menu_splash_screen == 9 && Exposure_Page == 2) {

          display.setTextColor(WHITE);
          display.setCursor(10, 24);
          display.setTextSize(1);
          display.println("Exp 24FPS: 1/48");
          display.display();
          delay(150);
          display.clearDisplay();

        }

        else if (menu_splash_screen == 9 && Exposure_Page == 3) {

          display.setTextColor(WHITE);
          display.setCursor(10, 24);
          display.setTextSize(1);
          display.println("Exp 24FPS: 1/96");
          display.display();
          delay(150);
          display.clearDisplay();

        }

      }

      if (Exposure_Setting == 2) {

        display.setTextColor(WHITE);
        display.setCursor(10, 24);
        display.setTextSize(1);
        display.println("Exp 30FPS: ");
        display.display();
        delay(150);
        display.clearDisplay();


        if (menu_splash_screen == 9 && Exposure_Page == 1) {

          display.setTextColor(WHITE);
          display.setCursor(10, 24);
          display.setTextSize(1);
          display.println("Exp 30FPS: 1/30");
          display.display();
          delay(150);
          display.clearDisplay();

        }


        else if (menu_splash_screen == 9 && Exposure_Page == 2) {

          display.setTextColor(WHITE);
          display.setCursor(10, 24);
          display.setTextSize(1);
          display.println("Exp 30FPS: 1/60");
          display.display();
          delay(150);
          display.clearDisplay();

        }

        else if (menu_splash_screen == 9 && Exposure_Page == 3) {

          display.setTextColor(WHITE);
          display.setCursor(10, 24);
          display.setTextSize(1);
          display.println("Exp 30FPS: 1/120");
          display.display();
          delay(150);
          display.clearDisplay();

        }

      }

      if (Exposure_Setting == 3) {

        display.setTextColor(WHITE);
        display.setCursor(10, 24);
        display.setTextSize(1);
        display.println("Exp 48FPS: ");
        display.display();
        delay(150);
        display.clearDisplay();


        if (menu_splash_screen == 9 && Exposure_Page == 1) {

          display.setTextColor(WHITE);
          display.setCursor(10, 24);
          display.setTextSize(1);
          display.println("Exp 48FPS: 1/48");
          display.display();
          delay(150);
          display.clearDisplay();

        }


        else if (menu_splash_screen == 9 && Exposure_Page == 2) {

          display.setTextColor(WHITE);
          display.setCursor(10, 24);
          display.setTextSize(1);
          display.println("Exp 48FPS: 1/96");
          display.display();
          delay(150);
          display.clearDisplay();

        }

        else if (menu_splash_screen == 9 && Exposure_Page == 3) {

          display.setTextColor(WHITE);
          display.setCursor(10, 24);
          display.setTextSize(1);
          display.println("Exp 48FPS: 1/192");
          display.display();
          delay(150);
          display.clearDisplay();

        }

      }

      if (Exposure_Setting == 4) {

        display.setTextColor(WHITE);
        display.setCursor(10, 24);
        display.setTextSize(1);
        display.println("Exp 60FPS: ");
        display.display();
        delay(150);
        display.clearDisplay();


        if (menu_splash_screen == 9 && Exposure_Page == 1) {

          display.setTextColor(WHITE);
          display.setCursor(10, 24);
          display.setTextSize(1);
          display.println("Exp 60FPS: 1/60");
          display.display();
          delay(150);
          display.clearDisplay();

        }


        else if (menu_splash_screen == 9 && Exposure_Page == 2) {

          display.setTextColor(WHITE);
          display.setCursor(10, 24);
          display.setTextSize(1);
          display.println("Exp 60FPS: 1/120");
          display.display();
          delay(150);
          display.clearDisplay();

        }

        else if (menu_splash_screen == 9 && Exposure_Page == 3) {

          display.setTextColor(WHITE);
          display.setCursor(10, 24);
          display.setTextSize(1);
          display.println("Exp 60FPS: 1/240");
          display.display();
          delay(150);
          display.clearDisplay();

        }

      }

      if (Exposure_Setting == 5) {

        display.setTextColor(WHITE);
        display.setCursor(10, 24);
        display.setTextSize(1);
        display.println("Exp 90FPS: ");
        display.display();
        delay(150);
        display.clearDisplay();


        if (menu_splash_screen == 9 && Exposure_Page == 1) {

          display.setTextColor(WHITE);
          display.setCursor(10, 24);
          display.setTextSize(1);
          display.println("Exp 90FPS: 1/90");
          display.display();
          delay(150);
          display.clearDisplay();

        }


        else if (menu_splash_screen == 9 && Exposure_Page == 2) {

          display.setTextColor(WHITE);
          display.setCursor(10, 24);
          display.setTextSize(1);
          display.println("Exp 90FPS: 1/180");
          display.display();
          delay(150);
          display.clearDisplay();

        }

        else if (menu_splash_screen == 9 && Exposure_Page == 3) {

          display.setTextColor(WHITE);
          display.setCursor(10, 24);
          display.setTextSize(1);
          display.println("Exp 90FPS: 1/360");
          display.display();
          delay(150);
          display.clearDisplay();

        }

      }

      if (Exposure_Setting == 6) {

        display.setTextColor(WHITE);
        display.setCursor(10, 24);
        display.setTextSize(1);
        display.println("Exp 120FPS: ");
        display.display();
        delay(150);
        display.clearDisplay();


        if (menu_splash_screen == 9 && Exposure_Page == 1) {

          display.setTextColor(WHITE);
          display.setCursor(10, 24);
          display.setTextSize(1);
          display.println("Exp 120FPS: 1/120");
          display.display();
          delay(150);
          display.clearDisplay();

        }


        else if (menu_splash_screen == 9 && Exposure_Page == 2) {

          display.setTextColor(WHITE);
          display.setCursor(10, 24);
          display.setTextSize(1);
          display.println("Exp 120FPS: 1/240");
          display.display();
          delay(150);
          display.clearDisplay();

        }

        else if (menu_splash_screen == 9 && Exposure_Page == 3) {

          display.setTextColor(WHITE);
          display.setCursor(10, 24);
          display.setTextSize(1);
          display.println("Exp 120FPS: 1/480");
          display.display();
          delay(150);
          display.clearDisplay();

        }

      }

      if (Exposure_Setting == 7) {

        display.setTextColor(WHITE);
        display.setCursor(10, 24);
        display.setTextSize(1);
        display.println("Exp 240FPS: ");
        display.display();
        delay(150);
        display.clearDisplay();


        if (menu_splash_screen == 9 && Exposure_Page == 1) {

          display.setTextColor(WHITE);
          display.setCursor(10, 24);
          display.setTextSize(1);
          display.println("Exp 240FPS: 1/120");
          display.display();
          delay(150);
          display.clearDisplay();

        }


        else if (menu_splash_screen == 9 && Exposure_Page == 2) {

          display.setTextColor(WHITE);
          display.setCursor(10, 24);
          display.setTextSize(1);
          display.println("Exp 240FPS: 1/240");
          display.display();
          delay(150);
          display.clearDisplay();

        }

        else if (menu_splash_screen == 9 && Exposure_Page == 3) {

          display.setTextColor(WHITE);
          display.setCursor(10, 24);
          display.setTextSize(1);
          display.println("Exp 240FPS: 1/480");
          display.display();
          delay(150);
          display.clearDisplay();

        }

      }

      break;


  }
}
