#include <iostream>
using namespace std;

class clsA {

private:

    int var1;
    void Func1() {

        cout << "Function 1" << endl;

    }

protected:

    int var2;
    void Func2() {

        cout << "Function 2" << endl;

    }

public:

    int var3;
    void Func3() {

        cout << "Function 3" << endl;

    }

};

class clsB : public clsA {

public :
    
    void Func4() {

        clsA::Func2();

        cout << "Function 4" << endl;

    }

};


int main()
{

    


    return 0;
}
