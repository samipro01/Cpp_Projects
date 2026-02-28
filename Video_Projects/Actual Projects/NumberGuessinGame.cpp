#include <iostream>


int main(){

    using std::cout;
    using std::cin;
    using std::endl;

    int num;
    int guess;
    int tries;

    srand(time(NULL));
    num = (rand() % 100) + 1;

    cout << "****** Number Guessing Game ******\n";
    do{
        cout << "Enter a guess between(1-100): ";
        cin >> guess;
        tries++;

        if(guess > num){
            cout << "Too high!\n";
        }
        else if(guess < num){
            cout << "Too low!\n";
        }
        else{
            cout << "CORRECT! # of tries\n";
        }
    }while(guess != num);

    cout << "************************\n";

    return 0;
}