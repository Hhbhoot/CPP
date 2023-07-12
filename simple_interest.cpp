#include<iostream>
using namespace std;
int main(){
    int p , r ,t ; 

    cout<< "Enter value of p :";
    cin>>p;

    cout<<"Enter rate of interest : ";
    cin>>r;

    cout<<"Enter time in years : ";
    cin>>t;

    cout<<"The simple interest of"<<p<<"is :"<<(p*r*t)/100 * 12;// for 12 months
}