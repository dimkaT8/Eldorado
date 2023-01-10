#include "smartphone.h"



Smartphone::Smartphone(const string product, const string name, const double price,const double camera, const double gps)
{
    _product = product;
    _name = name;
    _price = price;
    _camera = camera;
    _gps = gps;
}

double Smartphone::getGps()
{
    return _gps;
}
