#ifndef DERIVED1_H_
#define DERIVED1_H_

#include "Base.h"

class Derived_Overrite_1 : public Base
{
    public:
        Derived_Overrite_1(int);
        Derived_Overrite_1();
        virtual void print(void) const;
        virtual void derived_print(void);
        virtual ~Derived_Overrite_1(void);
    protected:
        int iDerived_Overrite_1;
};

#endif