#include <iostream>
using namespace std;
class B2{
public:
    virtual void pvf()=0;

};
class D21:public B2{
private:
    string hello="Hello";
public:
    void pvf()override {
        cout<<hello<<endl;
    }
};
class D22:public B2{
private:
    int i=2;
public:
    void pvf() override{
        cout<<i<<endl;
    }
};
void f(B2& b){
b.pvf();
}
int main(){
    D21 d21;
    f(d21);
    D22 d22;
    f(d22);
}

