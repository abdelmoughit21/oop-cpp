#include <iostream>
using namespace std;


class clsA {

public :

    int var;
    static int counter;

    clsA() {

        counter++;

    }

    void Print() {

        cout << "\nvar = " << var;
        cout << "\ncounter = " << counter;

    }

};

int clsA::counter = 0; // A static variable must be initialize outside the class.

int main()
{

    /*
    
      A static data member is a variable that is shared for all the objects. 
      Any object modifies it , it get modified for all other objects.
    
    */

    clsA A1, A2, A3;

    A1.var = 10;
    A2.var = 20;
    A3.var = 30;

    A1.Print();
    A2.Print();
    A3.Print();

    return 0;
}
