#include <iostream>
using namespace std;

class base
{

public:
    static int a;  // only declare in class 

    base()
    {
        cout << "constructor is called " << endl;
        a++;
    }
};

int base::a = 10; // initialize outside class

int main()
{

    cout << "initial stage .." << base::a << endl;
    base b;
    cout << "Final stage..." << base::a << endl;
}