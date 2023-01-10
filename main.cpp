#include <iostream>
#include "smartphone.h"
#include "laptoop.h"

int main()
{
    Smartphone *sd = new Smartphone("Smartphone" ,"Samsung" ,87.5 ,2.5 ,2.01);
    Laptoop *ld = new Laptoop("Laptoop" ,"ASUS" ,205.5 ,true ,3.5 ,104);

    cout << sd->getProduct() <<sd->getName() << sd->getPrice() << sd->getCamera() <<sd->getGps() <<endl;
    cout << ld.
    delete sd;
    return 0;
}
