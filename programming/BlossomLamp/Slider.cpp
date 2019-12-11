#include"Slider.h"

Slider::Slider(){
  _brightness = 0;
}

short Slider::getBrightness(){
  return _brightness;
}

void Slider::push(){
  long sensorValue;
  Serial.println(_cap1.capacitiveSensor(SENSITIVITY));
/*
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
*/
}
