#include <iostream>
#include <string>

int main(){

    using std::cout;
    using std::cin;
    using std::endl;
    using std::string;

    //This is a simple calculator that potrals my current ability and understandind in c++

    //Home page
    string user_id;
    int passwrd = 12345;

    cout << "                                   Welcome to PSALM BasiCalc" << endl;
    cout << "Please enter your user name:   "; 
    //std::getline(cin >> std::ws, user_id);
    cin >> user_id; 
    cout << endl;
    cout << "Type 1 in the password section to sign up if you have no account." << endl;
    cout << endl;
    cout << "Enter your password here \t"; cin >> passwrd;

    if(passwrd = 12345){
    cout << endl;
    cout << endl;
    cout << "                                   PSALM BasiCalc" << endl;
    cout << endl;
    cout << endl;

    cout << "Supported operaters: + - * /" << endl;
    cout << "THis calculator can only support upto 3 characters" << endl;

    char opt; double result;
    double num1; double num2; double num3;

    cout << endl;
    cout << endl;

    cout << "Enter the first number: \t" << endl;
    cin >> num1;

    cout << "Enter the Arithmetic operator \t" << endl;
    cin >> opt;

    cout << "Enter the second number:" << endl;
    cin >> num2;


    switch(opt){
        case '+': 
                  result = num1 + num2;
                break;
        case '-': 
                   result = num1 - num2;
                break;
         case '*': 
                  result = num1 * num2;
                break;
        case '/': 
                   result = num1 / num2;
                break;
        default: 
                    cout << "Enter valid input" << endl;
    };

            
    }
    else if( passwrd = 1){
    cout << "                                   PSALM BasiCalc" << endl;
    cout << "Please enter your user name:   "; 
    //std::getline(cin >> std::ws, user_id);
    cin >> user_id; 
    cout << endl;
    cout << "Enter your password here \t"; cin >> passwrd;

     cout << "                                   PSALM BasiCalc" << endl;
    cout << endl;
    cout << endl;

    cout << "Supported operaters: + - * /" << endl;
    cout << "THis calculator can only support upto 3 characters" << endl;

    char opt; double result;
    double num1; double num2; double num3;

    cout << endl;
    cout << endl;

    cout << "Enter the first number: \t" << endl;
    cin >> num1;

    cout << "Enter the Arithmetic operator \t" << endl;
    cin >> opt;

    cout << "Enter the second number:" << endl;
    cin >> num2;


    switch(opt){
        case '+': 
                  result = num1 + num2;
                break;
        case '-': 
                   result = num1 - num2;
                break;
         case '*': 
                  result = num1 * num2;
                break;
        case '/': 
                   result = num1 / num2;
                break;
        default: 
                    cout << "Enter valid input" << endl;
    };



    }
    else{
        cout << "Please enter a valid password";

    }


    return 0;
}