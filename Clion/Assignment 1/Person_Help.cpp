/*//
// Created by shrey on 8/29/2018
#include <iostream>
#include <string>
#include <sstream>

using namespace std;

int main(){
    char user_Data_First_Name[100],user_Data_Last_Name[100], TA_First[100],TA_Last[100], PA1_First[100],PA1_Last[100], PA2_First[100],PA2_Last[100];
    int user_Data_Section;
    cout << "Enter your first and last name, and the section number:\n";
    cin >> user_Data_First_Name >> user_Data_Last_Name>>user_Data_Section;
    cout << "Who is your TA?\n";
    cin>> TA_First>>TA_Last;
    cout << "Who is your PA\n";
    cin >> PA1_First >> PA1_Last >> PA2_First >>PA2_Last;
    cout << user_Data_Last_Name << ", " << user_Data_First_Name << ": section " << user_Data_Section << endl;
    cout << "TA: " << TA_Last << ", " << TA_First << endl;
    cout << "PA: " << PA1_Last << ", " << PA1_First << endl;
    cout << "PA: " << PA2_Last << ", " << PA2_First << endl;


}*/

