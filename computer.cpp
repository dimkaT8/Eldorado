#include "computer.h"

Computer::Computer(const string device , const string name ,const bool vga
                   , const bool ps2) : HomeDevices( device , name , vga )
{
    _ps2 = ps2 ;
}

void Computer::show()
{
    cout << _name << "    \t VGA:" ;

    if(_vga){
        cout << "Yes";
    } else cout << " No";

    cout << "    \t PS/2:" ;
    if(_ps2){
        cout << "Yes";
    } else cout << "No";

    cout << endl;
}
