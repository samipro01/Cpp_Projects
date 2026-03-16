#include <iostream>
#include <cmath>

int main(){

    using std::cout;
    using std::cin;
    using std::endl;

    double a;
    double b;
    double results;

    cout << "*********Hypotenuse calculator************\n";

    cout << "Enter side A" << endl;
    cin >> a;

    cout << "Enter side B" << endl;
    cin >> b;

    results = sqrt(pow(a, 2) + pow(b,2));
    cout << results;
    cout << endl;




    

    return 0;
}