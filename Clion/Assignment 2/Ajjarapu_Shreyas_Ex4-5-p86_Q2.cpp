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
    //Part a
    cout<<"Part a"<<endl;
    int val1, val2;
    cout<<"Please type 2 int numbers"<<endl;
    cin >> val1 >> val2;

    if(val1<val2)
        cout<<"The smallest number "<<val1<<" and the largest number is "<<val2<<endl;
    else if(val1>val2)
        cout<<"The smallest number "<<fixed<<setprecision(4)<<val2<<" and the largest number is "<<fixed<<setprecision(4)<<val1<<endl;
    else
        cout<<"They have the same value"<<endl;
    cout<<"The sum is "<<fixed<<setprecision(4)<<val1+val2<<endl;
    cout<<"The difference is "<<fixed<<setprecision(4)<<abs(val1-val2)<<endl;
    cout<<"The product is "<<fixed<<setprecision(4)<<val1*val2<<endl;
    cout<<"The ratio (1st number/2nd number) is "<<fixed<<setprecision(2)<<val1/val2<<endl;

    double val3, val4;
    cout<<"Please type 2 floating-point numbers"<<endl;
    cin >> val3 >> val4;

    if(val3<val4)
        cout<<"The smallest number "<<val3<<" and the largest number is "<<val4<<endl;
    else if(val3>val4)
        cout<<"The smallest number "<<fixed<<setprecision(4)<<val4<<" and the largest number is "<<fixed<<setprecision(4)<<val3<<endl;
    else
        cout<<"They have the same value"<<endl;
    cout<<"The sum is "<<fixed<<setprecision(4)<<val3+val4<<endl;
    cout<<"The difference is "<<fixed<<setprecision(4)<<abs(val3-val4)<<endl;
    cout<<"The product is "<<fixed<<setprecision(4)<<val3*val4<<endl;
    cout<<"The ratio (1st number/2nd number) is "<<fixed<<setprecision(2)<<val3/val4<<endl;
}