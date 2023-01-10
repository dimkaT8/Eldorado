#pragma once
#include "mobiledevices.h"

class Smartphone final: public MobileDevices
{
public:
    Smartphone(const string product ,const string name ,const double price ,const double camera,const double gps);
    ~Smartphone()=default;
    double getGps();

private:
    double _gps;
};

