#include <iostream>

void to_lower(char* s){
   int count=0;
    while(s[count]!=0){
        if(65<=s[count] && s[count]<=90){
            s[count]=s[count]+32;
        }
        count++;
    }
}
int main(){
    char* q=new char[3];
    q[0]='G';
    q[1]='B';
    q[2]=0;
    to_lower(q);
    std::cout<<q[0]<<q[1]<<q[2]<<std::endl;
}

