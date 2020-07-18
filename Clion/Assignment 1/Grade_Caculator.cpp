//
// Created by shrey on 9/3/2018.
//
#include <string>
#include <iostream>
#include <iomanip>
using namespace std;
int main() {
    int quiz1, quiz2, quiz3;
    cout << "Input Grades for quizzes:\n";
    cin >> quiz1 >> quiz2 >> quiz3;
    int exam1, exam2;
    cout << "Enter points for 2 exams:\n";
    cin >>exam1>>exam2;
    cout << "Enter points for 4 assignment\n";
    int assign1, assign2, assign3,assign4;
    cin>>assign1>>assign2>>assign3>>assign4;
    double quizzes, exams,assigns,total;
    quizzes=(((double)quiz1+(double)quiz2+(double)quiz3)/30)*12;
    exams=(((double)exam1+(double)exam2)/200)*60;
    assigns=(((double)assign1+(double)assign2+(double)assign3+(double)assign4)/400)*28;
    total=quizzes+exams+assigns;

    cout<<"Your total score is "<<fixed<<setprecision(2)<<total<<"%"<<endl;


}

