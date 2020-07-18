#include <iostream>
#include <vector>
using namespace std;
class Empty{
};
class Invalid_Input{};
class Name_pair{
private:
    vector<string> name;
    vector<double> age;
public:
    void read_names();
    void read_ages();
    void print();
    void sort();
    vector<string> getName();
    vector<double> getAge();


};
vector<string> Name_pair::getName() {
    return name;
}
vector<double> Name_pair::getAge() {
    return age;
}
bool operator==( Name_pair& a,  Name_pair& b){
    if(a.getName()==b.getName() && a.getAge()==b.getAge()){
        return true;
    }
    return false;
}
bool operator!=( Name_pair& a, Name_pair& b){
    if(a.getName()==b.getName() && a.getAge()==b.getAge()){
        return false;
    }
    return true;
}

ostream& operator<<(ostream& os,  Name_pair& n){
    n.print();
}


void Name_pair::read_names() {
    int people;
    cout<<"How many people do you have"<<endl;
    while(true){
        try{
            cin>>people;
            if(cin.fail())
                throw Invalid_Input();
            cin.ignore(100000, '\n');
            break;
        }catch(...){
           cerr<<"Invalid Input try again"<<endl;
           cin.clear();
           cin.ignore(10000, '\n');
        }
    }
    cout<<"Please type each name in format \"LastName,FirstName\""<<endl;
    for(int i=0; i<people; i++ ) {
        try {
            string s;
            getline(cin, s);

            if (cin.fail()) {
                cin.clear();
                cin.ignore(100000, '\n');
                i--;
                continue;
            }
            if (s.size() == 0)
                throw Empty();
            name.push_back(s);
        }catch(Empty){
            cerr<<"The String is empty, Try Again"<<endl;
            i--;
        }
    }

}
void Name_pair::read_ages() {
    cout<<"Type all ages of each person listed"<<endl;
    for(string s : name){
        while(true) {
            try {
                double ageVal;
                cout<<s<<": ";
                cin>>ageVal;
                if(cin.fail())
                    throw Invalid_Input();
                cin.ignore(10000, '\n');
                age.push_back(ageVal);
                break;
            }catch(...){
                cerr<<"Invalid input try again"<<endl;
                cin.clear();
                cin.ignore(10000, '\n');
            }
        }
    }
}
void Name_pair::print() {
    cout<<"\nThe Array Sorted is with ages is"<<endl;
    for(int i =0; i<name.size(); i++){
        cout<<name[i]<<" age:"<<age[i]<<endl;
    }
}
void Name_pair::sort() {
    for(int i=0; i<name.size()-1; i++){
        for(int ii=0; ii<name.size()-1; ii++){
            int chart=0;
            while(true){
                if(name[ii].at(chart)!=name[ii+1].at(chart))
                    break;
                else
                    chart++;
                if(chart==name[ii].size() || name[ii].at(chart)==',' || name[ii+1].at(chart)==',')
                    break;
            }
            if(name[ii].at(chart)>name[ii+1].at(chart)) {
                swap(name[ii], name[ii + 1]);
                swap(age[ii], age[ii + 1]);
            }
        }
    }
}
int main() {
    Name_pair q;
    q.read_names();
    q.read_ages();
    q.sort();
    q.print();

    cout << q;
    cout << (q==q) << endl;
    cout << (q!=q) << endl;
}