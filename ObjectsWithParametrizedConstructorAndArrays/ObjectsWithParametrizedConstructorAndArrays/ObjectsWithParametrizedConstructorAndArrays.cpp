#include <iostream>
#include <vector>
using namespace std;

class clsA {

public:

    clsA() {


    }

    clsA(int value) {

        x = value;

    }

    int x;

    void print() {

        cout << "\nThe value of x = " << x << endl;

    }

};


int main()
{

    clsA obj[] = { clsA(20) , clsA(10) , clsA(40) , clsA(30) };

    for (int i = 0; i < 4; i++) {

        obj[i].print();

    }




    return 0;
}
