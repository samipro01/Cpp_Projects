#include <iostream>

int main(){

    // Explicit datatype;
    double x = (int) 3.142;
    std::cout << x << std::endl;
    
    //implicit datatype;
    char y = 100;
    std::cout << y << std::endl;

    int correct = 8;
    int questions = 10;
    double score = correct/(double)questions * 100;

    std::cout << score << "%" << std::endl; 

    return 0;
}