#pragma once
#include "iproduct.h"

class MobileDevices : virtual public IProduct
{

   public:
       MobileDevices(const string device , const string name
                    ,const double camera);
        void show() override;
   protected:
       double _camera;
};
