#include <iostream>
using namespace std;

template <class t> // single template

void display(t t1)
{
    cout << "Displaying template " << t1 << endl;
}

int main()
{
    display(20.5);
    display('g');
}
