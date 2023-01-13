#include "smartphone.h"
#include "computer.h"
#include "laptoop.h"

void DeviceShow( IProduct *device[] , int asize , string devstr)
{
    cout << endl;
    for(int i=0 ; i < asize ; i++)
    {
        if( device[i]->getDeice() == devstr) device[i]->show();
    }
    cout << endl;
}

int main()
{
    const string smart = "Smartphone";
    const string laptoop = "Laptoop";
    const string comp = "Computer";
    const int arraySize = 9;
    char in_cin = 'Y';
    IProduct *device[arraySize];

    device[0] = new SmartPhone(smart,"BQ",3.5 , 2.07);
    device[1] = new Computer(comp,"Aser",true,false);
    device[2] = new Laptoop(laptoop,"HP",2.5,true,86);
    device[3] = new SmartPhone(smart,"Fly",2.5 , 1.7);
    device[4] = new Computer(comp,"Aser",true,true);
    device[5] = new Laptoop(laptoop,"Asus",2.5,true,104);
    device[6] = new SmartPhone(smart,"LG",3.5 , 1.8);
    device[7] = new Computer(comp,"Aser",false,true);
    device[8] = new Laptoop(laptoop,"Asus",3.5,false,112);
    do
    {
      cout << " Что хотите посмотреть ?  " << smart << "-(S) ,  " ;
      cout << laptoop << "-(L) ,  "<< comp << "-(C) , ";
      cin >> in_cin ;
      switch (in_cin)
      {
      case 'S':
        DeviceShow(device,arraySize,smart);
        break;

      case 'L':
        DeviceShow(device,arraySize,laptoop);
        break;

      case 'C':
        DeviceShow(device,arraySize,comp);
        break;

      default:
        break;
      }
      cout << " Продолжаем ? Yes-(Y)  No-(N) : ";  cin >> in_cin ;
      cout << endl;
    } while (in_cin == 'Y');

    for(int i = 0 ; i < arraySize ; i++) delete device[i];

    return 0;
}
