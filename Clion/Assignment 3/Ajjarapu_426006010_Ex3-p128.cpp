/*#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
int main() {
    cout<<"Please type distances and type end when finished"<<endl;
    vector<double> temps;                  // temperatures
    for (double temp; cin >> temp;)    // read into temp
        temps.push_back(temp);
    double total;
    double min=temps[0];
    double max=temps[0];
    for (double temp:temps) {
        total += temp;
        if(temp<min)
            min=temp;
        else if(temp>max)
            max=temp;
    }
    cout<<"The total distance is "<<total<<endl;
    cout<<"The minimum distance is "<<min<<endl;
    cout<<"The maximum distance is "<<max<<endl;
    cout<<"The mean of the distances is "<<total/temps.size()<<endl;



}*/
