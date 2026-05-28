#include <iostream>
using namespace std;

class clsPerson {

private: //Accessible only inside the scope of the class.

    int variable1 = 50;

    int Function1() {

        return 40;

    }

protected: // Accessible inside the scope of the class and to the classes that inherits this class.

    int variable2 = 100;

    int Function2() {

        return 50;

    }

public: // Accessible to everyone.

    string FirstName;
    string LastName;

    string FullName() {

        return FirstName + " " + LastName;

    }

    int Function3() {

        return Function1() * variable1 * variable2;

    }

};


int main()
{

    clsPerson Person;

    




    return 0;
}