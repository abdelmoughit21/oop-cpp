#include <iostream>
using namespace std;


class clsPerson {

private:

    struct stAddress {

        string AddressLine1;
        string AddressLine2;
        string City;
        string Country;

    };

public:

    string FullName;
    stAddress Address;

    clsPerson() {

        FullName = "Abdelmoughit Berdhi";
        Address.AddressLine1 = "Malabata tangier";
        Address.AddressLine2 = "Building 101";
        Address.City = "Tangier";
        Address.Country = "Morocco";

    }

    void PrintAddress() {

        cout << "\nAddress : ";
        cout << "\nAddress Line 1 : " << Address.AddressLine1;
        cout << "\nAddress Line 2 : " << Address.AddressLine2;
        cout << "\nCity           : " << Address.City;
        cout << "\nCountry        : " << Address.Country;

    }

};


int main()
{

    clsPerson Person1;

    Person1.PrintAddress();




    return 0;
}