#include <iostream>
using namespace std;
class Bank
{

protected:
    string name;
    string type;
    int bal;

public:
    void setdata(string name, string type, int bal)
    {
        this->name = name;
        this->type = type;
        this->bal = bal;
    }

    void getdata()
    {
        cout << "Account Holder name :" << name << endl;
        cout << "Account type :" << type << endl;
        cout << "Account Balance :" << bal << endl;
    }
};

int main()
{
    Bank b;
    b.setdata("Hitesh", "Current", 10000);
    b.getdata();
}
