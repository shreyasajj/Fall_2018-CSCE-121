#include <iostream>
#include <vector>
using namespace std;
int main() {
    vector<vector<int>> c;
    vector<int> q;
    q.push_back(1);
    c.push_back(q);
    cout<<c[0][0];

}
