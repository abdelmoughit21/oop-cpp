#include <iostream>
using namespace std;

class clsA {

private :

    int V1;
    void Func1() {

        cout << "Function 1" << endl;

    }

protected:

    int V2;
    void Func2() {

        cout << "Function 2" << endl;

    }

public:

    int V3;
    void Func3() {

        cout << "Function 3" << endl;

    }

};

class clsB : protected clsA {

public :

    void Func4() {

        cout << "Function 4" << endl;

    }

};

class clsC : public clsB {

public : 

    void Func5() {

        cout << "Function 5" << endl;

    }

};

int main()
{


    return 0;
}
