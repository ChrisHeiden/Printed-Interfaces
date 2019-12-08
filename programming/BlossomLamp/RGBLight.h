#ifndef RGBLight_H
#define RGBLight_H

#include "Arduino.h"
#include <Adafruit_NeoPixel.h>
#ifdef __AVR__
#include <avr/power.h>
#endif

#define PIXELNUMBER 6

class RGBLight{

    public:
        RGBLight(int pin);
        void changeBrightness(int brightness);
        void up(int r, int g, int b);
        void off();

    private:
        Adafruit_NeoPixel _pixels;
        int _pin;
        int _brightness;
};

#endif
