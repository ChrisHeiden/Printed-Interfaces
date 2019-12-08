#include "BlossomLeave.h"
 
BlossomLeave::BlossomLeave(int pin, boolean pinMode){
   _pin = pin;
   _pinMode = pinMode;
}

boolean BlossomLeave::getConnection(){
   if(digitalRead(_pin) == HIGH)
   {
      return true;
   }
   else{
      return false;
   }
}

void BlossomLeave::changePinMode(){
   if(_pinMode  = true){
      pinMode(_pin, OUTPUT);
      _pinMode = false;
   }
   else{
      pinMode(_pin, INPUT);
      _pinMode = true;
   }
}


