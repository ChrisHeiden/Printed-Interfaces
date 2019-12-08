#include "RGBLight.h"
 
RGBLight::RGBLight(int rPin, int gPin, int bPin){
    _rPin = rPin;
    _gPin = gPin;
    _bPin = bPin;

    pinMode(_rPin, OUTPUT);
    pinMode(_gPin, OUTPUT);
    pinMode(_bPin, OUTPUT);

    _brightness = 0;
}

void RGBLight::changeBrightness(int brightness){
    _brightness = _brightness + brightness;
}


void RGBLight::up(int rBright, int gBright, int bBright){
    analogWrite(_rPin, _brightness);
    analogWrite(_gPin, _brightness);
    analogWrite(_bPin, _brightness);
}

void RGBLight::off(){
    analogWrite(_rPin, 0);
    analogWrite(_gPin, 0);
    analogWrite(_bPin, 0);
}