#include <iostream>
using namespace std;
int main()
{
    int m, s, e, t;
    float pr;

    cout << "Enter  marks of maths science and english :";
    cin >> m >> s >> e;

    t = m + s + e;
    pr = float(t / 3);

    cout << "Maths\tScience\tEnglish\tTotal\tpercentage\n";
    cout << m << "\t" << s << "\t" << e << "\t" << t << "\t" << pr;

    if(pr<33) cout<<"\nFaill";
    else cout<<"\npass";
}