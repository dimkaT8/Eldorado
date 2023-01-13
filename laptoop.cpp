#include "laptoop.h"

Laptoop::Laptoop(const string device , const string name ,const double camera , const bool vga
                ,const int keyboard) : MobileDevices(device, name, camera)
                                      , HomeDevices( vga)
{
    _keyboard = keyboard ;
}

void Laptoop::show()
{
    cout << _name << " \t camera : "<< _camera << "Mp   \t VGA :" ;

    if(_vga){
        cout << "Yes";
    } else cout << "No";

    cout << "  \t Keyboard :"<< _keyboard << endl;
}
