//#include "Slider.h"
#include "RGBLight.h"
#include "BlossomLeaveCouple.h"

#define LIGHT1 2
#define LIGHT2 3
#define LIGHT3 4

#define LEAVE1_1 13
#define LEAVE1_2 A1
#define LEAVE2_1 4
#define LEAVE2_2 4
#define LEAVE3_1 4
#define LEAVE3_2 4

#define THRESHOLD 930



//Slider slider;

BlossomLeaveCouple leave1(LEAVE1_1, LEAVE1_2, THRESHOLD);
//BlossomLeaveCouple leave2(3, 4);
//BlossomLeaveCouple leave3(5, 6);
//BlossomLeaveCouple leaves[] = {leave1, leave2, leave3};

int leavesSize;
int connections;

RGBLight light1(LIGHT1); //2,4 //2,3,4 [works]
RGBLight light2(LIGHT2); //2,4 //2,3,4 [works]
RGBLight light3(LIGHT3); //2,4 //2,3,4 [works]

void setup() {
  //leavesSize = sizeof(leaves) / sizeof(int);
  connections = 0;
  Serial.begin(9600);
}

void loop() {
  //Serial.println("Hallo");
  //slider.push();  // works
  //light1.colorUp(160, 147, 95); // works
  //Serial.println(slider.getBrightnessValue()); // works
  //light.changeBrightness(slider.getBrightness()); // works
  boolean conn = leave1.getConnection(); // works
  if(conn == true)
  {
    Serial.println("conn");
  }
  //defineBrightness();
  //defineLampColor();
}

/*
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
        Serial.println("0");
        break;
      case 1:
        Serial.println("1");
        break;
      case 2:
        Serial.println("2");
        break;
      case 3:   
        Serial.println("3");     
        break;
    }
  } 
}
*/
/*
void defineBrightness(){
  slider.push();
  short brightnesValue = slider.getBrightness();

  if(brightnesValue == 1) {
    for(int i = 0; i < leavesSize; ++i)
    {
      light.changeBrightness(1);
    }
  }
  else if(brightnesValue == -1) 
  {
    for(int i = 0; i < leavesSize; ++i)
    {
      light.changeBrightness(-1);
    }  
  }
}
*/
