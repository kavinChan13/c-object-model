#include<iostream>
#include "Base.h"
#include "Derived.h"
#include "Derived_Overrite.h"
#include "Derived_Mutlip_Inherit.h"
#include "Derived_Diamond_Inherit.h"
#include "Derived_Virtual_Inherit.h"
#include "Derived_Diamond_Vertual.h"

using namespace std;

void test_modle(void);
void test_single_inherit_norewrite(void);
void test_single_inherit_rewrite(void);
void test_multip_inherit(void);
void test_diamond_inherit(void);
void test_single_vitrual_inherit(void);
void test_diamond_vitrual(void);

int main(int argc, char *argv[]){ 
    // test_modle();
    // test_single_inherit_norewrite();
    // test_single_inherit_rewrite();
    // test_multip_inherit();
    test_diamond_inherit();
	// test_single_vitrual_inherit();
	// test_diamond_vitrual();
}

void test_modle()
{
    cout << "-------------------model_test------------------" << endl;
	cout << endl;
    Base b1(1111);
	cout << "sizeof Base " << sizeof(b1) << endl;
    cout << "address of b1:" << &b1 << endl;
    cout << "type_info:" << ((long*)*(long*)(&b1) - 1) << endl;
    int *p = (int*)(&b1);
    p += 2;
    cout << "iBase:" << *p << endl;

    cout << "virtual table address:" << (long*)(&b1) << endl;
    cout << "virtual table first function address:" << (long*)*(long*)(&b1) << endl;
    cout << "virtual table second function address:" << ((long*)*(long*)(&b1) + 1) << endl;
    typedef void (*Fun)(Base*);
    Fun pFun = (Fun)*(((long*)*(long*)(&b1)));
    pFun(&b1);
    b1.print();
    pFun = (Fun)*(((long*)*(long*)(&b1)) + 1);
    pFun(&b1);
    cout << endl;
    b1.instanceCount();
    cout << "static function instanceCount address:" << b1.instanceCount << endl;
}

void test_single_inherit_norewrite()
{
    cout << "--------------------test_single_inherit_norewrite-------------------------------" << endl;
	cout << endl;
	Derived d(2222);
	cout << "sizeof Derived " << sizeof(d) << endl;
	int *p = (int*)(&d);
	p += 2;
    cout << "iBase:" << *p << endl;
	p += 1;
    cout << "iDerived:" << *p << endl;

	cout << "address of d:" << &d << endl;
    cout << "virtual table first function address d: " << (long*)*(long*)(&d) << endl;
	cout << "type_info info: " << ((long*)*(long*)(&d) - 1) << endl;

	cout << "virtual table address: " << (long*)(&d) << endl;
	cout << "virtual table first function address: " << (long*)*(long*)(&d) << endl;
	typedef void(*Fun)(Derived*);
	Fun pFun = (Fun)*((long*)*(long*)(&d));
	pFun(&d);
	d.print();
	cout << endl;

	cout << "virtual table third function address:" << ((long*)*(long*)(&d) + 3) << endl;
	pFun = (Fun)*(((long*)*(long*)(&d)) + 3);
	pFun(&d);
	d.derived_print();
	cout << endl;
}

void test_single_inherit_rewrite()
{
    cout << "-------------------test_single_inherit_rewrite------------------" << endl;
	cout << endl;
	Derived_Overrite d(33333);
	cout << "sizeof Derived_Overrite " << sizeof(d) << endl;
	int *p = (int*)(&d);
	p += 2;
    cout << "iBase:" << *p << endl;
	p += 1;
    cout << "iDerived:" << *p << endl;

	cout << "virtual table address:" << (long*)(&d) << endl;
	cout << "virtual table first function address: " << (long*)*(long*)(&d) << endl;
	typedef void(*Fun)(Derived_Overrite*);
	Fun pFun = (Fun)*((long*)*(long*)(&d));
	pFun(&d);
	d.print();
	Fun pFun2 = (Fun)*(((long*)*(long*)(&d)) + 3);
	pFun2(&d);

}

void test_multip_inherit()
{
    cout << "-------------------test_multip_inherit base------------------" << endl;
	cout << endl;
	Derived_Mutlip_Inherit dmi(44444);
	cout << "virtual table address:" << (long*)(&dmi) << endl;
	cout << "_vptr_Base : first function address:" << (long*)*(long*)(&dmi) << endl;
	cout << "sizeof Derived_Mutlip_Inherit " << sizeof(dmi) << endl;
    int *p = (int*)(&dmi);
    p += 2 ;
    cout << "ibase :" << *p << endl;
    p += 4 ;
    cout << "ibase_1:" << *p << endl;
    p += 1 ;
    cout << "iDerived_Mutlip_Inherit: " << *p << endl;

	typedef void(*Fun)(Derived_Mutlip_Inherit*);
	Fun pFun = (Fun)*((long*)*(long*)(&dmi));
	pFun(&dmi);
	cout << endl;
	cout << "_vptr_Base : third function address:" << ((long*)*(long*)(&dmi) + 3) << endl;
	Fun pFun2 = (Fun)*(((long*)*(long*)(&dmi)) + 3);
	pFun2(&dmi);
	cout << endl;
	cout << "Estimated iBase address:" << ((long*)(&dmi) +1) << "\nEstimated iBase value:" << *((long*)(&dmi) +1) << endl;

    cout << "-------------------test_multip_inherit   base 1 ------------------" << endl;
	cout << "address of _vptr_Base1" << ((long*)(&dmi) +2) << endl;
	cout << "_vptr_Base1 : first function address:" << (long*)*((long*)(&dmi) +2) << endl;
	cout << "_vptr_Base1 : second function address:" << ((long*)*((long*)(&dmi) +2) + 1) << endl;
	typedef void(*Fun)(Derived_Mutlip_Inherit*);
	pFun = (Fun)*((long*)*((long*)(&dmi) + 2));
	pFun(&dmi);
	cout << endl;
	cout << "_vptr_Base1 : third function address:" << *((long*)*(long*)((long*)(&dmi) +2) + 2) << endl;
    pFun = (Fun)*((long*)*((long*)(&dmi) +2) + 1);
    // pFun(&dmi);
	cout << endl;
}

void test_diamond_inherit()
{
    cout << "-------------------test_diamond_inherit  base------------------" << endl;
	cout << endl;
	Derived_Diamond_Inherit ddi(55555);

	cout << "virtual table address:" << (long*)(&ddi) << endl;
	cout << "_vptr_Base : first function address:" << (long*)*(long*)(&ddi) << endl;
	cout << "sizeof Derived_Diamond_Inherit " << sizeof(ddi) << endl;
    int *p = (int*)(&ddi);
    p += 2 ;
    cout << "ibase :" << *p << endl;
    p += 1 ;
    cout << "iDerived:" << *p << endl;
    p += 3 ;
    cout << "ibase : " << *p << endl;
    p += 1 ;
    cout << "iDerived_Overrite_1 : " << *p << endl;
    p += 1 ;
    cout << "iDerived_Diamond_Inherit : " << *p << endl;

    typedef void(*Fun)(Derived_Diamond_Inherit*);
	Fun pFun = (Fun)*((long*)*(long*)(&ddi));
	pFun(&ddi);
	cout << endl;
	cout << "_vptr_Base : third function address:" << ((long*)*(long*)(&ddi) + 3) << endl;
	pFun = (Fun)*(((long*)*(long*)(&ddi)) + 3);
	pFun(&ddi);
	pFun = (Fun)*(((long*)*(long*)(&ddi)) + 4);
	pFun(&ddi);
	// ddi.~Derived_Diamond_Inherit();
	// cout << "~Derived_Diamond_Inherit : " << endl;
	// pFun = (Fun)*(((long*)*(long*)(&ddi)) + 1);
	// pFun(&ddi);
	cout << endl;

    cout << "-------------------test_multip_inherit   base 1 ------------------" << endl;
	cout << endl;
	cout << "address of _vptr_Base1" << ((long*)(&ddi) +2) << endl;
	cout << "_vptr_Base1 : first function address:" << (long*)*((long*)(&ddi) +2) << endl;
	cout << "_vptr_Base1 : second function address:" << ((long*)*((long*)(&ddi) +2) + 1) << endl;
	cout << "_vptr_Base  2222222 " << (long*)*((long*)*((long*)(&ddi) +2)) << endl;
	cout << "_vptr_Base2 2222222 " << (long*)*(long*)*((long*)(&ddi)) << endl;
	cout << "_vptr_Base2 2222222 " << ddi.print << endl;
	//typedef void(*Fun1)(Derived_Virtual_Inherit_1*);
	Derived_Virtual_Inherit_1* pd1 = (Derived_Virtual_Inherit_1*)(&ddi);
	cout << "addr1: " << (long*)pd1 <<endl; 
	pFun = (Fun)*((long*)*((long*)(&ddi) + 2)); // 为什么 iDerived_Diamond_Inherit 打出来是 是乱码
	pFun(&ddi);
	cout << endl;
	ddi.print();
	cout << "_vptr_Base1 : third function address:" << *((long*)*(long*)((long*)(&ddi) +2) + 2) << endl;
    pFun = (Fun)*((long*)*((long*)(&ddi) +2) + 3);
    pFun(&ddi);
	cout << endl;
}

void test_single_vitrual_inherit()
{
	cout << "-------------------test_single_vitrual_inherit ------------------" << endl;
	cout << endl;
	Derived_Virtual_Inherit dvi(66666);

	cout << "sizeof Derived_Virtual_Inherit " << sizeof(dvi) << endl;
	int *p = (int*)(&dvi);
	p += 2 ;
    cout << "iDerived_Virtual_Inherit :" << *p << endl;
    p += 4 ;
    cout << "ibase:" << *p << endl;

	cout << "address of  dvi :" << &dvi << endl;
	cout << "address of _vptr_Derived : " << (long*)(&dvi) << endl;
	cout << "_vptr_Derived : first function address:" << (long*)*(long*)(&dvi) << endl;
	typedef void(*Fun)(Derived_Virtual_Inherit*);
	Fun pFun = (Fun)*((long*)*(long*)(&dvi));
	pFun(&dvi);
	dvi.print();
	cout << endl;
	cout << "_vptr_Derived : second function address:" << *((long*)*(long*)(&dvi) + 1) << endl;
	cout << endl;
	pFun = (Fun)*(((long*)*(long*)(&dvi)) + 1);
	pFun(&dvi);
	dvi.inherit_print();
	// dvi.~Derived_Virtual_Inherit();
	// pFun = (Fun)*(((long*)*(long*)(&dvi)) + 2);
	// pFun(&dvi);
	// dvi.~Base();
	cout << "_vptr_Base : first function :" << endl;
	pFun = (Fun)*((long*)*((long*)(&dvi) + 2));
	pFun(&dvi);
	cout << "_vptr_Base : second function:" << *((long*)*((long*)(&dvi) + 2) + 1) << endl;
	// pFun = (Fun)*((long*)*((long*)(&dvi) + 2) + 1);
	// pFun(&dvi);
	cout << endl;
}

void test_diamond_vitrual()
{
	cout << "-------------------test_diamond_vitrual ------------------" << endl;
	cout << endl;

	Derived_Diamond_Vertual ddv(77777);

	cout << "sizeof Derived_Diamond_Vertual " << sizeof(ddv) << endl;
	int *p = (int*)(&ddv);
	p += 2 ;
    cout << "iDerived_Virtual_Inherit :" << *p << endl;
	p += 4 ;
    cout << "iDerived_Virtual_Inherit_1 :" << *p << endl;
	p += 1 ;
    cout << "iDerived_Diamond_Inherit :" << *p << endl;
	p += 3 ;
    cout << "iBase:" << *p << endl;
	cout << endl;
	cout << "-------------------test_diamond_vitrual  _vptr_Derived_Virtual_Inherit------------------" << endl;
	cout << endl;
	cout << "address of  dvi :" << &ddv << endl;
	cout << "address of _vptr_Derived_Virtual_Inherit : " << (long*)(&ddv) << endl;
	cout << "_vptr_Derived_Virtual_Inherit : first function " << endl;
	typedef void(*Fun)(Derived_Diamond_Vertual*);
	Fun pFun = (Fun)*((long*)*(long*)(&ddv));
	pFun(&ddv);
	ddv.print();
	cout << endl;
	cout << "_vptr_Derived_Virtual_Inherit : second function " << endl;
	pFun = (Fun)*((long*)*(long*)(&ddv) + 1);
	pFun(&ddv);
	ddv.inherit_print();
	cout << endl;
	cout << "_vptr_Derived_Virtual_Inherit : fourth function:" << endl;
	pFun = (Fun)*((long*)*(long*)(&ddv) + 4);
	pFun(&ddv);
	ddv.Derived_Diamond_Vertual_Print();
	cout << endl;
	cout << "-------------------test_diamond_vitrual  _vptr_Derived_Virtual_Inherit_1------------------" << endl;
	cout << endl;
	cout << "_vptr_Derived_Virtual_Inherit_1 : first function " << endl;
	pFun = (Fun)*((long*)*((long*)(&ddv) + 2));
	pFun(&ddv);
	ddv.print();
	cout << endl;
	cout << "_vptr_Derived_Virtual_Inherit_1 : second function " << endl;
	pFun = (Fun)*((long*)*((long*)(&ddv) + 2) + 1);
	pFun(&ddv);
	ddv.inherit_print_1();
	cout << endl;

	cout << "-------------------test_diamond_vitrual  _vptr_base------------------" << endl;
	cout << endl;
	pFun = (Fun)*((long*)*((long*)(&ddv) + 4));
	pFun(&ddv);
	ddv.print();
	cout << endl;
}