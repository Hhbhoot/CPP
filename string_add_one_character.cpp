#include <iostream>
#include <string.h>
using namespace std;

int main()
{   // shifting character to add another character in between
    char str[7] = "Hello";

    int x = strlen(str);
    cout << "length : " << x << endl;

    for (int i = 5; i > 2; i--)
    {

        str[i + 1] = str[i];
    }
    str[2] = 'k';
    cout << str << endl;
}