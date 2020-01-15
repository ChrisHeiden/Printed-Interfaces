#ifndef BlossomLeaveCouple_H
#define BlossomLeaveCouple_H


#include "Arduino.h"

class BlossomLeaveCouple{

    public:
        BlossomLeaveCouple(int pinLeaveA, int pinLeaveB, int threshold);
        boolean getConnection();
       
    private:
       int _pinLeaveA;
       int _pinLeaveB;
       int _threshold;
};

#endif
