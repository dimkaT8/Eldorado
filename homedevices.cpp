#include "homedevices.h"

HomeDevices::HomeDevices(const string product, const string name
                         , const double price, const bool vga)
{
    _product = product;
    _name = name;
    _price = price;
    _vga = vga;
}

HomeDevices::HomeDevices(const bool vga)
{
    _vga = vga;
}

bool HomeDevices::getVga()
{
    return _vga;
}
