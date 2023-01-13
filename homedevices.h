#pragma once
#include "iproduct.h"

class HomeDevices : virtual public IProduct
{

    public:
       HomeDevices(const string device , const string name
                    ,const bool vga);
        HomeDevices(const bool vga);
        void show() override;
    protected:
       bool _vga;
};
