#pragma once
#include "mobiledevices.h"
#include "homedevices.h"

class Laptoop final: public MobileDevices , HomeDevices
{
public:
    Laptoop(const string product , const string name, const double price, const double camera, const bool vga
            , unsigned short keyboard):MobileDevices(product,name,price,camera),HomeDevices(vga),_keyboard(keyboard){}
    ~Laptoop();
    string getProduct();
    unsigned short getKeyboard();

private:
    unsigned short _keyboard;
};

