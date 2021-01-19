void menu_display() {

  switch (menu_splash_screen) {
    case 1:
      tft.fillScreen(TFT_BLACK);
      tft.setTextColor(TFT_WHITE, TFT_BLACK);
      tft.setTextSize(2);
      tft.setCursor(80, 55);
      tft.println("PT: ");
      delay(150);

      if (menu_splash_screen == 1 && PT == 1) {

        tft.fillScreen(TFT_BLACK);
        tft.setTextColor(TFT_WHITE, TFT_BLACK);
        tft.setTextSize(2);
        tft.setCursor(80, 55);
        tft.println("PT: On");
        delay(150);

      }

      else if (menu_splash_screen == 1 && PT == 2) {

        tft.fillScreen(TFT_BLACK);
        tft.setTextColor(TFT_WHITE, TFT_BLACK);
        tft.setTextSize(2);
        tft.setCursor(80, 55);
        tft.println("PT: Off");
        delay(150);

      }

      break;

    case 2:

      tft.fillScreen(TFT_BLACK);
      tft.setTextColor(TFT_WHITE, TFT_BLACK);
      tft.setTextSize(2);
      tft.setCursor(70, 55);
      tft.println("WB: ");
      delay(150);


      if (menu_splash_screen == 2 && white_balance == 1) {

        tft.fillScreen(TFT_BLACK);
        tft.setTextColor(TFT_WHITE, TFT_BLACK);
        tft.setTextSize(2);
        tft.setCursor(70, 55);
        tft.println("WB: Auto");
        delay(150);

      }


      else if (menu_splash_screen == 2 && white_balance == 2) {

        tft.fillScreen(TFT_BLACK);
        tft.setTextColor(TFT_WHITE, TFT_BLACK);
        tft.setTextSize(2);
        tft.setCursor(70, 55);
        tft.println("WB: 3000K");
        delay(150);


      }

      else if (menu_splash_screen == 2 && white_balance == 3) {

        tft.fillScreen(TFT_BLACK);
        tft.setTextColor(TFT_WHITE, TFT_BLACK);
        tft.setTextSize(2);
        tft.setCursor(70, 55);
        tft.println("WB: 4000K");
        delay(150);


      }

      else if (menu_splash_screen == 2 && white_balance == 4) {

        tft.fillScreen(TFT_BLACK);
        tft.setTextColor(TFT_WHITE, TFT_BLACK);
        tft.setTextSize(2);
        tft.setCursor(70, 55);
        tft.println("WB: 4800K");
        delay(150);


      }

      else if (menu_splash_screen == 2 && white_balance == 5) {

        tft.fillScreen(TFT_BLACK);
        tft.setTextColor(TFT_WHITE, TFT_BLACK);
        tft.setTextSize(2);
        tft.setCursor(70, 55);
        tft.println("WB: 5500K");
        delay(150);

      }

      else if (menu_splash_screen == 2 && white_balance == 6) {

        tft.fillScreen(TFT_BLACK);
        tft.setTextColor(TFT_WHITE, TFT_BLACK);
        tft.setTextSize(2);
        tft.setCursor(70, 55);
        tft.println("WB: 6000K");
        delay(150);


      }

      else if (menu_splash_screen == 2 && white_balance == 7) {

        tft.fillScreen(TFT_BLACK);
        tft.setTextColor(TFT_WHITE, TFT_BLACK);
        tft.setTextSize(2);
        tft.setCursor(70, 55);
        tft.println("WB: 6500K");
        delay(150);


      }

      else if (menu_splash_screen == 2 && white_balance == 8) {

        tft.fillScreen(TFT_BLACK);
        tft.setTextColor(TFT_WHITE, TFT_BLACK);
        tft.setTextSize(2);
        tft.setCursor(70, 55);
        tft.println("WB: Native");
        delay(150);

      }

      break;
    //////////////////////////////////////////////
    case 3:

      tft.fillScreen(TFT_BLACK);
      tft.setTextColor(TFT_WHITE, TFT_BLACK);
      tft.setTextSize(2);
      tft.setCursor(60, 55);
      tft.println("Color: ");
      delay(150);

      if (menu_splash_screen == 3 && color == 1) {

        tft.fillScreen(TFT_BLACK);
        tft.setTextColor(TFT_WHITE, TFT_BLACK);
        tft.setTextSize(2);
        tft.setCursor(60, 55);
        tft.println("Color: GP");
        delay(150);

      }

      else if (menu_splash_screen == 3 && color == 2) {

        tft.fillScreen(TFT_BLACK);
        tft.setTextColor(TFT_WHITE, TFT_BLACK);
        tft.setTextSize(2);
        tft.setCursor(60, 55);
        tft.println("Color: Flat");
        delay(150);

      }

      break;

    //////////////////////////////////////////
    case 4:

      tft.fillScreen(TFT_BLACK);
      tft.setTextColor(TFT_WHITE, TFT_BLACK);
      tft.setTextSize(2);
      tft.setCursor(30, 55);
      tft.println("ISO Limit: ");
      delay(150);


      if (menu_splash_screen == 4 && iso_limit == 1) {

        tft.fillScreen(TFT_BLACK);
        tft.setTextColor(TFT_WHITE, TFT_BLACK);
        tft.setTextSize(2);
        tft.setCursor(30, 55);
        tft.println("ISO Limit: 6400");
        delay(150);


      }


      else if (menu_splash_screen == 4 && iso_limit == 2) {

        tft.fillScreen(TFT_BLACK);
        tft.setTextColor(TFT_WHITE, TFT_BLACK);
        tft.setTextSize(2);
        tft.setCursor(30, 55);
        tft.println("ISO Limit: 3200");
        delay(150);


      }

      else if (menu_splash_screen == 4 && iso_limit == 3) {

        tft.fillScreen(TFT_BLACK);
        tft.setTextColor(TFT_WHITE, TFT_BLACK);
        tft.setTextSize(2);
        tft.setCursor(30, 55);
        tft.println("ISO Limit: 1600");
        delay(150);


      }

      else if (menu_splash_screen == 4 && iso_limit == 4) {

        tft.fillScreen(TFT_BLACK);
        tft.setTextColor(TFT_WHITE, TFT_BLACK);
        tft.setTextSize(2);
        tft.setCursor(30, 55);
        tft.println("ISO Limit: 800");
        delay(150);


      }

      else if (menu_splash_screen == 4 && iso_limit == 5) {

        tft.fillScreen(TFT_BLACK);
        tft.setTextColor(TFT_WHITE, TFT_BLACK);
        tft.setTextSize(2);
        tft.setCursor(30, 55);
        tft.println("ISO Limit: 400");
        delay(150);

      }

      else if (menu_splash_screen == 4 && iso_limit == 6) {

        tft.fillScreen(TFT_BLACK);
        tft.setTextColor(TFT_WHITE, TFT_BLACK);
        tft.setTextSize(2);
        tft.setCursor(30, 55);
        tft.println("ISO Limit: 200");
        delay(150);


      }

      else if (menu_splash_screen == 4 && iso_limit == 7) {

        tft.fillScreen(TFT_BLACK);
        tft.setTextColor(TFT_WHITE, TFT_BLACK);
        tft.setTextSize(2);
        tft.setCursor(30, 55);
        tft.println("ISO Limit: 100");
        delay(150);


      }



      break;


    /////////////////////////////////////////
    case 5:

      tft.fillScreen(TFT_BLACK);
      tft.setTextColor(TFT_WHITE, TFT_BLACK);
      tft.setTextSize(2);
      tft.setCursor(40, 55);
      tft.println("ISO Mode: ");
      delay(150);


      if (menu_splash_screen == 5 && iso_mode == 1) {

        tft.fillScreen(TFT_BLACK);
        tft.setTextColor(TFT_WHITE, TFT_BLACK);
        tft.setTextSize(2);
        tft.setCursor(40, 55);
        tft.println("ISO Mode: Max");
        delay(150);

      }

      else if (menu_splash_screen == 5 && iso_mode == 2) {

        tft.fillScreen(TFT_BLACK);
        tft.setTextColor(TFT_WHITE, TFT_BLACK);
        tft.setTextSize(2);
        tft.setCursor(40, 55);
        tft.println("ISO Mode: Lock");
        delay(150);

      }



      break;

    //////////////////////////////////////////
    case 6:

      tft.fillScreen(TFT_BLACK);
      tft.setTextColor(TFT_WHITE, TFT_BLACK);
      tft.setTextSize(2);
      tft.setCursor(30, 55);
      tft.println("Sharpness: ");
      delay(150);


      if (menu_splash_screen == 6 && sharpness == 1) {

        tft.fillScreen(TFT_BLACK);
        tft.setTextColor(TFT_WHITE, TFT_BLACK);
        tft.setTextSize(2);
        tft.setCursor(30, 55);
        tft.println("Sharpness: High");
        delay(150);

      }

      else if (menu_splash_screen == 6 && sharpness == 2) {

        tft.fillScreen(TFT_BLACK);
        tft.setTextColor(TFT_WHITE, TFT_BLACK);
        tft.setTextSize(2);
        tft.setCursor(30, 55);
        tft.println("Sharpness: Med");
        delay(150);

      }

      else if (menu_splash_screen == 6 && sharpness == 3) {

        tft.fillScreen(TFT_BLACK);
        tft.setTextColor(TFT_WHITE, TFT_BLACK);
        tft.setTextSize(2);
        tft.setCursor(30, 55);
        tft.println("Sharpness: Low");
        delay(150);

      }

      break;

    ////////////////////////////////////////

    case 7:

      tft.fillScreen(TFT_BLACK);
      tft.setTextColor(TFT_WHITE, TFT_BLACK);
      tft.setTextSize(2);
      tft.setCursor(80, 55);
      tft.println("EV: ");
      delay(150);

      if (menu_splash_screen == 7 && EV == 1) {

        tft.fillScreen(TFT_BLACK);
        tft.setTextColor(TFT_WHITE, TFT_BLACK);
        tft.setTextSize(2);
        tft.setCursor(80, 55);
        tft.println("EV: +2.0");
        delay(150);

      }


      else if (menu_splash_screen == 7 && EV == 2) {

        tft.fillScreen(TFT_BLACK);
        tft.setTextColor(TFT_WHITE, TFT_BLACK);
        tft.setTextSize(2);
        tft.setCursor(80, 55);
        tft.println("EV: +1.5");
        delay(150);

      }

      else if (menu_splash_screen == 7 && EV == 3) {

        tft.fillScreen(TFT_BLACK);
        tft.setTextColor(TFT_WHITE, TFT_BLACK);
        tft.setTextSize(2);
        tft.setCursor(80, 55);
        tft.println("EV: +1.0");
        delay(150);


      }

      else if (menu_splash_screen == 7 && EV == 4) {

        tft.fillScreen(TFT_BLACK);
        tft.setTextColor(TFT_WHITE, TFT_BLACK);
        tft.setTextSize(2);
        tft.setCursor(80, 55);
        tft.println("EV: +0.5");
        delay(150);

      }

      else if (menu_splash_screen == 7 && EV == 5) {

        tft.fillScreen(TFT_BLACK);
        tft.setTextColor(TFT_WHITE, TFT_BLACK);
        tft.setTextSize(2);
        tft.setCursor(80, 55);
        tft.println("EV: +0.0");
        delay(150);


      }

      else if (menu_splash_screen == 7 && EV == 6) {

        tft.fillScreen(TFT_BLACK);
        tft.setTextColor(TFT_WHITE, TFT_BLACK);
        tft.setTextSize(2);
        tft.setCursor(80, 55);
        tft.println("EV: -0.5");
        delay(150);


      }

      else if (menu_splash_screen == 7 && EV == 7) {

        tft.fillScreen(TFT_BLACK);
        tft.setTextColor(TFT_WHITE, TFT_BLACK);
        tft.setTextSize(2);
        tft.setCursor(80, 55);
        tft.println("EV: -1.0");
        delay(150);
      }

      else if (menu_splash_screen == 7 && EV == 8) {

        tft.fillScreen(TFT_BLACK);
        tft.setTextColor(TFT_WHITE, TFT_BLACK);
        tft.setTextSize(2);
        tft.setCursor(80, 55);
        tft.println("EV: -1.5");
        delay(150);

      }

      else if (menu_splash_screen == 7 && EV == 9) {

        tft.fillScreen(TFT_BLACK);
        tft.setTextColor(TFT_WHITE, TFT_BLACK);
        tft.setTextSize(2);
        tft.setCursor(80, 55);
        tft.println("EV: -2.0");
        delay(150);

      }


      break;

    /////////////////////////////////////

    case 8:
      tft.fillScreen(TFT_BLACK);
      tft.setTextColor(TFT_WHITE, TFT_BLACK);
      tft.setTextSize(2);
      tft.setCursor(30, 55);
      tft.println("EXP FPS: ");
      delay(150);


      if (menu_splash_screen == 8 && Exposure == 1) {

        tft.fillScreen(TFT_BLACK);
        tft.setTextColor(TFT_WHITE, TFT_BLACK);
        tft.setTextSize(2);
        tft.setCursor(30, 55);
        tft.println("EXP FPS: Auto");
        delay(150);


      }

      else if (menu_splash_screen == 8 && Exposure == 2) {

        tft.fillScreen(TFT_BLACK);
        tft.setTextColor(TFT_WHITE, TFT_BLACK);
        tft.setTextSize(2);
        tft.setCursor(30, 55);
        tft.println("EXP FPS: 24FPS");
        delay(150);

      }


      else if (menu_splash_screen == 8 && Exposure == 3) {

        tft.fillScreen(TFT_BLACK);
        tft.setTextColor(TFT_WHITE, TFT_BLACK);
        tft.setTextSize(2);
        tft.setCursor(30, 55);
        tft.println("EXP FPS: 30FPS");
        delay(150);

      }

      else if (menu_splash_screen == 8 && Exposure == 4) {

        tft.fillScreen(TFT_BLACK);
        tft.setTextColor(TFT_WHITE, TFT_BLACK);
        tft.setTextSize(2);
        tft.setCursor(30, 55);
        tft.println("EXP FPS: 48FPS");
        delay(150);

      }

      else if (menu_splash_screen == 8 && Exposure == 5) {

        tft.fillScreen(TFT_BLACK);
        tft.setTextColor(TFT_WHITE, TFT_BLACK);
        tft.setTextSize(2);
        tft.setCursor(30, 55);
        tft.println("EXP FPS: 60FPS");
        delay(150);

      }

      else if (menu_splash_screen == 8 && Exposure == 6) {

        tft.fillScreen(TFT_BLACK);
        tft.setTextColor(TFT_WHITE, TFT_BLACK);
        tft.setTextSize(2);
        tft.setCursor(30, 55);
        tft.println("EXP FPS: 90FPS");
        delay(150);
      }

      else if (menu_splash_screen == 8 && Exposure == 7) {

        tft.fillScreen(TFT_BLACK);
        tft.setTextColor(TFT_WHITE, TFT_BLACK);
        tft.setTextSize(2);
        tft.setCursor(30, 55);
        tft.println("EXP FPS: 120FPS");
        delay(150);

      }

      else if (menu_splash_screen == 8 && Exposure == 8) {

        tft.fillScreen(TFT_BLACK);
        tft.setTextColor(TFT_WHITE, TFT_BLACK);
        tft.setTextSize(2);
        tft.setCursor(30, 55);
        tft.println("EXP FPS: 240FPS");
        delay(150);


      }

      break;

    //////////////////////////////////////

    case 9:

      if (Exposure_Setting == 1) {

        tft.fillScreen(TFT_BLACK);
        tft.setTextColor(TFT_WHITE, TFT_BLACK);
        tft.setTextSize(2);
        tft.setCursor(25, 55);
        tft.println("EXP 24FPS: ");
        delay(150);



        if (menu_splash_screen == 9 && Exposure_Page == 1) {


          tft.fillScreen(TFT_BLACK);
          tft.setTextColor(TFT_WHITE, TFT_BLACK);
          tft.setTextSize(2);
          tft.setCursor(25, 55);
          tft.println("EXP 24FPS: 1/24");
          delay(150);

        }


        else if (menu_splash_screen == 9 && Exposure_Page == 2) {

          tft.fillScreen(TFT_BLACK);
          tft.setTextColor(TFT_WHITE, TFT_BLACK);
          tft.setTextSize(2);
          tft.setCursor(25, 55);
          tft.println("EXP 24FPS: 1/48");
          delay(150);

        }

        else if (menu_splash_screen == 9 && Exposure_Page == 3) {

          tft.fillScreen(TFT_BLACK);
          tft.setTextColor(TFT_WHITE, TFT_BLACK);
          tft.setTextSize(2);
          tft.setCursor(25, 55);
          tft.println("EXP 24FPS: 1/96");
          delay(150);

        }

      }

      if (Exposure_Setting == 2) {

        tft.fillScreen(TFT_BLACK);
        tft.setTextColor(TFT_WHITE, TFT_BLACK);
        tft.setTextSize(2);
        tft.setCursor(25, 55);
        tft.println("EXP 30FPS: ");
        delay(150);


        if (menu_splash_screen == 9 && Exposure_Page == 1) {

          tft.fillScreen(TFT_BLACK);
          tft.setTextColor(TFT_WHITE, TFT_BLACK);
          tft.setTextSize(2);
          tft.setCursor(25, 55);
          tft.println("EXP 30FPS: 1/30");
          delay(150);

        }


        else if (menu_splash_screen == 9 && Exposure_Page == 2) {

          tft.fillScreen(TFT_BLACK);
          tft.setTextColor(TFT_WHITE, TFT_BLACK);
          tft.setTextSize(2);
          tft.setCursor(25, 55);
          tft.println("EXP 30FPS: 1/60");
          delay(150);

        }

        else if (menu_splash_screen == 9 && Exposure_Page == 3) {

          tft.fillScreen(TFT_BLACK);
          tft.setTextColor(TFT_WHITE, TFT_BLACK);
          tft.setTextSize(2);
          tft.setCursor(25, 55);
          tft.println("EXP 30FPS: 1/120");
          delay(150);
        }

      }

      if (Exposure_Setting == 3) {

        tft.fillScreen(TFT_BLACK);
        tft.setTextColor(TFT_WHITE, TFT_BLACK);
        tft.setTextSize(2);
        tft.setCursor(25, 55);
        tft.println("EXP 48FPS: ");
        delay(150);


        if (menu_splash_screen == 9 && Exposure_Page == 1) {
          tft.fillScreen(TFT_BLACK);
          tft.setTextColor(TFT_WHITE, TFT_BLACK);
          tft.setTextSize(2);
          tft.setCursor(25, 55);
          tft.println("EXP 48FPS: 1/48");
          delay(150);

        }


        else if (menu_splash_screen == 9 && Exposure_Page == 2) {

          tft.fillScreen(TFT_BLACK);
          tft.setTextColor(TFT_WHITE, TFT_BLACK);
          tft.setTextSize(2);
          tft.setCursor(25, 55);
          tft.println("EXP 48FPS: 1/96");
          delay(150);


        }

        else if (menu_splash_screen == 9 && Exposure_Page == 3) {

          tft.fillScreen(TFT_BLACK);
          tft.setTextColor(TFT_WHITE, TFT_BLACK);
          tft.setTextSize(2);
          tft.setCursor(25, 55);
          tft.println("EXP 48FPS: 1/192");
          delay(150);

        }

      }

      if (Exposure_Setting == 4) {

        tft.fillScreen(TFT_BLACK);
        tft.setTextColor(TFT_WHITE, TFT_BLACK);
        tft.setTextSize(2);
        tft.setCursor(25, 55);
        tft.println("EXP 60FPS: ");
        delay(150);


        if (menu_splash_screen == 9 && Exposure_Page == 1) {

          tft.fillScreen(TFT_BLACK);
          tft.setTextColor(TFT_WHITE, TFT_BLACK);
          tft.setTextSize(2);
          tft.setCursor(25, 55);
          tft.println("EXP 60FPS: 1/60");
          delay(150);

        }


        else if (menu_splash_screen == 9 && Exposure_Page == 2) {

          tft.fillScreen(TFT_BLACK);
          tft.setTextColor(TFT_WHITE, TFT_BLACK);
          tft.setTextSize(2);
          tft.setCursor(25, 55);
          tft.println("EXP 60FPS: 1/120");
          delay(150);

        }

        else if (menu_splash_screen == 9 && Exposure_Page == 3) {

          tft.fillScreen(TFT_BLACK);
          tft.setTextColor(TFT_WHITE, TFT_BLACK);
          tft.setTextSize(2);
          tft.setCursor(25, 55);
          tft.println("EXP 60FPS: 1/240");
          delay(150);

        }

      }

      if (Exposure_Setting == 5) {

        tft.fillScreen(TFT_BLACK);
        tft.setTextColor(TFT_WHITE, TFT_BLACK);
        tft.setTextSize(2);
        tft.setCursor(25, 55);
        tft.println("EXP 90FPS: ");
        delay(150);


        if (menu_splash_screen == 9 && Exposure_Page == 1) {

          tft.fillScreen(TFT_BLACK);
          tft.setTextColor(TFT_WHITE, TFT_BLACK);
          tft.setTextSize(2);
          tft.setCursor(25, 55);
          tft.println("EXP 90FPS: 1/90");
          delay(150);


        }


        else if (menu_splash_screen == 9 && Exposure_Page == 2) {

          tft.fillScreen(TFT_BLACK);
          tft.setTextColor(TFT_WHITE, TFT_BLACK);
          tft.setTextSize(2);
          tft.setCursor(25, 55);
          tft.println("EXP 90FPS: 1/180");
          delay(150);

        }

        else if (menu_splash_screen == 9 && Exposure_Page == 3) {

          tft.fillScreen(TFT_BLACK);
          tft.setTextColor(TFT_WHITE, TFT_BLACK);
          tft.setTextSize(2);
          tft.setCursor(25, 55);
          tft.println("EXP 90FPS: 1/360");
          delay(150);

        }

      }

      if (Exposure_Setting == 6) {

        tft.fillScreen(TFT_BLACK);
        tft.setTextColor(TFT_WHITE, TFT_BLACK);
        tft.setTextSize(2);
        tft.setCursor(25, 55);
        tft.println("EXP 120FPS: ");
        delay(150);



        if (menu_splash_screen == 9 && Exposure_Page == 1) {

          tft.fillScreen(TFT_BLACK);
          tft.setTextColor(TFT_WHITE, TFT_BLACK);
          tft.setTextSize(2);
          tft.setCursor(25, 55);
          tft.println("EXP 120FPS: 1/120");
          delay(150);

        }


        else if (menu_splash_screen == 9 && Exposure_Page == 2) {

          tft.fillScreen(TFT_BLACK);
          tft.setTextColor(TFT_WHITE, TFT_BLACK);
          tft.setTextSize(2);
          tft.setCursor(25, 55);
          tft.println("EXP 120FPS: 1/240");
          delay(150);

        }

        else if (menu_splash_screen == 9 && Exposure_Page == 3) {

          tft.fillScreen(TFT_BLACK);
          tft.setTextColor(TFT_WHITE, TFT_BLACK);
          tft.setTextSize(2);
          tft.setCursor(25, 55);
          tft.println("EXP 120FPS: 1/480");
          delay(150);

        }

      }

      if (Exposure_Setting == 7) {

        tft.fillScreen(TFT_BLACK);
        tft.setTextColor(TFT_WHITE, TFT_BLACK);
        tft.setTextSize(2);
        tft.setCursor(25, 55);
        tft.println("EXP 240FPS: ");
        delay(150);


        if (menu_splash_screen == 9 && Exposure_Page == 1) {

          tft.fillScreen(TFT_BLACK);
          tft.setTextColor(TFT_WHITE, TFT_BLACK);
          tft.setTextSize(2);
          tft.setCursor(25, 55);
          tft.println("EXP 240FPS: 1/120");
          delay(150);

        }


        else if (menu_splash_screen == 9 && Exposure_Page == 2) {

          tft.fillScreen(TFT_BLACK);
          tft.setTextColor(TFT_WHITE, TFT_BLACK);
          tft.setTextSize(2);
          tft.setCursor(25, 55);
          tft.println("EXP 240FPS: 1/240");
          delay(150);

        }

        else if (menu_splash_screen == 9 && Exposure_Page == 3) {

          tft.fillScreen(TFT_BLACK);
          tft.setTextColor(TFT_WHITE, TFT_BLACK);
          tft.setTextSize(2);
          tft.setCursor(25, 55);
          tft.println("EXP 240FPS: 1/480");
          delay(150);

        }

      }

      break;


  }
}
