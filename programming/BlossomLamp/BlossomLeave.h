#include "Arduino.h"
class BlossomLeave{

    public:
        BlossomLeave(int pin, boolean pinMode);
        void changePinMode();
        boolean getConnection();
       
    private:
       int _pin;
       boolean _pinMode;
};
