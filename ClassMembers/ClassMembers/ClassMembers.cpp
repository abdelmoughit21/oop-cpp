#include <iostream>
using namespace std;


class clsPerson {

public :

    string FirstName;
    string LastName;

    string FullName() {

        return FirstName + " " + LastName;

    }

};

int main()
{

    clsPerson Person1;

    /*
    
       Members : variables and functions inside the class.
       Data Members : variables declared inside the class that holds data.
       Method Members : fuctions or procedures declared inside the class.
    
    */

    return 0;
}