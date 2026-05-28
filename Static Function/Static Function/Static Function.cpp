#include <iostream>
using namespace std;

class clsA {

public:

    static int Function1() {

        return 10;

    }

    int Function2() {

        return 20;

    }

};

int main()
{


    /*
    
       A static function can be called at class level without a need to create an object.
    
    */

    clsA A1;

    cout << clsA::Function1() << endl;

    cout << A1.Function1() << endl;
    cout << A1.Function2() << endl;


    return 0;
}
