#include "Slider.h"
#include "RGBLight.h"
#include "BlossomLeave.h"
Slider slider;

BlossomLeave leave1(1, true);
BlossomLeave leave2(2, true);
BlossomLeave leave3(3, true);
BlossomLeave leave4(4, false);
BlossomLeave leave5(5, false);
BlossomLeave leave6(6, false);
BlossomLeave leaves[] = {leave1, leave2, leave3, leave4, leave5, leave6};
int leavesSize;

RGBLight light1(1,2,3);
RGBLight light2(1,2,3);
RGBLight light3(1,2,3);
RGBLight light4(1,2,3);
RGBLight lights[] = {light1, light2, light3, light4};

void setup() {
}

void loop() {
  defineBrightness();
  defineLampColor();
  leavesSize = sizeof(leaves) / sizeof(int);
}

void defineSixColor( int leavesSize){
  for(int i = 0; i < leavesSize; i++)
  {
    lights[i].up(255,255,255);
  }
}

void defineFiveColor( int pos1, int pos2, int pos3, int pos4, int pos5){
  if(pos1 == 0 && pos2 == 1 && pos3 == 2 && pos4 == 3 && pos5 == 4)
  {
    for(int i = 0; i < leavesSize; i++)
    {
      lights[i].up(109, 147, 95);
    }	
  }
  
  if(pos1 == 0 && pos2 == 1 && pos3 == 2 && pos4 == 3 && pos5 == 5)
  {
    for(int i = 0; i < leavesSize; i++)
    {
      lights[i].up(160, 147, 95);
    }	
  }
}

void defineFourColor( int pos1, int pos2, int pos3, int pos4){
  if(pos1 == 0 && pos2 == 1 && pos3 == 2 && pos4 == 3)
  {
    for(int i = 0; i < leavesSize; i++)
    {
      lights[i].up(137, 183, 55);
    }	
  }
  if(pos1 == 0 && pos2 == 1 && pos3 == 2 && pos4 == 4) 
  {
    for(int i = 0; i < leavesSize; i++)
    {
      lights[i].up(128, 128, 64);
    }
  }
  if(pos1 == 0 && pos2 == 1 && pos3 == 2 && pos4 == 5) 
  {
    for(int i = 0; i < leavesSize; i++)
    {
      lights[i].up(191, 128, 64);
    }
  }
}

void defineThreeColor( int pos1, int pos2, int pos3){
  if(pos1 == 0 && pos2 == 1 && pos3 == 2)
  {
    for(int i = 0; i < leavesSize; i++)
    {
      lights[i].up(170,170,0);
    }
  }
  if(pos1 == 0 && pos2 == 1 && pos3 == 3)
  {
    for(int i = 0; i < leavesSize; i++)
    {
      lights[i].up(182,160,74);
    }
  }
  if(pos1 == 0 && pos2 == 1 && pos3 == 4)
  {
    for(int i = 0; i < leavesSize; i++)
    {
      lights[i].up(170, 85, 85);
    }
  }
  if(pos1 == 0 && pos2 == 1 && pos3 == 5)
  {
    for(int i = 0; i < leavesSize; i++)
    {
      lights[i].up(255, 85, 85);
    } 
  }
  
  if(pos1 == 1 && pos2 == 2 && pos3 == 3)
  {
    for(int i = 0; i < leavesSize; i++)
    {
      lights[i].up(97, 245, 74);
    } 
  }
  if(pos1 == 1 && pos2 == 2 && pos3 == 4)
  {
    
  }
  if(pos1 == 1 && pos2 == 2 && pos3 == 5)
  {
    for(int i = 0; i < leavesSize; i++)
    {
      lights[i].up(85, 170, 85);
    }    
  }

  if(pos1 == 2 && pos2 == 3 && pos3 == 4)
  {
    for(int i = 0; i < leavesSize; i++)
    {
      lights[i].up(12, 160, 159);
    }
  }
  if(pos1 == 2 && pos2 == 3 && pos3 == 5)
   {
    for(int i = 0; i < leavesSize; i++)
    {
      lights[i].up(97, 160, 159);
    }
  }
}


void defineTwoColor( int pos1, int pos2){
  if(pos1 == 0 && pos2 == 1)
  {
    for(int i = 0; i < leavesSize; i++)
    {
      lights[i].up(255,128,0);
    }
  }

  if(pos1 == 0 && pos2 == 2)
  {
    for(int i = 0; i < leavesSize; i++)
    {
      lights[i].up(128,128,0);
    }
  }
  if(pos1 == 0 && pos2 == 3)
  {
    for(int i = 0; i < leavesSize; i++)
    {
      lights[i].up(146,112,111); 
    }
    
  }
  if(pos1 == 0 && pos2 == 4)
  {
    for(int i = 0; i < leavesSize; i++)
    {
      lights[i].up(128,0,128); 
    }  
  }
  if(pos1 == 0 && pos2 == 5)
  {
    for(int i = 0; i < leavesSize; i++)
    {
      lights[i].up(255,0,128); 
    }     
  }
  
  if(pos1 == 1 && pos2 == 2)
  {
    for(int i = 0; i < leavesSize; i++)
    {
      lights[i].up(128,255,0);
    }   
  }
  if(pos1 == 1 && pos2 == 3)
  {
    for(int i = 0; i < leavesSize; i++)
    {
      lights[i].up(146,240,111);
    }    
  }
  if(pos1 == 1 && pos2 == 4)
  {
    for(int i = 0; i < leavesSize; i++)
    {
      lights[i].up(128,128,128);
    }  
  }
  if(pos1 == 1 && pos2 == 5)
   {
    for(int i = 0; i < leavesSize; i++)
    {
      lights[i].up(255,128,128);
    }   
  }

  
  if(pos1 == 2 && pos2 == 3)
  {
    for(int i = 0; i < leavesSize; i++)
    {
      lights[i].up(19,240,111);
    } 
  }
  if(pos1 == 2 && pos2 == 4)
  {
    for(int i = 0; i < leavesSize; i++)
    {
      lights[i].up(0,128,128);
    }
  }
  if(pos1 == 2 && pos2 == 5)
  {
    for(int i = 0; i < leavesSize; i++)
    {
      lights[i].up(128,128,128);
    }
  }

  
  if(pos1 == 3 && pos2 == 4)
  {
    for(int i = 0; i < leavesSize; i++)
    {
      lights[i].up(19,112,238);
    }
  }
  if(pos1 == 3 && pos2 == 5)
  {
    for(int i = 0; i < leavesSize; i++)
    {
      lights[i].up(146,112,238);
    }
  }


  if(pos1 == 4 && pos2 == 5)
  {
    for(int i = 0; i < leavesSize; i++)
    {
      lights[i].up(128,0,255);
    }
  }
}

void defineOneColor(int pos){
  if(pos == 0){
    for(int i = 0; i < leavesSize; i++)
    {
      lights[i].up(255,0,0);
    }
  }
  if(pos == 1)
  {
    for(int i = 0; i < leavesSize; i++)
    {
      lights[i].up(255,255,0);
    }
  }
  if(pos == 2)
  {
    for(int i = 0; i < leavesSize; i++)
    {
      lights[i].up(0,255,0);
    }
  }
  if(pos == 3)
  {
    for(int i = 0; i < leavesSize; i++)
    {
      lights[i].up(37,224,221);
    }
  }
  if(pos == 4)
  {
    for(int i = 0; i < leavesSize; i++)
    {
      lights[i].up(0,0,255);
    }
  }
  if(pos == 5)
  {
    for(int i = 0; i < leavesSize; i++)
    {
      lights[i].up(255,0,255);
    }
  }
}

void defineLampColor(){
  for(int i = 0; i < leavesSize; i++)
  {
      boolean connection[leavesSize];
      short amountConnection = 0;
      if(i < 3){ connection[i] = leaves[i].getConnection(); leaves[i].changePinMode(); }
      if(i >= 3){ connection[i] = leaves[i].getConnection(); leaves[i].changePinMode(); }
    
      for(int i = 0; i < leavesSize; i++){
        if(connection[leavesSize] == true){
          amountConnection = amountConnection + 1;
        }
      }
      if(amountConnection == 1){
        for(int i = 0; i < leavesSize; i++)
        {
          if(connection[i] == true)
          {
            defineOneColor(i);
          }
        }
      }
      if(amountConnection == 2){
        int pos1 = -1, pos2 = -1;
        for(int i = 0; i < leavesSize; i++)
        {
          if(connection[i] == true && pos1 == -1) { pos1 = i; }
          else if(connection[i] == true && pos2 == -1){ pos2 = i; }
        }
        defineTwoColor(pos1, pos2);
      }
      if(amountConnection == 3){
        int pos1 = -1, pos2 = -1, pos3 = -1;
        for(int i = 0; i < leavesSize; i++)
        {
          if(connection[i] == true && pos1 == -1) { pos1 = i; }
          else if(connection[i] == true && pos2 == -1){ pos2 = i; }
          else if(connection[i] == true && pos3 == -1){ pos3 = i; }
        }
        defineThreeColor(pos1, pos2, pos3);
      }
      if(amountConnection == 4){
        int pos1 = -1, pos2 = -1, pos3 = -1, pos4 = -1;
        for(int i = 0; i < leavesSize; i++)
        {
          if(connection[i] == true && pos1 == -1) { pos1 = i; }
          else if(connection[i] == true && pos2 == -1){ pos2 = i; }
          else if(connection[i] == true && pos3 == -1){ pos3 = i; }
          else if(connection[i] == true && pos4 == -1){ pos4 = i; }
        }
        defineFourColor(pos1, pos2, pos3, pos3);
      }
      if(amountConnection == 5){
        int pos1 = -1, pos2 = -1, pos3 = -1, pos4 = -1, pos5 = -1;
        for(int i = 0; i < leavesSize; i++)
        {
          if(connection[i] == true && pos1 == -1) { pos1 = i; }
          else if(connection[i] == true && pos2 == -1){ pos2 = i; }
          else if(connection[i] == true && pos3 == -1){ pos3 = i; }
          else if(connection[i] == true && pos4 == -1){ pos4 = i; }
          else if(connection[i] == true && pos5 == -1){ pos5 = i; }
        }
        defineFiveColor(pos1, pos2,pos3, pos4,pos5);
      }
      if(amountConnection == 6){       
        defineSixColor(leavesSize);
      }
  }
}

void defineBrightness(){
  slider.push();

  short brightnesValue = slider.getBrightness();
  if(brightnesValue == 1) {
    for(int i = 0; i < leavesSize; ++i)
    {
      lights[i].changeBrightness(1);
    }
  }
  else if(brightnesValue == -1) 
  {
    for(int i = 0; i < leavesSize; ++i)
    {
      lights[i].changeBrightness(-1);
    }  
  }
}