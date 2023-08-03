#include <iostream>
using namespace std;
class parent
{
protected:
    int n;

public:
    void setn()
    {
        cout << "Enter n : " << endl;
        cin >> n;
    }
};
class child : public parent
{
public:
    int a = 1;

    void getdata()
    {
        for (int i = 1; i <= n; i++)
        {

            a = a * i;
        }
        cout << "Factorial of " << n << " is :" << a << endl;
    }
};

int main()

{
    child c;
    c.setn();
    c.getdata();
}