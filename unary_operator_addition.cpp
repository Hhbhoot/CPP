#include <iostream>
using namespace std;

class base
{

    int l, w, m;

public:
    void setdata(int a, int b, int c)
    {
        l = a;
        w = b;
        m = c;
    };

    void getdata()
    {
        cout << "Product :" << l * m * w << endl;
    }

    base operator++()
    {
        base t;
        t.l = ++l;
        t.w = ++w;
        t.m = ++m;
        return t;
    }

    base operator++(int)
    {
        base t;
        t.l=l++;
        t.m=m++;
        t.w=w++;
    }
};

int main()
{
    base b,c;
    b.setdata(2, 2, 2);
    b.getdata();

    ++b;

    b.getdata();

    b++;
    c=b;
    c.getdata();
}