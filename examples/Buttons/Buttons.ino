#include "RZButton.h"

RZButton button1(4);
RZButton button2(5);
RZButton button3(6);
RZButton button4(7);

//For ESP8266
//RZButton button5(16, INPUT_PULLDOWN_16);

void setup() {
  Serial.begin(9600);
  //button3.setLongPressTimeThreshold(3000);
  //button4.setMulticlickTimeThreshold(2000);
}

void loop() {
  if(button1.uniquePress()){
    Serial.println("Button 1 has been pressed");
  }

  if(button2.isPressed()){
    Serial.println("Button 2 is now pressed");
  }

  if(button3.longPress()){
    Serial.println("Button 3 was pressed for a long time");
  }

  unsigned char counter = button4.multiclick();

  if (counter > 0){
    Serial.println("Multiclick of the 4 button " + String(counter) + " times");
  }

  unsigned long timePressed = button1.continuousPressTime();
  
  if (timePressed >= 1000){
    Serial.println("Every second");
    button1.clearFirstPress();
  }
}
