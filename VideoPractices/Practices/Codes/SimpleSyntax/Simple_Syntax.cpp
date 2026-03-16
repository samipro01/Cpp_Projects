#include <iostream>

int main(){
    //This code is written to master the simple syntax used in c++

    //Printing text to screen(cout)
    std::cout <<'s' << std::endl; // endl= (E)nd (L)ine also << means send 's' to cout(cout=ouput)
    std::cout << "2011 macbook pro";

    //Acceptin a simple iput from a user
    int favoriteNumber; // Declared a variable to hold the input
    std::cin >> favoriteNumber;

    // \n	New Line
    // \t	Tab (big space)
    // \"	Prints a double quote;Prints a backslash

    std::cout << "M1 macbook pro\n";
    std::cout << "ubuntu\t24.04LTS" << std::endl;
    std::cout << "\"slimmest laptop in the world\"-Steve Jobs\n"; //output "---"-steve jobs
    return 0;
}