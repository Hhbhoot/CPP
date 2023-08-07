#include <iostream>
using namespace std;
template <class x, class y>
void display(x x1, y y1)
{
    cout << "Addition of x1 and y1 : " << x1 + y1 << endl;
}

int main()
{
    display(2, 5);
    display('e', 'y'); // + operator => ascii value
}