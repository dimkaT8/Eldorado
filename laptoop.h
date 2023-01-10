#pragma once
#include "homedevices.h"
#include "mobiledevices.h"

class Laptoop final: public MobileDevices ,HomeDevices
{
public:
    Laptoop(const string product ,const string name ,const double price
            ,const bool hdmi , const double camera , const unsigned int keyboard);
    ~Laptoop()=default;
    unsigned int getkeyboard();
private:
    unsigned int _keyboard;
};

