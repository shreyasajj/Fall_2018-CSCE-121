/*#include <iostream>
#include <string>

using namespace std;
inline void simple_error(string s)	// write ``error: s’’ and exit program
{
    cerr << "error: " << s << '\n';
    	// for some Windows environments

}
int main(){
    char first_Name[100], last_Name[100], friends_first_Name[100], friends_last_Name[100], other_friend_first[100],other_friend_last[100];
    cout<<"Whats your name"<<endl;
    cin >>first_Name>>last_Name;
    cout <<"Hello "<<first_Name<<endl;
    cout <<"Enter the name of the person you want to write to"<<endl;
    cin >> friends_first_Name >> friends_last_Name;
    bool error=true;
    char friends_Sex=0;
    while(error) {
        cout << "Is your friend a male(m) or female(f)"<<endl;
        cin >> friends_Sex;
        if (friends_Sex == 'm' || friends_Sex == 'f') {
            error = false;
        } else {
            cout << "Pls type m or f"<<endl;
        }
    }

    int age = 0;
    error = true;
    while (error) {
        cout << "Tell me the age of the person" << endl;
        cin >> age;
        if (age>0 && age<110){
            error=false;
        }else{
            simple_error("you're kidding!");
        }
    }
    cout<<"Whats your other friends name"<<endl;
    cin>> other_friend_first>> other_friend_last;

    cout <<"\nDear "<<friends_first_Name<<","<<endl;
    cout<<"How are you? I am fine. I miss you. You were a boss the way you bowled at the bowling ally.\nAnd the way you played basketball "<<endl;
    if(friends_Sex=='m'){
        cout<<"If you see "<<other_friend_first<<" "<<other_friend_last <<" please ask him to call me."<<endl;
    }else{
        cout<<"If you see "<<other_friend_first<<" "<<other_friend_last <<" please ask her to call me."<<endl;
    }
    cout<<"I hear you just had a birthday and you are "<<age<<" years old."<<endl;
    if(age<12){
        cout<<"Next year you will be "<<age+1<<"."<<endl;

    }else if(age == 17){
        cout<<"Next year you will be able to vote."<<endl;
    }else if(age > 70){
        cout<<"I hope you are enjoying retirement."<<endl;
    }
    cout<<"Yours sincerely,\n\n"<<first_Name<<" "<<last_Name<<endl;
}*/

