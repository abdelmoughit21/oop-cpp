#include <iostream>
using namespace std;

class clsPerson {

public:

    string FirstName;

    // this is a constructor will be called when an object is created

    clsPerson(){

        cout << "\nHi, I'm a constructor.";

    }

    ~clsPerson() {

        cout << "\nHi, I'm a destructor.";

    }

};

void Fun1() {

    clsPerson Person;

}

void Fun2() {

    clsPerson* Person2 = new clsPerson;

    delete Person2;

}

int main()
{

    Fun1();

    Fun2();




    return 0;
}