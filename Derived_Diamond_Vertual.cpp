#include "Derived_Diamond_Vertual.h"

Derived_Diamond_Vertual::Derived_Diamond_Vertual(int i)
{
	iDerived_Diamond_Vertual = i;
	cout << "Derived_Diamond_Vertual::Derived_Diamond_Vertual()" << endl;
}

Derived_Diamond_Vertual::~Derived_Diamond_Vertual(void)
{
	cout << "Derived_Diamond_Vertual::~Derived_Diamond_Vertual()" << endl;
}

void Derived_Diamond_Vertual::print() const
{
	cout << "Derived_Diamond_Vertual::print() iDerived_Diamond_Vertual:" << iDerived_Diamond_Vertual << endl;
}

void Derived_Diamond_Vertual::Derived_Diamond_Vertual_Print()
{
	cout << "Derived_Diamond_Vertual::Derived_Diamond_Vertual_Print() iDerived_Diamond_Vertual:" << iDerived_Diamond_Vertual << endl;
}
