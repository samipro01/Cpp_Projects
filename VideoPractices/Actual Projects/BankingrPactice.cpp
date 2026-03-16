#include <iostream>
#include <iomanip>


    using std::cout;
    using std::cin;
    using std::endl;

    void showBalance(double balanvce);
    double deposit();
    double withdraw(double balance);

    int main(){

        double balance = 0;
        int choice = 0;
        do{
        cout << "+++++++++++++include+++\n";
        cout << "Enter your choice:\n";
        cout << "+++++++++++++++++\n";
        cout << "1. show Balance\n";
        cout << "2. Deposit Money\n";
        cout << "3. Withdraw Money\n";
        cout << "4. Exit\n";
        cin >> choice;

        switch(choice){
            case 1:showBalance(balance);
                break;
            case 2: balance += deposit();
                break;
            case 3: balance -= deposit();
                break;
            case 4: cout << "Thanks for visiting!\n";
                break;
            default: cout << "Invalid choice\n";
        }
    }while(choice !=4);       

        return 0;
    }
  
    void showBalance(double balance){
        cout << "Your balance is: $" << std::setprecision(2) << std::fixed << balance <<'\n';

    }
    double deposit(){

            double amount = 0;

            cout << "Enter amount to be deposited: ";
            cin >> amount;

        return 0;
    }
    double withdraw(double balance){
        return 0;
    }
    
