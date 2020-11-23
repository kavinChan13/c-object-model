
#include<iostream>
using namespace std;
class A{
    void fun(){}
};
class B{
    int a;
};
class C{
    int a;
    void fun(){}
};
class D{
    int a;
    void fun1(){}
    void fun2(){}
};
class E{
    int a;
    int b;
    void fun();
};
class F{
    int a;
    int b;
    static int c;
    void fun();
};
class G{
    int a;
    virtual void fun(){}
};
class H{
    int a;
    int b;
    virtual void fun(){}
};

int main(){
    cout<<"size of A : "<<sizeof(A)<<endl;
    cout<<"size of B : "<<sizeof(B)<<endl;
    cout<<"size of C : "<<sizeof(C)<<endl;
    cout<<"size of D : "<<sizeof(D)<<endl;
    cout<<"size of E : "<<sizeof(E)<<endl;
    cout<<"size of F : "<<sizeof(F)<<endl;
    cout<<"size of G : "<<sizeof(G)<<endl;
    cout<<"size of H : "<<sizeof(H)<<endl;
}