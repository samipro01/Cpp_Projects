#include <iostream>


int main(){
    
    using namespace std;

    //practicing on type def(its old and not really used anymore)
    // It's use to customize the names of a datatype

    typedef string goal;
    goal MyDreamCar = "range rover sv";
    cout << MyDreamCar << endl;

    typedef int model;
    model number =  300;
    cout << "toyota land cruser\t" << number << '\n';
     
    //Practicing with using(the successor of typedef)

    using color= string;
    color black = "universally accepted";
    cout << black << endl;

    return 0;
}