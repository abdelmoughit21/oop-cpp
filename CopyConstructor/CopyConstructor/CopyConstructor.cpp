#include <iostream>
using namespace std;

class clsAddress {

private:

    string _AddressLine1;
    string _AddressLine2;
    string _POBox;
    string _ZipCode;

public:

    clsAddress(string AddressLine1, string AddressLine2, string POBox, string ZipCode) {

        _AddressLine1 = AddressLine1;
        _AddressLine2 = AddressLine2;
        _POBox = POBox;
        _ZipCode = ZipCode;

    }

    //Copy Constructor

    clsAddress(clsAddress &Old_Obj) {

        _AddressLine1 = Old_Obj.AddressLine1();
        _AddressLine2 = Old_Obj.AddressLine2();
        _POBox = Old_Obj.POBox();
        _ZipCode = Old_Obj.ZipCode();

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

    void SetPOBox(string POBox) {

        _POBox = POBox;

    }

    string POBox() {

        return _POBox;

    }

    void SetZipCode(string ZipCode) {

        _ZipCode = ZipCode;

    }

    string ZipCode() {

        return _ZipCode;

    }

    void Print() {

        cout << "\nAddress Details : ";
        cout << "\n-----------------------------------";
        cout << "\nAddress Line 1    : " << _AddressLine1;
        cout << "\nAddress Line 2    : " << _AddressLine2;
        cout << "\nPOBox             : " << _POBox;
        cout << "\nZip Code          : " << _ZipCode;
        cout << "\n-----------------------------------";

    }

};

int main()
{

    clsAddress Address1("Malabata number 4 Street", "Building 104", "ADJD14", "12347");

    Address1.Print();

    clsAddress Address2 = Address1;

    Address2.Print();



    return 0;
}

