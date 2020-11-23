#include "Base1.h"

//初始化静态成员数据
int Base_1::count_1 = 0;
//静态方法
int Base_1::instanceCount()
{
	cout<<"Base_1::instanceCount() count_1 address: " << &count_1 << endl;
	return count_1;
}

Base_1::Base_1(int i)
{
	iBase_1 = i;
	count_1++;
	cout<<"Base_1::Base_1()"<<endl;
}

Base_1::Base_1()
{
	iBase_1 = 1;
	count_1++;
	cout<<"Base_1::Base_1(0)"<<endl;
}

Base_1::~Base_1(void)
{
	cout<<"Base_1::~Base_1()" <<endl;
}

int Base_1::getIBase() const
{
	cout<< " Base_1::getIBase address:" << &iBase_1 << endl;
	return iBase_1;
}

void Base_1::print(void) const
{
	cout<<"Base_1::print(),iBase_1: " << iBase_1 << endl;
}