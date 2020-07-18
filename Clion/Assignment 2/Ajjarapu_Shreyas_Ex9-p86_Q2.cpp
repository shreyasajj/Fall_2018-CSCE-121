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
    char cha4[100];
    cout<<"\nPart D\nPlease type a string of number"<<endl;
    cin>>cha4;
    if(cha4[0]=='z' && cha4[1]=='e'&& cha4[2]=='r' && cha4[3]=='o')
        cout<<"The number is 0"<<endl;
    else if(cha4[0]=='o' && cha4[1]=='n' && cha4[2]=='e')
        cout<<"The number is 1"<<endl;
    else if(cha4[0]=='t' && cha4[1]=='w' && cha4[2]=='o')
        cout<<"The number is 2"<<endl;
    else if(cha4[0]=='t' && cha4[1]=='h' && cha4[2]=='r' && cha4[3]=='e' && cha4[4]=='e')
        cout<<"The number is 3"<<endl;
    else if(cha4[0]=='f' && cha4[1]=='o' && cha4[2]=='u' && cha4[3]=='r')
        cout<<"The number is 4"<<endl;
    else
        cout<<"not a number I know"<<endl;
}