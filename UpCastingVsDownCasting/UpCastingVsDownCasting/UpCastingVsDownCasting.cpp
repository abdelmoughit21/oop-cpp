#include <iostream>
using namespace std;

class clsPerson {

public :

    string FullName = "Abdelmoughit Berdhi";

};

class clsEmployee : public clsPerson {

public :

    string Title = "CEO";

};

int main()
{

    clsEmployee Employee;

    cout << Employee.FullName << endl;

    //Up Casting

    clsPerson *Person = &Employee;

    cout << Person->FullName << endl;

    // Down Casting will give you error because you can't convert from the base class to the derived class.


    return 0;
}