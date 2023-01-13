#pragma once
#include "mobiledevices.h"

class SmartPhone final : public MobileDevices
{
   public:
       SmartPhone( const string device , const string name
                 ,const double camera , const double gps);
       void show() override;

   private:
        double _gps;
};
