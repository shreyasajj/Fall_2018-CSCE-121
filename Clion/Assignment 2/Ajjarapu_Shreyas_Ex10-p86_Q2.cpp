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
//Part E
    double val3, val4;
    char operator1[100];
    double total;
    cout<<"\nPart E\nPlease type 1 operator followed by 2 doubles"<<endl;
    cin>>operator1>>val3>>val4;
    if(operator1[0]=='+'){
        total=val3+val4;
        cout<<"The value of "<<fixed<<setprecision(2)<<val3 <<"+"<<fixed<<setprecision(2)<<val4<<"="<<fixed<<setprecision(2)<<total<<endl;
    }else if(operator1[0]=='-'){
        total=val3-val4;
        cout<<"The value of "<<fixed<<setprecision(2)<<val3 <<"-"<<fixed<<setprecision(2)<<val4<<"="<<fixed<<setprecision(2)<<total<<endl;
    }else if(operator1[0]=='*'){
        total=val3*val4;
        cout<<"The value of "<<fixed<<setprecision(2)<<val3 <<"*"<<fixed<<setprecision(2)<<val4<<"="<<fixed<<setprecision(2)<<total<<endl;
    }else if(operator1[0]=='/'){
        total=val3/val4;
        cout<<"The value of "<<fixed<<setprecision(2)<<val3 <<"/"<<fixed<<setprecision(2)<<val4<<"="<<fixed<<setprecision(2)<<total<<endl;
    }else{
        cout<<"invalid operator"<<endl;
    }



}