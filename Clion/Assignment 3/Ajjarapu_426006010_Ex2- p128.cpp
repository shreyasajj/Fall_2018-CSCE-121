#include <iostream>
#include <vector>
#include <algorithm>
#include <cmath>
using namespace std;
int main() {
    vector<double> temps;// temperatures
   cout<<"Please type values and type end when finished"<<endl;
    for (double temp; cin>>temp; )    // read into temp
        temps.push_back(temp);

    // compute mean temperature:
    cout<<"The sum is "<<sum(temps)<<endl;
    double sum1 = 0;
    for (double x : temps) sum1 += x;
    cout << "Average temperature: " << sum1/temps.size() << '\n';

    // compute median temperature:
    sort(temps.begin(),temps.end());                                     // sort temperatures
    if(temps.size()%2==1)
        cout << "Median temperature: " << temps[temps.size()/2] << '\n';
    else
        cout << "Median temperature: " << (temps[temps.size()/2]+temps[(temps.size()/2)-1])/2 << '\n';
}