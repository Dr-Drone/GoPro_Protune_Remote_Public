///// LCD Stuff//////////////
#define BUTTON1PIN 35
#define BUTTON2PIN 0

TFT_eSPI tft = TFT_eSPI();

void wifi_init() {

  tft.begin();
  tft.setRotation(1); //Landscape

  //Splash Screen
  tft.fillScreen(TFT_BLACK);
  tft.setTextColor(TFT_WHITE, TFT_BLACK);
  tft.setTextSize(2);
  tft.setCursor(45, 50);
  tft.println("PT Controller");
  tft.setTextSize(1);
  tft.setCursor(55, 75);
  tft.print("By: Pawan Vijayanagar");
  delay(8000);

  //connecting...
  tft.fillScreen(TFT_BLACK);
  tft.setTextColor(TFT_WHITE, TFT_BLACK);
  tft.setTextSize(2);
  tft.setCursor(40, 50);
  tft.println("Connecting...");
  tft.setTextSize(1);
  tft.setCursor(75, 75);
  tft.print("Please wait");
  delay(3000);

  if (WiFi.status() == WL_CONNECTED)
  {
    while (WiFi.status() == WL_CONNECTED) {
      tft.fillScreen(TFT_BLACK);
      tft.setTextColor(TFT_WHITE, TFT_BLACK);
      tft.setTextSize(2);
      tft.setCursor(45, 55);
      tft.println("Connected!");
      delay(2000);
    }
  }

  else {
    tft.fillScreen(TFT_BLACK);
    tft.setTextColor(TFT_WHITE, TFT_BLACK);
    tft.setTextSize(1);
    tft.setCursor(50, 55);
    tft.println("Access Point Enabled!");
    delay(3000);

    WiFiManager wifiManager;

    tft.fillScreen(TFT_BLACK);
    tft.setTextColor(TFT_WHITE, TFT_BLACK);
    tft.setTextSize(1);
    tft.setCursor(30, 55);
    tft.println("Connect Phone to Access Point");
    tft.setTextSize(1);
    tft.setCursor(20, 75);
    tft.print("If completed, wait for 5 seconds");
    delay(2000);

    //wifiManager.resetSettings(); //--- Dump it into settings
    wifiManager.autoConnect("PT Controller");

    tft.fillScreen(TFT_BLACK);
    tft.setTextColor(TFT_WHITE, TFT_BLACK);
    tft.setTextSize(2);
    tft.setCursor(50, 55);
    tft.println("Connected!");
    delay(3000);

      tft.fillScreen(TFT_BLACK);
      tft.setTextColor(TFT_WHITE, TFT_BLACK);
      tft.setTextSize(1);
      tft.setCursor(30, 55);
      tft.println("Press Button to Begin Setup!");
      delay(3500);
      tft.setTextSize(2);
      tft.setCursor(220, 20);
      tft.println(">");     

  }
}
