#include <iostream>
using namespace std;


class clsCalculator {

private :

    float _Result = 0;
    float _LastNumber = 0;
    string _LastOperation = "Clear";
    float _PreviousResult = 0;

    bool _IsZero(int num) {

        return (num == 0);

    }

public :

    void Add(int num) {

        _LastNumber = num;
        _LastOperation = "adding";
        _PreviousResult = _Result;
        _Result += num;

    }

    void Substract(int num) {

        _LastNumber = num;
        _LastOperation = "substracting";
        _PreviousResult = _Result;
        _Result -= num;

    }

    void Divide(int num) {

        _LastNumber = num;

        if (_IsZero(num)) {

            num = 1;

        }

        _LastOperation = "dividing";
        _PreviousResult = _Result;
        _Result /= num;

    }

    void Multiply(int num) {

        _LastNumber = num;
        _LastOperation = "multiplying";
        _PreviousResult = _Result;
        _Result *= num;

    }

    void Clear() {

        _LastNumber = 0;
        _LastOperation = "Clear";
        _PreviousResult = _Result;
        _Result = 0;

    }

    void CancelLastOperation() {

        _LastNumber = 0;
        _LastOperation = "Cancelling last operation";
        _Result = _PreviousResult;

    }

    void Result() {

        cout << "\nResult after " << _LastOperation << " " << _LastNumber << " is " << _Result;

    }

};


int main()
{

    clsCalculator Calculator;

    Calculator.Clear();

    Calculator.Add(100);
    Calculator.Result();

    Calculator.Substract(50);
    Calculator.Result();

    Calculator.Divide(0);
    Calculator.Result();

    Calculator.Divide(2);
    Calculator.Result();

    Calculator.Multiply(3);
    Calculator.Result();

    Calculator.Clear();
    Calculator.Result();

    return 0;
}
