#include "BlossomLeaveCouple.h"
 
BlossomLeaveCouple::BlossomLeaveCouple(int pinLeaveA, int pinLeaveB){
   _pinLeaveA = pinLeaveA;
   _pinLeaveB = pinLeaveB;

   pinMode(_pinLeaveA, OUTPUT);
   pinMode(_pinLeaveB, INPUT);
}

boolean BlossomLeaveCouple::getConnection(){
    digitalWrite(_pinLeaveA, HIGH);
   if(digitalRead(_pinLeaveB) == HIGH)
   {
      return true;
   }
   else{
      return false;
   }
}
