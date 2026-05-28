#include <iostream>
using namespace std;

class clsEmployee {

private:

    int _ID;
    string _FirstName;
    string _LastName;
    string _Title;
    string _Email;
    string _Phone;
    float  _Salary;
    string _Department;


public:

    clsEmployee(int ID, string FirstName, string LastName, string Title , string Email, string Phone , float Salary , string Department) {

        _ID = ID;
        _FirstName = FirstName;
        _LastName = LastName;
        _Title = Title;
        _Email = Email;
        _Phone = Phone;
        _Salary = Salary;
        _Department = Department;

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

    void SetTitle(string Title) {

        _Title = Title;

    }

    string Title() {

        return _Title;

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

    void SetSalay(float Salary) {

        _Salary = Salary;

    }

    float Salary() {

        return _Salary;

    }

    void SetDepartment(string Department) {

        _Department = Department;

    }

    string Department() {

        return _Department;

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
        cout << "\nTitle               : " << _Title;
        cout << "\nFull Name           : " << FullName();
        cout << "\nEmail               : " << _Email;
        cout << "\nPhone               : " << _Phone;
        cout << "\nSalary              : " << _Salary;
        cout << "\nDepartment          : " << _Department;
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

    clsEmployee Employee1(10, "Abdelmoughit", "Berdhi", "Engineer", "my@gmail.com", "0654422122" , 12000 , "IT");


    Employee1.Print();

    Employee1.SendEmail("Hi", "How are you ?");

    Employee1.SendSMS("How are you ?");

    system("pause > 0");

    return 0;
}