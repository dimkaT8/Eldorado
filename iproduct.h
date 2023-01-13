#pragma once

#include <string>
#include <iostream>
using namespace std;


class IProduct
{

  public:
    virtual void show()=0;
    virtual ~IProduct()=default;
    string getDeice();

  protected:
    string _device;
    string _name;

};

