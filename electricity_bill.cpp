#include<iostream>
using namespace std;
int main(){

    int n;
    cout<<"Enter your unit :";
    cin>>n;

    if(n<=100) cout<<"Bill is : "<< n*0.6;
    if(n>100 && n<=300) cout << "Bill is :"<<60 + (n-100) * 0.8;
    else if(n>300) cout<<"Bill is : "<<60+160+(n-300)*0.9;

    }