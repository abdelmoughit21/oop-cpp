#include <iostream>
using namespace std;

class clsA {

private:

    int _Var1;

protected:

    int _Var2;

public:

    int Var3;

    clsA() {

        _Var1 = 10;
        _Var2 = 20;
        Var3 = 30;

    }

    friend class clsB;

};

class clsB {

public:

    void display(clsA A) {

        cout << "\nThe value of Var1 = " << A._Var1;
        cout << "\nThe value of Var2 = " << A._Var2;
        cout << "\nThe value of Var3 = " << A.Var3;

    }

};

int main()
{

    clsA A;

    clsB B;
    
    B.display(A);

    return 0;
}

