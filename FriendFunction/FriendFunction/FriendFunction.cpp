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

    friend int Sum(clsA A);
    friend int Func(clsA A);

};

int Sum(clsA A) {

    return A.Var3 + A._Var1 + A._Var2;

}

int Func(clsA A) {

    return A.Var3 + A._Var1 + A._Var2;

}

int main()
{
    clsA A;

    cout << Sum(A) << endl;

    return 0;
}

