#include <iostream>
using namespace std;


class clsPerson {

private :

    int _ID = 150;
    string _FirstName;
    string _LastName;

public :

    //Property Get, This is a read only property because we don't have a set property
    int ID() {

        return _ID;

    }

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


    string FullName() {

        return _FirstName + " " + _LastName;

    }


};


int main()
{

    clsPerson Person1;

    Person1.SetFirstName("Abdelmoughit");
    Person1.SetLastName("Berdhi");

    cout << "\nID         : " << Person1.ID();
    cout << "\nFirst name : " << Person1.FirstName();
    cout << "\nLast name  : " << Person1.LastName();


    return 0;
}

