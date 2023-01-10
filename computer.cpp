#include "computer.h"



Computer::Computer(const string product, const string name, const double price
                   , const bool hdmi, const bool ps2)
{
    _product = product;
    _name = name;
    _price = price;
    _hdmi = hdmi;
    _ps2 = ps2;
}

bool Computer::getPs2()
{
    return _ps2;
}
