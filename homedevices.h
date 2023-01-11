#pragma once
#include "IProduct.h"

class HomeDevices : virtual public IProduct
{
public:
    HomeDevices(const string product , const string name
                , const double price, const bool vga);
    HomeDevices(const bool vga);
    bool getVga();
    string getProduct() override;
    ~HomeDevices();
private:
    bool _vga;
};


