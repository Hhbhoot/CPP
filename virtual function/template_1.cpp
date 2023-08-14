#include<iostream>
using namespace std;

template<class t,class u>
void product(t t1, u u1)
{
   cout<<"product "<<t1*u1<<endl;

}
int main()
{
    product(5 , 4);
}