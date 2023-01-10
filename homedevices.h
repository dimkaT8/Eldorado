#pragma once
#include "ieldorado.h"

class HomeDevices : virtual public IProduct
{
public:
    ~HomeDevices()=default;
   // string getName() override;
   // double getPrice() override;
   // string getProduct() override;
    bool getHdmi();
protected:
    bool _hdmi;
};

