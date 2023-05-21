#include <Arduino.h>

int LDR_THRESHOLD = 10;

boolean laser_beam_cut = false;

void changeLEDstate(boolean ledOn) {
  if (ledOn == true) {
    digitalWrite(8, HIGH);
  } else {
    digitalWrite(8, LOW);
  }
}


void setup() {

  // LED on pin 8
  pinMode(8, OUTPUT);
  
  // Open Serial Port  
  Serial.begin(115200);
  
  digitalWrite(8, HIGH);
  // delay(1000);
  // digitalWrite(8, LOW);
}


void loop() {

  // LDR on A0
  int LDR_read_0 = analogRead(A0);
  int LDR_read_1 = analogRead(A1);
  int LDR_read_2 = analogRead(A2);

  if (LDR_read_0) {
    // laser_beam_cut = true;
    Serial.println("LDR_read_0: " + String(LDR_read_0));
  } else {
    // laser_beam_cut = false;
  }

  // if (LDR_read_1) {
    // laser_beam_cut = true;
    // Serial.println("LDR_read_1: " + String(LDR_read_1));
  // } else {
    // laser_beam_cut = false;
  // }
  
  // if (LDR_read_2) {
    // laser_beam_cut = true;
    // Serial.println("LDR_read_2: " + String(LDR_read_2));
  // } else {
    // laser_beam_cut = false;
  // }

  // if(laser_beam_cut == true) {
    // Serial.println("Laser beam cut!");
    // changeLEDstate(true);
  // }else{
    // Serial.println("Laser beam safe!");
    // changeLEDstate(false);
  // }
}

