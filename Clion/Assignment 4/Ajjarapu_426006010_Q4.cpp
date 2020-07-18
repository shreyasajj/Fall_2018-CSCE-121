#include <vector>
#include <iostream>
using namespace std;
//part a;
vector<int> vectorreversed(vector<int> j){
    vector<int> q;
    for(int i=j.size()-1; i>=0;i--){
        q.push_back(j[i]);
    }
    return q;
}
void recurively(vector<int>& i, int p, int q){
    if(p<=q) return;
    int temp = i[q];
    i[q]=i[p];
    i[p]=temp;
    return recurively(i, p-1, q+1);
}
int main(){
    vector<int> q;
    for (int i =0; i<5; i++)
        q.push_back(i);
    vector<int> r= vectorreversed(q);
    cout<<"The vectors are first vector is ";
    for(int i=0; i<q.size(); ++i)
        cout << q[i] << " ";
    cout<<"\nThe second vector ";
    for(int i=0; i<r.size(); ++i)
        cout << r[i] << " ";
    cout<<endl;
    recurively(q, q.size()-1,0);
    cout<<"The vector are for recursive vector is ";
    for(int i=0; i<q.size(); ++i)
        cout << q[i] << " ";

    cout<<endl;
}


