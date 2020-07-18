/*#include <iostream>
#include<cmath>
#include <vector>
#include <iomanip>
using namespace std;

void myVector(double,double, double);
int main(){
    double a;
    double b;
    double c;
    while(true) {
        cout<<"Input value of a"<<endl;
        cin >> a;
        if (cin.fail()) {
            cin.clear();
            cin.ignore(10000, '\n');
            cout << "Invalid Input" << endl;
        }else
            break;

    }
    while(true) {
        cout<<"Input value of b"<<endl;
        cin >> b;
        if (cin.fail()) {
            cin.clear();
            cin.ignore(10000, '\n');
            cout << "Invalid Input" << endl;
        }else
            break;

    }
    while(true) {
        cout<<"Input value of c"<<endl;
        cin >> c;
        if (cin.fail()) {
            cin.clear();
            cin.ignore(10000, '\n');
            cout << "Invalid Input" << endl;
        }else
            break;

    }
    myVector(a, b, c);

}

void myVector(double a, double b,double c){

    if(a!=0) {
        double discriminant = pow(b, 2) - (4 * a * c);
        if (discriminant < 0) {
            cout << "Complex solution " << fixed<<setprecision(3)<<((-b)/(2*a))<<"+sqrt("<<fixed<<setprecision(4)<<-discriminant<<")i"<<endl;
            cout << "Complex solution" << fixed<<setprecision(3)<<((-b)/(2*a))<<"-sqrt("<<fixed<<setprecision(4)<<-discriminant<<")i"<<endl;
        } else if (discriminant == 0) {
            double root = (-b) / (2 * a);
            cout << "The solution is " << fixed << setprecision(4) << root<<endl;

        } else {
            double root1 = ((-b) + sqrt(discriminant)) / (2 * a);
            double root2 = ((-b) - sqrt(discriminant)) / (2 * a);
            cout<<"The solution is "<<fixed<<setprecision(4)<<root1<<" and "<<fixed<<setprecision(4)<<root2<<endl;

        }
        return;
    }
    if(b!=0){
        cout<<"The solution is "<<fixed<<setprecision(4)<<(-c)/b<<endl;
        return;
    }
    if(c!=0){
        cout<<"No Solution"<<endl;
    }else{
        cout<<"Infinite number of roots"<<endl;
    }

}*/