#include "laptoop.h"

Laptoop::Laptoop(const string product, const string name, const double price
                 , const bool hdmi, const double camera ,const unsigned int keyboard)
{
    _product = product;
    _name = name;
    _price = price;
    _hdmi = hdmi;
    _camera = camera;
    _keyboard = keyboard;
}

unsigned int Laptoop::getkeyboard()
{
    return _keyboard;
}
