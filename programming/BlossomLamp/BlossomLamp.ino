//#include "Slider.h"
//#include "RGBLight.h"
#include "BlossomLeaveCouple.h"

//Slider slider;

BlossomLeaveCouple leave1(10, 13);
//BlossomLeaveCouple leave2(3, 4);
//BlossomLeaveCouple leave3(5, 6);
//BlossomLeaveCouple leaves[] = {leave1, leave2, leave3};

int leavesSize;
int connections;

//RGBLight light(2);

void setup() {
  //leavesSize = sizeof(leaves) / sizeof(int);
  connections = 0;
  Serial.begin(9600);
}

void loop() {
  //Serial.println("Hallo");
  //slider.push();  // works
  //light.colorUp(160, 147, 95); // works
  //Serial.println(slider.getBrightnessValue()); // works
  //light.changeBrightness(slider.getBrightness()); // works
  boolean conn = leave1.getConnection(); // works
  if(conn == true)
  {
    Serial.println("conn");
  }
  else
  {
    Serial.println("na");  
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
