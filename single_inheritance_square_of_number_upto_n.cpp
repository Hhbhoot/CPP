#include <iostream>
using namespace std;
class base
{

protected:
    int n;

public:
    void setn()
    {

        cout << "Enter value of n :" << endl;
        cin >> n;
    }
};

class child : public base
{
public:
    void getdata()
    {
        for (int i = 1; i <= n; i++)

        {
            cout << (i * i) << "\t";
        }
    }
};

int main()
{
    child c;
    c.setn();
    c.getdata();
}