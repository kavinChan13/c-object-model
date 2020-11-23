
#ifndef BASE_H_
#define BASE_H_

#include<iostream>

using namespace std;

class Base{
    public:
        Base(int);
        Base();
        int getIBase() const;
        static int instanceCount();
        virtual void print(void) const;
        virtual ~Base();
    // protected:
        int iBase;
        static int count;
};

#endif
