#include <iostream>
using namespace std;
class base1
{

protected:
    int n;

public:
    void setn()
    {
        cout << "Enter value of n" << endl;
        cin >> n;
    }
};

class base2 : public base1
{
public:
    int a = 1;
};

class derived : public base2
{
public:
    void fact()
    {

        for (int i = 1; i <= n; i++)
        {
            a = a * i;
        }
        cout << "The factorial  of " << n << " is " << a << endl;
    }
};

int main()
{
    derived d;
    d.setn();
    d.fact();
}