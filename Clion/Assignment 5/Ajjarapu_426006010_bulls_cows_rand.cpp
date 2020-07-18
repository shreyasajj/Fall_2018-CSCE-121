/*#include <iostream>
#include <vector>
#include <algorithm>
#include <cstdlib>
#include <string>
#include <ctime>

using namespace std;
class Invalid_input{};
class Invalid_number_of_digits{};
class Duplicated_digits{};
int main() {
    while(true) {
        srand(time(0));
        vector<int> intial;
        intial.push_back(rand() % 9 + 1);
        for (int i = 1; i < 5; i++) {
            int value = -1;
            while (value == -1 || find(intial.begin(), intial.end(), value) != intial.end()) {
                srand(time(0));
                value = rand() % 10;
            }

            intial.push_back(value);
        }



        int tries = 0;
        while (true) {
            try {
                cout << "Please guess a 5 digit number \nPlease type only the letter 'A' to see the intial number"
                     << endl;
                vector<int> guess;
                string temp;

                getline(cin, temp);

                if (cin.fail()) {
                    cin.clear();
                    cin.ignore(10000, '\n');
                    throw Invalid_input();
                }

                if (temp.size() == 1 && temp.at(0) == 'A') {
                    cout << "The number is ";
                    for (int i = 0; i < intial.size(); i++) {
                        cout << intial[i];
                    }
                    cout << endl;
                    continue;
                }
                for (int i = 0; i < temp.size(); i++) {
                    if (!isdigit(temp.at(i))) {
                        throw Invalid_input();
                    } else {
                        guess.push_back(temp.at(i) - 48);
                    }
                }


                if (guess.size() != intial.size())
                    throw Invalid_number_of_digits();
                vector<bool> check;
                for (int i = 0; i < 11; i++)
                    check.push_back(false);

                for (int i = 0; i < guess.size(); i++) {
                    if (check[guess[i]])
                        throw Duplicated_digits();
                    else
                        check[guess[i]] = true;
                }
                int bull = 0;
                int cow = 0;
                for (int i = 0; i < guess.size(); i++) {
                    if (find(intial.begin(), intial.end(), guess[i]) != intial.end()) {
                        if (guess[i] == intial[i]) {
                            bull++;
                        } else {
                            cow++;
                        }
                    }
                }
                tries++;
                if (bull == 5)
                    break;
                cout << cow << " cow(s) " << bull << " bull(s)" << endl;

            } catch (Invalid_number_of_digits e1) {
                cerr << "Please guess 5 numbers " << endl;
            } catch (Duplicated_digits e2) {
                cerr << "Please make sure all value you typed are unique" << endl;
            } catch (...) {
                cerr << "Invalid input" << endl;
            }
        }
        cout << "You got the right answer. It took you " << tries << " tries" << endl;
        int p=-1;
        while(p==-1){
            cout<<"Want to play again Y/N"<<endl;
            string s;
            getline(cin, s);
            if(s.at(0)==89 || s.at(0)==121){
                p=1;
            }else if(s.at(0)==78 || s.at(0)==110){
                p=2;
            }else{
                cout<<"Please write a Y or N"<<endl;

            }

        }
        if(p==2){
            break;
        }

    }
}*/