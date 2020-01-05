#include"Slider.h"

Slider::Slider(){
  _brightness = 250;
  _firstTouch = -1;
  _secondTouch = -1; 
  
  for(int i = 0; i < maxCapacitive ;++i)
  {
    _capArray[i].set_CS_AutocaL_Millis(0xFFFFFFFF);
    delay(100);
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
    if(sensorValue > _capValue[i] + 900 ||  sensorValue < _capValue[i] - 900){
      if(_firstTouch == -1){
        _firstTouch = i; 
        _secondTouch = i; 
        _time = millis();
        Serial.println(_firstTouch);
        break;
      }
    }
  }
  
  for(short i = 0; i < maxCapacitive; ++i){
    sensorValue = _capArray[i].capacitiveSensor(SENSITIVITY);
    if((sensorValue > _capValue[i] + 900 ||  sensorValue < _capValue[i] - 900) && i != _firstTouch && _secondTouch != -1){
      _secondTouch = i; 
      Serial.println(_secondTouch);
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
    Serial.println("delete Val");
  }
}














/*
 *   long sensorValue;
  int firstTouch = -1; 
  int nextTouch = -1; 
  boolean touched = false;
 * for(int i = 0; i < maxCapacitive ;++i)
  {
    sensorValue = _capArray[i].capacitiveSensor(SENSITIVITY);
    if(sensorValue > _capValue[i] + 900 ||  sensorValue < _capValue[i] - 900){
        firstTouch = i; 
        touched = true;
        while(touched == true){
          
        }
    }
        
      }
      if( i != firstTouch){
        nextTouch = i;
      }
      if(firstTouch != nextTouch) 
      {
        if(firstTouch > nextTouch) {
          _brightness = _brightness - 50;
        }
        else if(firstTouch < nextTouch) {
          _brightness = _brightness + 50;
        } 
        nextTouch = firstTouch;
      }
    }
  }
 */
