#include <iostream>
using namespace std;
class B1{
public:
    virtual void vf(){
        cout<<"I am B1 VF"<<endl;
    }
    void f(){
        cout<<"I am B1 F"<<endl;
    }
    virtual void pvf()=0;
};
class D1:public B1{
public:
     void f(){
        cout<<"I am D1 vf"<<endl;
    }

};
class D2:public D1{
public:
    void pvf() override {
        cout<<"I am D2 pvf"<<endl;
    }

};
int main() {
    //Q4 :It seems the normal function when activated will cover up the function not replace it so pointers will not be changed
   /* B1 b;
    b.vf();
    b.f();
    D1 d;
    d.vf();
    d.f();
    B1& b2=d;
    b2.vf();
    b2.f();
    //Q5: B1 and D1 became an abstract class because it doesnt define pvf. It need to be overriden.
    B1 b;
    b.vf();
    b.f();
    D1 d;
    d.vf();
    d.f();
    B1& b2=d;
    b2.vf();
    b2.f();*/
    //Q6: It get the function that overriden and contains all the function above it.
    D2 d2;
    d2.pvf();
    d2.vf();
    d2.f();
}
