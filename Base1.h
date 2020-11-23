#ifndef BASE1_H_
#define BASE1_H_

#include<iostream>

using namespace std;

class Base_1{
    public:
        Base_1(int);
        Base_1();
        int getIBase() const;
        static int instanceCount();
        virtual void print(void) const;
        virtual ~Base_1();
    // protected:
        int iBase_1;
        static int count_1;
};

#endif