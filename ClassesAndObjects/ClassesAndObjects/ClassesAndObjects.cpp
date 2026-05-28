#include <iostream>
using namespace std;


class clsPerson {

private: 

    int x;

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


    Person1.FirstName = "Abdelmoughit";
    Person1.LastName = "Berdhi";

    cout << Person1.FullName() << endl;


    return 0;
}
