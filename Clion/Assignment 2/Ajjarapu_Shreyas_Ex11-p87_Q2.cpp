//
// Created by shrey on 9/12/2018.
//
//Part F
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
    int pennies;
    int nickles;
    int dimes;
    int quarters;
    int halfdollars;
    int dollars;
    cout<<"Part E\nPlease type how many pennie(s) you have"<<endl;
    cin>>pennies;
    cout<<"Please type how many nickle(s) you have"<<endl;
    cin>>nickles;
    cout<<"Please type how many dime(s) you have"<<endl;
    cin>>dimes;
    cout<<"Please type how many quarter(s) you have"<<endl;
    cin>>quarters;
    cout<<"Please type how many halfdollar(s) you have"<<endl;
    cin>>halfdollars;
    cout<<"Please type how many dollar(s) you have"<<endl;
    cin>>dollars;
    cout<<"You have "<<pennies;
    if(pennies<2)
        cout<<" penny"<<endl;
    else
        cout<<" pennies"<<endl;
    cout<<"You have "<<nickles;
    if(nickles<2)
        cout<<" nickle"<<endl;
    else
        cout<<" nickles"<<endl;
    cout<<"You have "<<quarters;
    if(quarters<2)
        cout<<" quarter"<<endl;
    else
        cout<<" quarters"<<endl;
    cout<<"You have "<<dimes;
    if(dimes<2)
        cout<<" dime"<<endl;
    else
        cout<<" dimes"<<endl;
    cout<<"You have "<<halfdollars;
    if(halfdollars<2)
        cout<<" half-dollar"<<endl;
    else
        cout<<" half-dollars"<<endl;
    cout<<"You have "<<dollars;
    if(dollars<2)
        cout<<" dollar"<<endl;
    else
        cout<<" dollars"<<endl;
    cout<<"The total amount is $"<<(double)(pennies*1+nickles*5+dimes*10+quarters*25+halfdollars*50+dollars*100)/100<<endl;
        
    


}
