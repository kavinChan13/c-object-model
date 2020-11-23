#ifndef DERIVED_DIAMOND_VERTUAL_H_
#define DERIVED_DIAMOND_VERTUAL_H_

#include "Derived_Virtual_Inherit.h"
#include "Derived_Virtual_Inherit1.h"

class Derived_Diamond_Vertual:
	public Derived_Virtual_Inherit, public Derived_Virtual_Inherit_1
{
    public:
        Derived_Diamond_Vertual(int);
        virtual void print(void) const;
        virtual void Derived_Diamond_Vertual_Print(void);
        virtual ~Derived_Diamond_Vertual(void);
    protected:
        int iDerived_Diamond_Vertual;
};

#endif