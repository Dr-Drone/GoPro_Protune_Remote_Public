
TaskHandle_t Task1;


/////////////////////////////////////////
void Task1code( void * pvParameters ){
  Serial.print("Task1 running on core ");
  Serial.println(xPortGetCoreID());
  int button1State = 0;
  int button2State = 0;
    for(;;){
      button1State = digitalRead(BUTTON1PIN);
      button2State = digitalRead(BUTTON2PIN);
      if (button1State == LOW) {
        toggleButton1();
      }
      if (button2State == LOW) {
        toggleButton2();
      }
      delay(10);
    }
}

//////////////////////////////////////
void core_two_button_interrupt(){
  pinMode(BUTTON1PIN, INPUT);
  pinMode(BUTTON2PIN, INPUT);
  xTaskCreatePinnedToCore(Task1code,"Task1", 10000, NULL, 2, &Task1, 0);
}
