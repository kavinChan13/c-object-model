#include "Derived_Mutlip_Inherit.h"

Derived_Mutlip_Inherit::Derived_Mutlip_Inherit(int i)
{
	iDerived_Mutlip_Inherit = i;
	cout << "Derived_Multip_Inherit::Derived_Multip_Inherit()" << endl;
}

Derived_Mutlip_Inherit::~Derived_Mutlip_Inherit(void)
{
	cout << "Derived_Multip_Inherit::~Derived_Multip_Inherit()" << endl;
}

void Derived_Mutlip_Inherit::print() const
{
	cout << "Derived_Multip_Inherit::print() iDerived_Mutlip_Inherit : "<< iDerived_Mutlip_Inherit << endl;
}

void Derived_Mutlip_Inherit::Derived_Mutlip_Inherit_Print()
{
	cout << "Derived_Multip_Inherit::Derived_Mutlip_Inherit_Print() iDerived_Mutlip_Inherit: "<< iDerived_Mutlip_Inherit << endl;
} 