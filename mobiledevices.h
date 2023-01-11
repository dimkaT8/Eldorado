#pragma once
#include "IProduct.h"

class MobileDevices : virtual public IProduct
{
public:
    MobileDevices(const string product , const string name
                  , const double price, const double camera);
    string getProduct() override;
    double getCamera();
    ~MobileDevices();
private:
    double _camera;
};

