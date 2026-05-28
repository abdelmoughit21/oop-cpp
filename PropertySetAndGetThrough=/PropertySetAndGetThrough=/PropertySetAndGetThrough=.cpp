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

    string GetFirstName() {

        return _FirstName;

    }

    void SetLastName(string LastName) {

        _LastName = LastName;

    }

    string GetLastName() {

        return _LastName;

    }

    __declspec(property(get = GetFirstName, put = SetFirstName)) string FirstName;
    __declspec(property(get = GetLastName, put = SetLastName)) string LastName;

};

int main()
{

    clsPerson Person1;

    Person1.SetFirstName("Abdelmoughit");
    Person1.SetLastName("Berdhi");

    cout << "\nFirst Name : " << Person1.GetFirstName();
    cout << "\nLast Name  : " << Person1.GetLastName();

    /*****************************************************/

    Person1.FirstName = "Omar";
    cout << "\nFirst name is " << Person1.FirstName;

    Person1.LastName = "bakali";
    cout << "\nLast name is " << Person1.LastName;



    return 0;
}
