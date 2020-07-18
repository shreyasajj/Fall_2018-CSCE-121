//
// Created by shrey on 9/12/2018.
//
#include <iostream>
#include <string>
#include <iomanip>
#include <sstream>
#include <vector>
#include <algorithm>
#include <stdio.h>
#include <ctype.h>
#include <cmath>
using namespace std;
int main(){
//Part C
    int intEven;
    cout<<"\nPart C\nPlease type 1 int to check if even or odd"<<endl;
    cin>>intEven;
    if(intEven%2==0){
        cout<<"The value "<<intEven<<" is even"<<endl;

    }else{
        cout<<"The value "<<intEven<<" is odd"<<endl;
    }
}