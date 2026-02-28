#include <iostream>
#include <ctime>


int main(){

    using std::cout;
    using std::cin;
    using std::endl;

    srand(time(0));
    int randNum = rand() % 5+ 1;

    switch(randNum){
        case 1: cout << "You win a rang rover\n";
            break;
        case 2: cout << "You win a bugatti\n";
            break;
        case 3: cout << "You win a pagani\n";
            break;
        case 4: cout << "You win a lotus\n";
            break;
        case 5: cout << "You win corrola\n";
            break;
    }

}
