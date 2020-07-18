#include <iostream>
#include <fstream>
#include <string>
using namespace std;
class Invalid_file{
    
};
void copy_with_whitespace(ifstream& ifs, ofstream& ofs){
    char c;
    while(ifs.get(c)) ofs.put(c);
}
void copy_without_whitespace(ifstream& ifs, ofstream& ofs){
    char c;
    while(ifs>>c) ofs<<c;
}

int main() {
    try{
        cout<<"PLease enter input file name: "<<endl;
        string infile;
        cin>>infile;
        ifstream ifs(infile);
        if(!ifs){
            cerr<<"Cannot write to "+infile<<endl;
            throw Invalid_file();
        }
        cout<<"PLease enter first output file name: "<<endl;
        string file1;
        cin>>file1;
        ofstream ofs(file1);
        if(!ofs){
            cerr<<"Cannot write to "+file1<<endl;
            throw Invalid_file();
        }

        cout<<"PLease enter first output file name:"<<endl;
        string file2;
        cin>>file2;
        ofstream ofs2(file2);
        if(!ofs2){
            cerr<<"Cannot write to "+file2<<endl;
            throw Invalid_file();
        }
        cout<<"Copying input file to output file preserving whitespace\n\n";
        copy_with_whitespace(ifs, ofs);

        ifs.close();
        ifs.open(infile);
        if (!ifs){
            cout<<"Cannot read from "+infile<<endl;
        }
        cout<<"copying input file to ouptut file without whitespace\n\n";
        copy_without_whitespace(ifs, ofs2);

        ifs.close();
        ofs.close();
        ofs2.close();
        return 0;
    }
    catch(Invalid_file) {
        return 1;
    }
}