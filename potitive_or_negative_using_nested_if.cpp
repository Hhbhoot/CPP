#include<iostream>
using namespace  std;
int main(){

    int n;
    cout<<"Enter a number ";
    cin>>n ;

    if(n!=0){
        if(n>0){
            cout<<"Number is positive ";
        }
        else{
            cout<<"Number is Negative  ";

        }
    }
    else{
        cout<<"Number is zero ";
    }
}