#include <iostream>
#include <vector>
using namespace std;

class clsA {

public:

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

    int NumberOfObjects = 5;

    vector <clsA> vObjects;
    

    for (int i = 1; i <= NumberOfObjects; i++) {

        vObjects.push_back(clsA(i));

    }

    for (clsA &A : vObjects) {

        A.print();

    }



    return 0;
}
