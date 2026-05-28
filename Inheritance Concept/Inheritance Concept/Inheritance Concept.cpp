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

    clsPerson() {


    }

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

class clsEmployee : public clsPerson {

private:

    string _Title;
    float  _Salary;
    string _Department;
    
public:

    void SetTitle(string Title) {

        _Title = Title;

    }

    string Title() {

        return _Title;

    }

    void SetSalary(float Salary) {

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




};

int main()
{

    clsEmployee Employee1;

    Employee1.SetFirstName("Abdelmoughit");
    Employee1.SetLastName("Berdhi");
    Employee1.SetEmail("my@gmail.com");
    Employee1.SetPhone("027455544");

    Employee1.Print();

    Employee1.SendEmail("Hi", "How are you ?");

    Employee1.SendSMS("How are you ?");

    system("pause > 0");

    return 0;
}