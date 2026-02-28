#include <iostream>
#include <cmath>

// Concept Change: Using a function to separate logic from UI
double calculate(double n1, double n2, char op) {
    switch(op) {
        case '+': return n1 + n2;
        case '-': return n1 - n2;
        case '*': return n1 * n2;
        case '/': 
            if (n2 == 0) {
                std::cout << "Error: Division by zero! ";
                return 0;
            }
            return n1 / n2;
        default:
            std::cout << "Invalid Operator! ";
            return 0;
    }
}

int main() {
    using std::cout;
    using std::cin;
    using std::endl;

    double number1, number2;
    char sign;

    cout << "========= Smart Calculator =========" << endl;

    cout << "Enter first number: ";
    if (!(cin >> number1)) return 1; // Basic error handling if user enters text

    cout << "Enter operator (+, -, *, /): ";
    cin >> sign;

    cout << "Enter second number: ";
    if (!(cin >> number2)) return 1;

    // Execute the logic
    double result = calculate(number1, number2, sign);

    cout << "------------------------------------" << endl;
    cout << "Result: " << result << endl;
    cout << "====================================" << endl;

    return 0;
}