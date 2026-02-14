#include <iostream>
#include <string>

int main(){

    //Practicing on using namesapce the proper way;

    using std::cout;
    using std::cin;
    using std::endl;
    using std::string;

    using number = int;
    using car =double;
    car y=6.8;
    cout << y<< endl;

    

    return 0;
}
