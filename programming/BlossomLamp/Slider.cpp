#include"Slider.h"

Slider::Slider(){
  _brightness = 250;
  _firstTouch = -1;
  _secondTouch = -1;  
  for(int i = 0; i < maxCapacitive ;++i)
  {
    _capValue[i] = _capArray[i].capacitiveSensor(SENSITIVITY);
  }
}

int Slider::getBrightnessValue(){
  return _brightness;
}

void Slider::push(){
  long sensorValue;

  for(short i = 0; i < maxCapacitive; ++i){
    sensorValue = _capArray[i].capacitiveSensor(SENSITIVITY);
    if(sensorValue > _capValue[i] + 30 ||  sensorValue < _capValue[i] - 30){
      if(_firstTouch == -1){
        _firstTouch = i; 
        _secondTouch = i; 
        _time = millis();
        break;
      }
    }
  }

  Serial.print(", ");

  for(short i = 0; i < maxCapacitive; ++i){
    sensorValue = _capArray[i].capacitiveSensor(SENSITIVITY);
    if((sensorValue > _capValue[i] + 30 ||  sensorValue < _capValue[i] - 30) && i != _firstTouch && _secondTouch != -1){
      _secondTouch = i; 
      break;
    }
  }
  
  if(_firstTouch > _secondTouch) {
    _brightness = _brightness - 50;
  }
  else if(_firstTouch < _secondTouch) {
    _brightness = _brightness + 50;
  }
  
  if(_time + 1000 < millis())
  {
    _firstTouch = -1;
    _secondTouch = -1; 
  }
}
