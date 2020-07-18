/*#include <iostream>

struct pair {
    int first , second ;
};
pair make_pair (int x , int y )
{
    pair p;
    p.first=x;
    p.second=y;
    return p;
}
pair Fibonacci(int k){
    if(k<=1){
        return make_pair(k,0);

    }else{
        pair r=Fibonacci(k-1);
        return make_pair(r.first+r.second,r.first);
    }
}


int main(){
    int p=-1;
    while(p<=-1) {

        std::cout << "Please type a positive integer number " << std::endl;

        std::cin >> p;

        if (std::cin.fail()) {
           std::cin.clear();
            std::cin.ignore(10000, '\n');
            std::cout << "Invalid Input" << std::endl;
        }
        if (p <= -1) {
            std::cout << "Please type a number greater or equal to 0 " << std::endl;
        }
    }
    pair g;
    g= Fibonacci(p);
    std::cout<<"The fibonacci number is "<<g.first<<std::endl;



}*/

