#include <iostream>
#include <string>

int main(){

    using std::cout;
    using std::endl;

    //Practicing on how to use Arithmetic operations

    //Incraesing a variable
    int students= 21;
    students+=15; //method 1
    students++; //Method 2
    students= students +7; //method 3
    

    //Drecraesing a variable
    students-=2; //my favorite method
    students = students-2;
    students--;

    //Devision of Variables
    students/=3;
    students= students /2;

    cout << "Students:\t" << students << endl;

    //Performing simple arithmetic operations
    //NB: It uses BODMAS
    
    double Math1;
    double Math2;
    double Math3;
    Math1 = 20 + (4 - 4) / 34;
    Math2 = 20 + 4 - (4 /34);
    Math3 = (20 + 4) - 4 / 34;

    cout << "Math 1 \t"<< Math1 << endl;
    cout << "Math 2 \t"<< Math2 << endl;
    cout << "Math 3\t" << Math3 << endl;


    


        
    return 0;
}