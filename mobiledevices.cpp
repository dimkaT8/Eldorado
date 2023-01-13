#include "mobiledevices.h"

MobileDevices::MobileDevices(const string device , const string name
                            ,const double camera)
{
    _device = device ;
    _name = name;
    _camera = camera ;
}

void MobileDevices::show()
{
   cout << _name << "  camera : " << _camera << endl;
}
