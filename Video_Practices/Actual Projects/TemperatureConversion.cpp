#include <iostream>

int main(){

    using std::cout;
    using std::cin;
    using std::endl;

    double temp;
    int unit;

    cout << "++++++++Temperature Conversion+++++++\n";
    cout << "Please choose from the options below:\n";
    cout << "1. Celsius to fahrenheit\n";
    cout << "2. Fahrenheit to Celsius\n";
    cin >> unit;

    if (unit == 1){
        cout << "Enter the temperature in celsius\n";
        cin >> temp;


        temp = (1.8*temp)+32;
        cout << "The temperature is " << temp << endl;
    }
    else if(unit == 2){
     cout << "Enter the temperature in fahrenheit\n";
        cin >> temp;


        temp=(temp-32)/1.8;
        cout << "The temperature is " << temp << endl;   
    }
    else {
        cout << "please enter the right option(either 1 or 2)\n2";
    }
    return 0;
}