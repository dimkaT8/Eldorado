#pragma once
#include "homedevices.h"

class Computer final: public HomeDevices
{
public:
    Computer(const string product ,const string name ,const double price
             , const bool hdmi, const bool ps2);
    ~Computer()=default;
    bool getPs2();
private:
    bool _ps2;
};

