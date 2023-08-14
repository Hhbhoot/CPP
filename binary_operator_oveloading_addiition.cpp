#include <iostream>
using namespace std;

class base
{

    int m, n, p;

public:
    void setdata(int a, int b, int c)
    {
        m = a;
        n = b;
        p = c;
    }

    void getdata()
    {
        cout << "product :" << m + n + p << endl;
    }

    base operator+(base &t)
    {
        base r;
        r.m = m + t.m;
        r.n = n + t.n;
        r.p = p + t.p;
        return r;
    }

    base operator-(base &o)
    {
        base l;
        l.m = m - o.m;
        l.n= n - o.n;
        l.p= p - o.p;

        return l;


    }
};

int main()
{
    base b, c, d,e,f;
    b.setdata(2, 2, 2);
    b.getdata();

    c.setdata(6, 3, 2);
    c.getdata();

    d = b + c;

    d.getdata();

    e= d-b;

    e.getdata();

    f=b;
    f.getdata();

}