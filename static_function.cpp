#include <iostream>
using namespace std;
class base
{

public:
    static int a;

    base()
    {
        cout << "constructor is called.." << endl;
        a++;
    }
    static int main()
    {
        return a;
    }
};

int base::a = 10;

int main()
{
    cout << "initial stage .." << base::main() << endl;

    base b, a, c, d;

    cout << "Final stage.." << base::main();
}
