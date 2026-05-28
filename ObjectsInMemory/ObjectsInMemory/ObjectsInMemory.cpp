#include <iostream>
using namespace std;

class clsPerson {

public:

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

       Each object has its own space in memory.
       Only function members are shared among all objects.

    */

    return 0;
}