#include<iostream>
using namespace std;
class base1{

    public:

      void main()
    {
        cout<<"Base1 class called "<<endl;

    }
};

class base2 
{

    public:

    void main()
    {
        cout<<"Base2 class called "<<endl;
    }
};

class derived : public base1 , public base2 
{
    public:

   void main()
    {
        cout<<"Derived class called "<<endl;
    }
};

int main()
{
    derived d;

    
    d.main();
}
