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
void sortNumber(int& i, int& j, int& k) {
    if(i>j)
        swap(i,j);
    if(j>k)
        swap(j,k);
    if(i>j)
        swap(i,j);
}
int main(){
//part b
    cout<<"\nPart b "<<endl;
    int number1, number2, number3;
    cout<<"Please type 3 number"<<endl;

    cin>>number1>>number2>>number3;
    sortNumber(number1,number2,number3);
    cout<<"The number ordered is "<<number1<<", "<<number2<<", "<<number3<<endl;

    cout<<endl;
    char cha1[100],cha2[100],cha3[100];

    cout<<"Please type in 3 strings"<<endl;
    cin>>cha1>>cha2>>cha3;
    for (int i = 0; i <100; i++)
        if(cha1[i]==000)
            break;
        else if ((int) cha1[i] > (int) cha2[i]) {
            swap(cha1, cha2);
            break;
        }

    for (int i = 0; i <100; i++)
        if(cha1[i]==000)
            break;
        else if ((int) cha2[i] > (int) cha3[i]) {
            swap(cha2, cha3);
            break;
        }

    for (int i = 0; i <100; i++)
        if(cha1[i]==000)
            break;
        else if ((int) cha1[i] > (int) cha2[i]) {
            swap(cha1, cha2);
            break;
        }

    cout<<"The string ordered is "<<cha1<<", "<<cha2<<", "<<cha3<<endl;

}