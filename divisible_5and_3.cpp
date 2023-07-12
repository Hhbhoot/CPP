#include <iostream>
using namespace std;
int main()
{

    int n;
    cout << "Enter number : ";
    cin >> n;

    if (n % 15 == 0)
    {
        cout << "Divisible by 5 and 3 ";
    }
    else
    {
        cout << "Not divisible 5 and 3";
    }
}