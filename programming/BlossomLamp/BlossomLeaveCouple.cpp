#include "BlossomLeaveCouple.h"
 
BlossomLeaveCouple::BlossomLeaveCouple(int pinLeaveA, int pinLeaveB, int threshold){
   _pinLeaveA = pinLeaveA;
   _pinLeaveB = pinLeaveB;
   _threshold = threshold;

   pinMode(_pinLeaveA, OUTPUT);
   pinMode(_pinLeaveB, INPUT);
}

boolean BlossomLeaveCouple::getConnection(){
   digitalWrite(_pinLeaveA, HIGH);
   int con = analogRead(_pinLeaveB);
   if(con >= _threshold)
   {
      return true;
   }
   else{
      return false;
   }
}
