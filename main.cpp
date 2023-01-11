#include "laptoop.h"

int main()
{
    Laptoop *device[1];
    device[0] = new Laptoop("Laptoop","Asus",230,3.5,false,104);
    cout << device[0]->getProduct()<<" "<< device[0]->getName()<<" "<< device[0]->getPrice()
                                  <<" "<<device[0]->getCamera()<<" "<<device[0]->getKeyboard();
    delete device[0];
    return 0;
}
