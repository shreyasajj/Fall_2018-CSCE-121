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
};
class D1:public B1{
public:
    void vf(){
        cout<<"I am D1 Vf"<<endl;
    }
};
int main() {
    B1 b;
    b.vf();
    b.f();
    D1 d;
    d.vf();
    d.f();
    B1& b2=d;
    b2.vf();
    b2.f();

}