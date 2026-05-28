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

    short NumberOfElements = 5;

    clsA* arrA = new clsA[NumberOfElements];
    
    
    for (int i = 1; i <= NumberOfElements; i++) {

        arrA[i] = clsA(i);

    }

    for (int i = 1; i <= NumberOfElements; i++) {

        arrA[i].print();

    }




    return 0;
}
