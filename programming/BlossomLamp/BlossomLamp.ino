#include "Slider.h"
#include "RGBLight.h"
//#include "BlossomLeaveCouple.h"

//#define THRESHOLD 930

//#define LIGHT1 2
//#define LIGHT2 3
//#define LIGHT3 4

//#define LEAVE1_1 13
//#define LEAVE1_2 A0
//#define LEAVE2_1 12
//#define LEAVE2_2 A1
//#define LEAVE3_1 11
//#define LEAVE3_2 12

Slider slider;

//BlossomLeaveCouple leave1(LEAVE1_1, LEAVE1_2, THRESHOLD);
//BlossomLeaveCouple leave2(3, 4);
//BlossomLeaveCouple leave3(5, 6);
//BlossomLeaveCouple leaves[] = {leave1, leave2, leave3};

//int leavesSize;
//int connections;

RGBLight light1(LIGHT1);
RGBLight light2(LIGHT2);
RGBLight light3(LIGHT3);
RGBLight lightArray[] = {light1, light2, light3};

void setup() {
  leavesSize = sizeof(leaves) / sizeof(int);
  Serial.begin(9600);
}

void loop() {
  //Serial.println("Halo");
  slider.push(); 
  light.changeBrightness(slider.getBrightnessValue());
  
  defineLampColor();
}

void defineLampColor(){
  connections = 0;
  for(int i = 0; i < leavesSize; ++i)
  {
    boolean coonection = leaves[i].getConnection();
    if(coonection == true)
    {
      ++connections;
    }
 
    switch (connections) {
      case 0:
        for(int i = 0; i < leavesSize; ++i)
        {
          lightArray[i].off();
        }
        break;
      case 1:
        for(int i = 0; i < leavesSize; ++i)
        {
          light3.colorUp(255,255,0); // works
        }
        break;
      case 2:
        for(int i = 0; i < leavesSize; ++i)
        {
          light3.colorUp(255,255,0); // works
        }
        break;
      case 3:
        for(int i = 0; i < leavesSize; ++i)
        {
          light3.colorUp(255,255,255); // works
        }
        break;
    }
  } 
}
