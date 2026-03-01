#include <iostream>
#include <cmath>

int main(){

    using std::cout;
    using std::cin;
    using std::endl;

    char sign;
    double number1;
    double number2;
    double results;
    
    cout << "++++++++++Console calculator+++++++++++" << endl;

    cout << "Enter the first number" << endl;
    cin >> number1;
    cout << "Enter the operation sign(either +,-,/,*\t)";
    cout << endl;
    cin >> sign;
    cout << "Enter the second number" << endl;
    cin >> number2;
    
    switch(sign){
        case '+':
            results = number1 + number2; 
            cout << endl;
            cout << results << endl;
        break;
        case '-':
            results = number1 - number2; 
            cout << endl;
            cout << results << endl;
        break;
        case '/':
            results = number1 / number2; 
            cout << endl;
            cout << results << endl;
        break;
        case '*':
            results = number1 * number2; 
            cout << endl;
            cout << results << endl;
        break;
        default:
            cout << "Please enter a valid input" << endl;
    }

    
    return 0;
}