#ifndef DERIVED_MUTLIP_INHERIT_
#define DERIVED_MUTLIP_INHERIT_

#include "Base.h"
#include "Base1.h"

class Derived_Mutlip_Inherit:
	public Base, public Base_1
{
    public:
        Derived_Mutlip_Inherit(int);
        virtual void print(void) const;
        virtual void Derived_Mutlip_Inherit_Print(void);
        virtual ~Derived_Mutlip_Inherit(void);
    protected:
        int iDerived_Mutlip_Inherit;
};

#endif