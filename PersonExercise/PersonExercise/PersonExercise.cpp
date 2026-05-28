#include <iostream>
using namespace std;

class clsPerson {

private:

    int _ID;
    string _FirstName;
    string _LastName;
    string _Email;
    string _Phone;

public:

    clsPerson(int ID, string FirstName, string LastName, string Email, string Phone) {

        _ID = ID;
        _FirstName = FirstName;
        _LastName = LastName;
        _Email = Email;
        _Phone = Phone;

    }

    //Read Only
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

    void SetEmail(string Email) {

        _Email = Email;

    }

    string Email() {

        return _Email;

    }

    void SetPhone(string Phone) {

        _Phone = Phone;

    }

    string Phone() {

        return _Phone;

    }

    string FullName() {

        return _FirstName + " " + _LastName;

    }

    void Print() {

        cout << "\nInfo :";
        cout << "\n\n-----------------------------------------------------";
        cout << "\nID                  : " << _ID;
        cout << "\nFirst Name          : " << _FirstName;
        cout << "\nLast Name           : " << _LastName;
        cout << "\nFull Name           : " << FullName();
        cout << "\nEmail               : " << _Email;
        cout << "\nPhone               : " << _Phone;
        cout << "\n\n-----------------------------------------------------";

    }

    void SendEmail(string subject, string body) {

        cout << "\n\nThe following message sent successfully to email : " << _Email;
        cout << "\n\nSubject    : " << subject;
        cout << "\nBody       : " << body;

    }

    void SendSMS(string message) {

        cout << "\n\nThe following SMS sent successfully to phone : " << _Phone << endl << endl;
        cout << message;

    }

};


int main()
{

    clsPerson Person1(10 , "Abdelmoughit" , "Berdhi" , "my@gmail.com" , "0654422122");


    Person1.Print();

    Person1.SendEmail("Hi", "How are you ?");

    Person1.SendSMS("How are you ?");

    system("pause > 0");

    return 0;
}