#include "RGBLight.h"
 
RGBLight::RGBLight(int pin){
    _pin = pin;
    _brightness = 0;
    _pixels = Adafruit_NeoPixel(PIXELNUMBER, _pin, NEO_GRB + NEO_KHZ800);

    _pixels.begin();
}

void RGBLight::changeBrightness(int brightness){
    _brightness = _brightness + brightness;
    _pixels.setBrightness(_brightness);
}


void RGBLight::up(int r, int g, int b){
    _pixels.setPixelColor(0, r, g, b, _brightness);
    _pixels.show();
}

void RGBLight::off(){
    _pixels.clear();
}
