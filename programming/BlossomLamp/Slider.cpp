#include"Slider.h"

Slider::Slider(){
  
}

short Slider::getBrightness(){
  return _brightness;
}

void Slider::push(){
  long sensorValue;
  for(int i = 0; i < maxCapacitive; ++i){
    _capValue[i] = _capArray[i].capacitiveSensor(sensitivity);    
  } 
  for(int i = 0; i < maxCapacitive; ++i){
    if(_capValue[i] >= threshold && _capValue[i+1] >= threshold)
    {
      _brightness = 1;
    }
    else if(_capValue[i] >= threshold && _capValue[i-1] <= threshold)
    {
      _brightness = -1;
    }
    else{
      _brightness = 0;
    }
  } 
}
