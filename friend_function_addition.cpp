#include <iostream>
using namespace std;

class base
{

    int a, b, c;

public:
    void setdata(int a, int b, int c)
    {
        this->a = a;
        this->b = b;
        this->c = c;
    }

    void getdata()
    {
        cout << "Product :" << a * b * c << endl;
    };

    friend base add(base, base, base);
    friend base sub(base, base, base);
};
base add(base x, base y, base z)
{
    base t;
    t.a = x.a + y.a + z.a;
    t.b = x.b + y.b + z.b;
    t.c = x.c + y.c + z.c;
    return t;
}

base sub(base x, base y, base z)
{
    base w;
    w.a = x.a - y.a - z.a;
    w.b = x.b - y.b - z.b;
    w.c = x.c - y.c - z.c;
    return w;
}
int main()
{
    base b, c, d, e, f;
    b.setdata(2, 2, 2);
    b.getdata();
    c.setdata(10, 10, 10);
    c.getdata();
    d.setdata(5, 5, 5);
    d.getdata();

    e = add(b, c, d);
    e.getdata();

    f = sub(c, d, b);
    f.getdata();
}