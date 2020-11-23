#include "Derived_Diamond_Inherit.h"

Derived_Diamond_Inherit::Derived_Diamond_Inherit(int i)
{
	iDerived_Diamond_Inherit = i;
	cout << "Derived_Diamond_Inherit::Derived_Diamond_Inherit()" << endl;
}

Derived_Diamond_Inherit::~Derived_Diamond_Inherit(void)
{
	cout << "Derived_Diamond_Inherit::~Derived_Diamond_Inherit()" << endl;
}

void Derived_Diamond_Inherit::print() const
{
	cout << "Derived_Diamond_Inherit::print() iDerived_Diamond_Inherit:" << iDerived_Diamond_Inherit << endl;
}

void Derived_Diamond_Inherit::Derived_Diamond_Inherit_Print()
{
	cout << "Derived_Diamond_Inherit::Derived_Diamond_Inherit_Print() iDerived_Diamond_Inherit:" << iDerived_Diamond_Inherit << endl;
}
