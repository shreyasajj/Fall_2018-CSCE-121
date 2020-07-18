/*#include <iostream>
#include <vector>
using namespace std;
//Q4
ostream& print_array10(ostream& os, int* a){
    for(int i=0; i<10; i++){
        os<<a[i]<< " ";
    }
    os<<endl;
    return os;
}
ostream& print_vector(ostream& os, vector<int> a){
    for(int i=0; i<a.size(); i++){
        os<<a[i]<< " ";
    }
    os<<endl;
    return os;
}
//Q7
ostream& print_array(ostream& os, int* a, int n){
    for(int i=0; i<n; i++){
        os<<a[i]<< " ";
    }
    os<<endl;
    return os;

}
int main() {
    //Q1
    int* a = new int[10];
    //Q2
    for(int i=0; i<10; i++){
        cout<<a[i]<< " ";
    }
    cout<<endl;
    //Q3
    delete[] a;
    //Q5
    int* q=new int[10];
    for(int i=0; i<10;i++){
        q[i]=100+i;
    }
    print_array10(cout,q);
    //Q9
    delete [] q;
    //Q6
    int* g=new int[11];
    for(int i=0; i<11;i++){
        g[i]=100+i;
    }
    print_array10(cout,g);
    //Q9
    delete [] g;
    //Q8
    int* r=new int[20];
    for(int i=0; i<20;i++){
        r[i]=100+i;
    }
    print_array(cout,r,20);
    //Q9
    delete [] r;
    //Q10-5
    vector<int> y;
    for(int i=0; i<10; i++){
        y.push_back(100+i);
    }
    print_vector(cout,y);
    //Q10-6
    vector<int> t;
    for(int i=0; i<11; i++){
        t.push_back(100+i);
    }
    print_vector(cout,t);
    //Q10-8
    vector<int> u;
    for(int i=0; i<20; i++){
        u.push_back(100+i);
    }
    print_vector(cout,u);

}*/
