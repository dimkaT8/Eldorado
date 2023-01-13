#pragma once
#include "homedevices.h"

class Computer final : public HomeDevices
{
    public:
        Computer(const string device , const string name ,
                const bool vga , const bool ps2);
        void show() override;

    private:
       bool _ps2;
};
