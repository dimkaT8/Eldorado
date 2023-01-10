#pragma once
#include "ieldorado.h"

class MobileDevices : virtual public IProduct
{
public:
    ~MobileDevices()=default;
    string getName() override;
    double getPrice() override;
    string getProduct() override;
    double getCamera();
protected:
    double _camera;
};

