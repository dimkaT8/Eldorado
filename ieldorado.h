#pragma once

#include <string>
#include <iostream>
using namespace std;

class IProduct
{
public:
    virtual ~IProduct() = default;
    virtual string getName()=0;
    virtual double getPrice()=0;
    virtual string getProduct()=0;
protected:
    string _product;
    string _name;
    double _price;
};

