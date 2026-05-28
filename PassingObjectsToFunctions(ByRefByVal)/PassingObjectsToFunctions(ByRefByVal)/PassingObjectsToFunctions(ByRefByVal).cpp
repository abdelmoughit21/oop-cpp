#include <iostream>
using namespace std;

class clsA {

public :

    int x;

    void print() {

        cout << "\nThe value of x = " << x << endl;

    }

};

void Func1(clsA A) {

    A.x = 100;

}

void Func2(clsA &A) {

    A.x = 100;

}

int main()
{

    clsA A;

    A.x = 20;

    A.print();

    Func1(A);

    A.print();

    Func2(A);

    A.print();

    return 0;
}
