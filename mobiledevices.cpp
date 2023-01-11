#include "mobiledevices.h"

MobileDevices::MobileDevices(const string product, const string name
                             , const double price, const double camera)
{
   _product = product;
   _name = name;
   _price = price;
   _camera = camera;
}


double MobileDevices::getCamera()
{
    return _camera;
}
