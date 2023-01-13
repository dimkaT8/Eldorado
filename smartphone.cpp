#include "smartphone.h"

SmartPhone::SmartPhone( const string device , const string name ,const double camera
                      , const double gps) : MobileDevices(device ,name ,camera)
{
    _gps = gps ;
}

void SmartPhone::show()
{
    cout <<_name <<" \t camera : " << _camera << "Mp   \t GPS : v." << _gps << endl;
}
