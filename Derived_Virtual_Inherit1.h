#ifndef DERIVED_VIRTUAL_INHERIT1_H_
#define DERIVED_VIRTUAL_INHERIT1_H_

#include "Base.h"

class Derived_Virtual_Inherit_1 :
	virtual public Base
{
    public:
        Derived_Virtual_Inherit_1(int);
        Derived_Virtual_Inherit_1();
        virtual void print(void) const;
        virtual void inherit_print_1(void) const;
        virtual ~Derived_Virtual_Inherit_1(void);
    protected:
        int iDerived_Virtual_Inherit_1;
};

#endif