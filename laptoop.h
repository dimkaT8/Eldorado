#pragma once
#include "mobiledevices.h"
#include "homedevices.h"

class Laptoop final : public MobileDevices , HomeDevices
{
    public:
       Laptoop(const string device , const string name
              ,const double camera , const bool vga ,const int keyboard);
       void show() override;

    private:
       int _keyboard;
};
