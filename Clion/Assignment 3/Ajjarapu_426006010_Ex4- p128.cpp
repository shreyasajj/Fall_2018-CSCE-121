/*#include <iostream>
#include <vector>
#include <limits>
using namespace std;
int main(){
    vector<int> values;
    for(int i =1 ; i<=100;i++)
        values.push_back(i);
    while(values.size()!=1){
        string input;
        int half=values.size()/2;
        cout<<"The size is "<<values.size()<<endl;
        cout<<"Is your number less than or equal to "<<values[half-1]<<endl;
        getline(cin, input);
        if(input=="Yes"||input=="yes")
            values.erase(values.begin()+half,values.begin()+values.size());
        else if(input=="No"||input=="no")
            values.erase(values.begin(),values.begin()+half);
        else
            cout<<"Invalid input"<<endl;

    }
    cout<<"Your number is "<<values[0]<<endl;

}*/
