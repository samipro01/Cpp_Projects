#include <iostream>
#include <string>

int main(){
    //Learning C++ variables

    //Using int- it only stores whole numbers(4bytes)
    int accountNumber;
    std::cout << std::endl;
    std::cout << "Please enter your account number:" << std::endl;
    std::cin >> accountNumber;
    std::cout << std::endl;

    

    //Using char-It stores single characters(1byte);
    char anykey;
    std::cout << std::endl;
    std::cout << "Press any key to continue----\n";
    std::cin >> anykey;
    std:: cout << std::endl;

    //Uing string - It stores sentences, text and symbols;
    std::string prompt = "Please enter your passworld";
    std::string password;
    std::cout << prompt << std::endl; 
    std::cin >> password;
    std::cout << std::endl;

    //Using double - It displays numbers with decimals
    double balance = 7322458.34;
    std::cout << balance << std::endl;

    //
    return 0;
}