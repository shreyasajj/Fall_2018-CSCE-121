#include <iostream>

int main(){
    int n=7;
    int iter=0;
    while(n>=0){
        int i=1/n;
        n=n-1;
        iter++;
    }

    std::cout<<iter<<std::endl;
}