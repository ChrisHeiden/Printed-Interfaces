#include"Slider.h"

Slider::Slider(){
  _brightness = 0;
  _cap1.set_CS_AutocaL_Millis(0xFFFFFFFF);  //Calibrate the sensor... 

}

int Slider::getBrightness(){
  return _brightness;
}

void Slider::push(){
  long sensorValue;
  int _brightness =  _cap1.capacitiveSensor(30);

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
