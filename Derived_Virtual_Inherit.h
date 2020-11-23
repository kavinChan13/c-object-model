#ifndef DERIVED_VIRTUAL_INHERIT_H_
#define DERIVED_VIRTUAL_INHERIT_H_

#include "Base.h"

class Derived_Virtual_Inherit :
	virtual public Base
{
    public:
        Derived_Virtual_Inherit(int);
        Derived_Virtual_Inherit();
        virtual void print(void) const;
        virtual void inherit_print(void) const;
        virtual ~Derived_Virtual_Inherit(void);
    protected:
        int iDerived_Virtual_Inherit;
};

#endif