#include <iostream>
#include "smartphone.h"
#include "laptoop.h"
#include "computer.h"

int main()
{
    IProduct *device[9];
    device[0] = new Smartphone("Smartphone" ,"Samsung" ,87.5 ,2.5 ,2.01);
    device[1] = new Laptoop("Laptoop" ,"ASUS" ,205.5 ,true ,3.5 ,104);
    device[2] = new Computer("Computer","ASER" ,57.3 ,true ,false);


    return 0;
}
