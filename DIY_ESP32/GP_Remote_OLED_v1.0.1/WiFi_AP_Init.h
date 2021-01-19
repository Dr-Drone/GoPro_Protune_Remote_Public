


void wifi_init() {

  // initialize with the I2C addr 0x3C
display.begin(SSD1306_SWITCHCAPVCC, 0x3C); // use for diy version

  // Clear the buffer.
  display.clearDisplay();

  // Changing Font Size
  display.setTextColor(WHITE);
  display.setCursor(24, 24);
  display.setTextSize(1);
  display.println("PT CONTROLLER");
  display.setCursor(0, 40);
  display.setTextSize(1);
  display.println("By: Pawan Vijayanagar");
  display.display();
  delay(2000);
  display.clearDisplay();

  display.setTextColor(WHITE);
  display.setCursor(24, 24);
  display.setTextSize(1);
  display.println("Connecting...");
  display.display();
  delay(2000);
  display.clearDisplay();

  if (WiFi.status() == WL_CONNECTED)
  {
    while (WiFi.status() == WL_CONNECTED) {

      display.setTextColor(WHITE);
      display.setCursor(24, 24);
      display.setTextSize(1);
      display.println("Connected!");
      display.display();
      delay(2000);
      display.clearDisplay();

    }
  }
  else {
    display.setTextColor(WHITE);
    display.setCursor(0, 24);
    display.setTextSize(1);
    display.println("Access Point Enabled");
    display.display();
    delay(2000);
    display.clearDisplay();



    WiFiManager wifiManager;

    display.setCursor(0, 24);
    display.setTextSize(1);
    display.println(" Connect to GP ");
    display.display();
    display.startscrollleft(0x00, 0x24);
    delay(500);
    display.clearDisplay();

    //wifiManager.resetSettings(); //--- Dump it into settings
    wifiManager.autoConnect("PT Controller");

    display.stopscroll();
    display.setTextColor(WHITE);
    display.setCursor(30, 24);
    display.setTextSize(1);
    display.println("Connected!");
    display.display();
    delay(2000);
    display.clearDisplay();
    display.display();
    delay(1000);
    
    display.setCursor(0, 24);
    display.setTextSize(1);
    display.println(" Press Button 1 ");
    display.display();
    display.startscrollleft(0x00, 0x24);
    delay(2000);
    display.clearDisplay();

  }
}
