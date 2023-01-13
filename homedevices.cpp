#include "homedevices.h"

HomeDevices::HomeDevices(const string device , const string name
                        ,const bool vga)
{
    _device = device ;
    _name = name;
    _vga = vga;
}

HomeDevices::HomeDevices(const bool vga)
{
    _vga = vga ;
}


void HomeDevices::show()
{
    cout << _name << "  VGA : "  << _vga << endl;
}

