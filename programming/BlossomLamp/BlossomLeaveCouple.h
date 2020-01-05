#ifndef BlossomLeaveCouple_H
#define BlossomLeaveCouple_H


#include "Arduino.h"

class BlossomLeaveCouple{

    public:
        BlossomLeaveCouple(int pinLeaveA, int pinLeaveB);
        boolean getConnection();
       
    private:
       int _pinLeaveA;
       int _pinLeaveB;
};

#endif
