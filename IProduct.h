#pragma once

#include <string>
#include <iostream>
using namespace std;

class IProduct
{
public:
    virtual ~IProduct() = default;
    virtual string getProduct()=0;
    virtual string getName(){ return _name; };
    virtual double getPrice(){ return _price; };

protected:
    string _product;
    string _name;
    double _price;
};
