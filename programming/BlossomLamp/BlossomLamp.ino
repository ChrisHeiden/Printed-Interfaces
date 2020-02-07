#include "Slider.h"
#include "RGBLight.h"
#include "BlossomLeaveCouple.h"

#define THRESHOLD 800

#define LIGHT1 2
#define LIGHT2 3
#define LIGHT3 4

#define LEAVE1_1 13
#define LEAVE1_2 A0
#define LEAVE2_1 12
#define LEAVE2_2 A1
#define LEAVE3_1 11
#define LEAVE3_2 A2
#define LEAVESIZE 3

Slider slider;

BlossomLeaveCouple leave1(LEAVE1_1, LEAVE1_2, THRESHOLD);
BlossomLeaveCouple leave2(LEAVE2_1, LEAVE2_2, THRESHOLD);
BlossomLeaveCouple leave3(LEAVE3_1, LEAVE3_2, THRESHOLD);
BlossomLeaveCouple leaves[LEAVESIZE] = {leave1, leave2, leave3};

int connections;

RGBLight light1(LIGHT1);
RGBLight light2(LIGHT2);
RGBLight light3(LIGHT3);
RGBLight lightArray[] = {light1, light2, light3};

void setup() {
  Serial.begin(9600);
}

void loop() {
  //slider.testCapSensors(); 
  slider.push(); 
  Serial.println(slider.getBrightnessValue());

  /*for(int i = 0; i < LEAVESIZE; ++i)
  {
    lightArray[i].changeBrightness(slider.getBrightnessValue());
  }*/
        
  //defineLampColor();
}

void defineLampColor(){
  connections = 0;
  boolean coonection = true;
    
  for(int i = 0; i < LEAVESIZE; ++i)
  {
    coonection = leaves[i].getConnection();
    if(coonection == false)
    {
      ++connections;
    }
  }

    Serial.println(connections);

    switch (connections) {
      case 0:
        for(int i = 0; i < LEAVESIZE; ++i)
        {
          lightArray[i].off();
        }
        break;
      case 1:
        for(int i = 0; i < LEAVESIZE; ++i)
        {
          lightArray[i].colorUp(255,0,0); // works
        }
        break;
      case 2:
        for(int i = 0; i < LEAVESIZE; ++i)
        {
          lightArray[i].colorUp(255,255,0); // works
        }
        break;
      case 3:
        for(int i = 0; i < LEAVESIZE; ++i)
        {
          lightArray[i].colorUp(255,255,255); // works
        }
        break;
    } 
}
