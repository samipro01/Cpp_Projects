#include <iostream>

int main()
{
    using namespace std;

    //Learning how to use deftype/using alias(renaming the names of a datatype)
    typedef int whole;
    whole number = 55;
    cout << number << std::endl;

    typedef char one;
    one at = '@';
    cout <<  at << endl;
    
    using whole2 = int;
    whole2 number2 = 55;
    cout << number2 << endl;

    using one2 = char;
    one2 at2 = '@';
    cout << at2 << endl;


    return 0;
}