#include <iostream>
#include <math.h>
#include <vector>

using namespace std;
int main() {
    //Q1
    int a=7;
    int* p1=&a;
    //Q2
    cout<<"The memory is "<<p1<<" and the value is "<<*p1<<endl;
    //Q3
    int* p2=new int[10];
    for(int i=0; i<10; i++){
        p2[i]=pow(2,i);
    }
    //Q4
    cout<<"The address of p2 is "<<p2<<" The value is ";
    for(int i=0; i<10; i++){
        cout<<p2[i]<<" ";
    }
    cout<<endl;
    //Q5
    int* p3=p2;
    //Q6
    p2=p1;
    //Q7
    p2=p3;
    //Q8
    cout<<"The address of p1 is "<<p1<<" and The value is "<<*p1<<endl;
    cout<<"The address of p2 is "<<p2<<" and The value is ";
    for(int i=0; i<10; i++){
        cout<<p2[i]<<" ";
    }
    cout<<endl;
    //Q9
    delete[]p2;
    //delete [] p1;
    //delete[] p3;

    //Q10
    p1=new int[10];
    for(int i=0; i<10; i++){
        p1[i]=pow(2,i);
    }
    //Q11
    p2=new int[10];
    //Q12
    for(int i =0; i<10;i++){
        p2[i]=p1[i];
    }
    cout<<"The address of p2 is "<<p2<<" and The value is ";
    for(int i=0; i<10; i++){
        cout<<p2[i]<<" ";
    }
    cout<<endl;
    //Q13-10
    vector<int> j={1,2,4,8,16,32,64,128,256,512};
    //Q13-11
     vector<int> r;
     //Q13-12
     r=j;



}

