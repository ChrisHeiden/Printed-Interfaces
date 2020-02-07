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

void RGBLight::colorUp(int r, int g, int b){
    _pixels.setPixelColor(0, r, g, b, _brightness);
    _pixels.show();
}

void RGBLight::up(){
    _pixels.show();
}

void RGBLight::off(){
  _pixels.setPixelColor(0, 0, 0, 0);
  _pixels.show();
}

void RGBLight::defineThirdColor(){
  _pixels.setPixelColor(0, 255, 255, 255, _brightness);
}

void RGBLight::defineSecondColor(){
   _pixels.setPixelColor(0, 255, 255, 0, _brightness);
}

void RGBLight::defineFirstColor(){
  _pixels.setPixelColor(0, 0, 255, 0, _brightness);
}
