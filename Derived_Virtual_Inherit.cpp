#include "Derived_Virtual_Inherit.h"

Derived_Virtual_Inherit::Derived_Virtual_Inherit(int i)
{
	iDerived_Virtual_Inherit = i;
	cout << "Derived_Virtual_Inherit::Derived_Virtual_Inherit(int i)" << endl;
}

Derived_Virtual_Inherit::Derived_Virtual_Inherit()
{
	iDerived_Virtual_Inherit = 6;
	cout << "Derived_Virtual_Inherit::Derived_Virtual_Inherit()" << endl;
}

Derived_Virtual_Inherit::~Derived_Virtual_Inherit(void)
{
	cout << "Derived_Virtual_Inherit::~Derived_Virtual_Inherit()" << endl;
}

void Derived_Virtual_Inherit::print(void) const
{
	cout<<"Derived_Virtual_Inherit::print() iDerived_Virtual_Inherit: " << iDerived_Virtual_Inherit << endl;
}

void Derived_Virtual_Inherit::inherit_print(void) const
{
	cout<<"Derived_Virtual_Inherit::inherit_print() iDerived_Virtual_Inherit: " << iDerived_Virtual_Inherit << endl;
}
