#ifndef DERIVED_DIAMOND_INHERIT_
#define DERIVED_DIAMOND_INHERIT_

#include "Derived_Overrite.h"
#include "Derived_Overrite1.h"

class Derived_Diamond_Inherit:
	public Derived_Overrite, public Derived_Overrite_1
{
    public:
        Derived_Diamond_Inherit(int);
        virtual void print(void) const;
        virtual void Derived_Diamond_Inherit_Print(void);
        virtual ~Derived_Diamond_Inherit(void);
    protected:
        int iDerived_Diamond_Inherit;
};

#endif