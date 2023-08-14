#include <iostream>
using namespace std;
class base
{

public:
    void main()
    {
        cout << "base class called.." << endl;
    }
};

class derived : public base
{

public:
    void main()
    {
        cout << "Derived class called.." << endl;
    }
};

int main()
{

    derived d;
    d.main();

    base *ptr;
    ptr = &d; // base class na pointer ne derived class object upar point karyu but base class j call thay

    ptr->main();
}