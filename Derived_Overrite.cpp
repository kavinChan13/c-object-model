#include "Derived_Overrite.h"


Derived_Overrite::Derived_Overrite(int i)
{
	iDerived = i;
	cout<<"Derived_Overrite::Derived_Overrite(int i)"<<endl;
}

Derived_Overrite::Derived_Overrite()
{
	iDerived = 3;
	cout<<"Derived_Overrite::Derived_Overrite()"<<endl;
}

Derived_Overrite::~Derived_Overrite(void)
{
	cout<<"Derived_Overrite::~Derived_Overrite()"<<endl;
}

void Derived_Overrite::print(void) const
{
	cout<<"Derived_Overrite::print() iDerived :" << iDerived << endl;
}

void Derived_Overrite::derived_print(void)
{
    cout<<"Derived_Overrite::derived_print iDerived :"<< iDerived << endl;
}
