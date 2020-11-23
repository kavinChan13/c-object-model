#include "Derived_Virtual_Inherit1.h"

Derived_Virtual_Inherit_1::Derived_Virtual_Inherit_1(int i)
{
	iDerived_Virtual_Inherit_1 = i;
	cout << "Derived_Virtual_Inherit_1::Derived_Virtual_Inherit_1(int i)" << endl;
}

Derived_Virtual_Inherit_1::Derived_Virtual_Inherit_1()
{
	iDerived_Virtual_Inherit_1 = 5;
	cout << "Derived_Virtual_Inherit_1::Derived_Virtual_Inherit_1()" << endl;
}

Derived_Virtual_Inherit_1::~Derived_Virtual_Inherit_1(void)
{
	cout << "Derived_Virtual_Inherit_1::~Derived_Virtual_Inherit_1()" << endl;
}

void Derived_Virtual_Inherit_1::print(void) const
{
	cout<<"Derived_Virtual_Inherit_1::print() iDerived_Virtual_Inherit_1: " << iDerived_Virtual_Inherit_1 << endl;
}

void Derived_Virtual_Inherit_1::inherit_print_1(void) const
{
	cout<<"Derived_Virtual_Inherit_1::inherit_print() iDerived_Virtual_Inherit_1: " << iDerived_Virtual_Inherit_1 << endl;
}
