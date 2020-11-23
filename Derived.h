
#ifndef DERIVED_H_
#define DERIVED_H_

#include "Base.h"

class Derived : public Base
{
    public:
        Derived(int);
        virtual void derived_print(void);
        virtual ~Derived(void);
    protected:
        int iDerived;
};

#endif