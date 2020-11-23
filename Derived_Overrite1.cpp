#include "Derived_Overrite1.h"

Derived_Overrite_1::Derived_Overrite_1(int i)
{
	iDerived_Overrite_1 = i;
	cout<<"Derived_Overrite_1::Derived_Overrite_1(int i)"<<endl;
}

Derived_Overrite_1::Derived_Overrite_1()
{
	iDerived_Overrite_1 = 2;
	cout<<"Derived_Overrite_1::Derived_Overrite_1()"<<endl;
}

Derived_Overrite_1::~Derived_Overrite_1(void)
{
	cout<<"Derived_Overrite_1::~Derived_Overrite_1()"<<endl;
}

void Derived_Overrite_1::derived_print()
{
	cout<<"Derived_Overrite_1::derived_print() iDerived_Overrite_1:"<<iDerived_Overrite_1<<endl;
}

void Derived_Overrite_1::print(void) const
{
	cout<<"Derived_Overrite_1::print() iDerived_Overrite_1 : " << iDerived_Overrite_1 << endl;
}