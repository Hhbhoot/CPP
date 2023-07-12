#include<iostream>
using namespace std;
int main(){
    int a,b,c;

    cout<<"Enter  value of a b c ";
    cin>>a>>b>>c;

    a>b?(a>c ? cout<<"A is largest":cout<<"C is largest"):(b>c ? cout<<"B is largest":cout<<"C is largest");
}