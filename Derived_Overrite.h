#ifndef DERIVED_OVERRITE_
#define DERIVED_OVERRITE_

#include "Base.h"

class Derived_Overrite : public Base
{
    public:
        Derived_Overrite(int);
        Derived_Overrite();
        virtual void print(void) const;
        virtual void derived_print(void);
        virtual ~Derived_Overrite(void);
    protected:
        int iDerived;
};

#endif