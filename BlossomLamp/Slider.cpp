#include"Slider.h"

Slider::Slider(int brightness){
  _brightness = brightness;
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

void Slider::testCapSensors(){
  Serial.print("[");
  Serial.print(_cap1.capacitiveSensor(SENSITIVITY));
  Serial.print(",");
  Serial.print(_cap2.capacitiveSensor(SENSITIVITY));
  Serial.print(",");
  Serial.print(_cap3.capacitiveSensor(SENSITIVITY));
  Serial.println("]");
}

void Slider::push(){
  long sensorValue;

  for(short i = 0; i < maxCapacitive; ++i)
  {
    sensorValue = _capArray[i].capacitiveSensor(SENSITIVITY);
    if(sensorValue > _capValue[i] + THRESHOLD ||  sensorValue < _capValue[i] - THRESHOLD)
    {
    
      if(_firstTouch == -1) { _firstTouch = i; }
      else if(_firstTouch != -1 && _firstTouch != i) { _secondTouch = i; }
    }
  }
  
  if(_firstTouch != -1 && _secondTouch != -1 && _firstTouch != _secondTouch && _firstTouch > _secondTouch) {
    if(_firstTouch == maxCapacitive - 1 && _secondTouch == 0)
    {
      _brightness = _brightness + BRIGHTNESSCHANGE;
    }
    else{
      _brightness = _brightness - BRIGHTNESSCHANGE;
    }
     _firstTouch = _secondTouch;
     _secondTouch = -1; 
  }
  else if(_firstTouch != -1 && _secondTouch != -1 && _firstTouch < _secondTouch) {
    if(_firstTouch == 0 && _secondTouch == maxCapacitive - 1)
    {
      _brightness = _brightness - BRIGHTNESSCHANGE;
    }
    else{
      _brightness = _brightness + BRIGHTNESSCHANGE;
    }
      _firstTouch = _secondTouch;
      _secondTouch = -1; 
  }
}

void Slider::setTouch(int firstTouch, int secondTouch){
    _firstTouch = -1;
    _secondTouch = -1; 
}
