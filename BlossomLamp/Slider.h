#ifndef Slider_H
#define Slider_H

#include <CapacitiveSensor.h>
#define maxCapacitive 3
#define SENSITIVITY 10000
#define THRESHOLD 20
#define BRIGHTNESSCHANGE 10

class Slider{

  public:
    Slider(int brightness);
    void push();
    int getBrightnessValue();
    void testCapSensors();
    void setTouch(int firstTouch, int secondTouch);

  private:
    int _brightness;
    CapacitiveSensor _cap1 = CapacitiveSensor(6,5); 
    CapacitiveSensor _cap2 = CapacitiveSensor(8,7);
    CapacitiveSensor _cap3 = CapacitiveSensor(9,10); 
    CapacitiveSensor _capArray[maxCapacitive] = {_cap1, _cap2, _cap3};
    
    long _capValue[maxCapacitive];
    short _firstTouch;
    short _secondTouch;
 
};

#endif
