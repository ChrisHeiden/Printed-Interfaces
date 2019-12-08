#include "Arduino.h"
class RGBLight{

    public:
        RGBLight(int rPin, int gPin, int bPin);
        void changeBrightness(int brightness);
        void up(int rBright, int gBright, int bBright);
        void off();

    private:
        int _rPin;
        int _gPin;
        int _bPin;

        int _brightness;
};
