#include <iostream>
using namespace std;

class clsPerson {

private:

    string _FirstName;
    string _LastName;

public:

    void SetFirstName(string FirstName) {

        _FirstName = FirstName;

    }

    string FirstName() {

        return _FirstName;

    }

    void SetLastName(string LastName) {

        _LastName = LastName;

    }

    string LastName() {

        return _LastName;

    }

};



int main()
{

    clsPerson Person1;

    Person1.SetFirstName("Abdelmoughit");
    Person1.SetLastName("Berdhi");

    cout << "\nFirst name is " << Person1.FirstName();
    cout << "\nLast name is  " << Person1.LastName();

    return 0;
}