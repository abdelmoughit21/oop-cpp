#include <iostream>
using namespace std;


class clsPerson {

private:

    class clsAddress {

    private:

        string _AddressLine1;
        string _AddressLine2;
        string _City;
        string _Country;

    public :

        clsAddress(string AddressLine1, string AddressLine2, string City, string Country) {

            _AddressLine1 = AddressLine1;
            _AddressLine2 = AddressLine2;
            _City = City;
            _Country = Country;

        }

        void SetAddressLine1(string AddressLine1) {

            _AddressLine1 = AddressLine1;

        }

        string AddressLine1() {

            return _AddressLine1;

        }

        void SetAddressLine2(string AddressLine2) {

            _AddressLine2 = AddressLine2;

        }

        string AddressLine2() {

            return _AddressLine2;

        }

        void SetCity(string City) {

            _City = City;

        }

        string City() {

            return _City;

        }

        void SetCountry(string Country) {

            _Country = Country;

        }

        string Country() {

            return _Country;

        }

        void Print() {

            cout << "\nAddress : ";
            cout << "\nAddress Line 1 : " << _AddressLine1;
            cout << "\nAddress Line 2 : " << _AddressLine2;
            cout << "\nCity           : " << _City;
            cout << "\nCountry        : " << _Country;

        }

    };

    string _FullName;
    

public:

    clsAddress Address = clsAddress("", "", "", "");

    clsPerson(string FullName, string AddressLine1, string AddressLine2, string City, string Country) {

        _FullName = FullName;
        Address = clsAddress(AddressLine1 , AddressLine2 , City , Country);

    }

    void SetFullName(string FullName) {

        _FullName = FullName;

    }

    string FullName() {

        return _FullName;

    }


};


int main()
{

    clsPerson Person1("Abdelmoughit Berdhi", "Malabata Street 010", "Building 101" , "Tangier" , "Country");

    Person1.Address.Print();




    return 0;
}