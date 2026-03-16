#include <iostream>
#include <string>

int main(){
    //Application of Simple_Syntax Structure
    //This program mimics a simple page to reset an account password

    std::cout << "Enter your account Number\n"; //input account number
    std::string accNumber;
    std::cin >> accNumber;
    std::cout << "\n";

    std::cout << "Account Number: " << accNumber << std::endl;
    std::cout << "Please enter your new password\t:\n"; // enter new password
    int password;
    std::cin >> password;
    std::cout << "\n";

    std::cout << "Account Number: " << accNumber << std::endl;
    std::cout << "confirm your password" << std::endl; // confirmation of password
    int password2;
    std::cin >> password2;std::cout << "\n";
     std::cout << "\n";

   std::cout << "Account Number: " << accNumber << std::endl;
    std::cout << "Your Password has been reset\n";//Feedback



    return 0;
}