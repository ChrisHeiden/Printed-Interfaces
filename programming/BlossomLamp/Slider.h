#include <CapacitiveSensor.h>
#define maxCapacitive 16
#define SENSITIVITY 10000
#define threshold 100

class Slider{

  public:
    Slider();
    void push();
    short getBrightness();
    
  private:
    short _brightness;

    CapacitiveSensor _cap1  = CapacitiveSensor(6,7);
    /*CapacitiveSensor _cap2  = CapacitiveSensor(3, 2);
    CapacitiveSensor _cap3  = CapacitiveSensor(3, 2);
    CapacitiveSensor _cap4  = CapacitiveSensor(3, 2);
    CapacitiveSensor _cap5  = CapacitiveSensor(3, 2);
    CapacitiveSensor _cap6  = CapacitiveSensor(3, 2);
    CapacitiveSensor _cap7  = CapacitiveSensor(3, 2);
    CapacitiveSensor _cap8  = CapacitiveSensor(3, 2);
    CapacitiveSensor _cap9  = CapacitiveSensor(3, 2);
    CapacitiveSensor _cap10  = CapacitiveSensor(3, 2);
    CapacitiveSensor _cap11  = CapacitiveSensor(3, 2);
    CapacitiveSensor _cap12  = CapacitiveSensor(3, 2);
    CapacitiveSensor _cap13  = CapacitiveSensor(3, 2);
    CapacitiveSensor _cap14  = CapacitiveSensor(3, 2);
    CapacitiveSensor _cap15  = CapacitiveSensor(3, 2);
    CapacitiveSensor _cap16  = CapacitiveSensor(3, 2);
    
    CapacitiveSensor _capArray[maxCapacitive] = {_cap1, _cap2, _cap3, _cap4, _cap5, _cap6, _cap7, _cap8, _cap9, _cap10, _cap11, _cap12, _cap13, _cap14, _cap15, _cap16};
    long _capValue[maxCapacitive];*/
};
