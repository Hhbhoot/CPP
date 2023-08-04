#include <iostream>
using namespace std;
class base
{

public:
    void test()
    {
        cout << "Base class called " << endl;
    }
};

class child : public base
{
public:
    void test()
    {
        cout << "Derived class calles" << endl;
    }
};

int main()
{
    child c;
    c.test();

    base *ptr, b; // pinter banavi point karvu

    ptr = &b;

    ptr->test();
}