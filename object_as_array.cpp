#include <iostream>
using namespace std;
class result
{

    int m, s, e, t;
    char name[20];
    float pr;

public:
    void setdata()
    {
        cout << "Enter name :" << endl;
        cin >> name;
        cout << "Enter marks of maths :" << endl;
        cin >> m;
        cout << "Enter marks of science :" << endl;
        cin >> s;
        cout << "Enter marks of Englsh :" << endl;
        cin >> e;
    }
    void calc()
    {
        t = m + s + e;
        pr = (float)t / 3;

    }
    void getdata()
    {

        cout << name << "\t" << m << "\t" << s << "\t" << e << "\t" << t << "\t" << pr << endl;
    }
};
int main()
{

    result r[2];

    int i;

    for (i = 0; i < 2; i++)
    {
        r[i].setdata();
    }
    for (i = 0; i < 2; i++)
    {
        r[i].calc();
    }
    cout << "Name\tMaths\tScience\tEnglish\tTotal\tPercentage" << endl;
    for (i = 0; i < 2; i++)
    {
        r[i].getdata();
    }
}