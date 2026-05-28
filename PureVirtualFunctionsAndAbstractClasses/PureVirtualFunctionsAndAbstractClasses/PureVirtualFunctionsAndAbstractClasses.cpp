#include <iostream>
using namespace std;


// Abstract class , Interface , contract
class clsMobile {

    virtual void Dial(string PhoneNumber) = 0; // Pure Virtual Function
    virtual void SendSMS(string PhoneNumber, string Text) = 0;
    virtual void TakePicture() = 0;

};

class clsPhone : public clsMobile {

    void Dial(string PhoneNumber) {


    }

    void SendSMS(string PhoneNumber, string Text) {


    }

    void TakePicture() {


    }

};

class clsSumsung : public clsMobile {

    void Dial(string PhoneNumber) {


    }

    void SendSMS(string PhoneNumber, string Text) {


    }

    void TakePicture() {


    }

};

int main()
{
    clsSumsung sumsung;

    return 0;
}
