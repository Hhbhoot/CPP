#include<iostream>
using namespace std;
int main(){

    char ch ;

    cout<<"Enter your character :";
    cin>>ch;

    if(ch>=60 && ch<=90){
        cout<<ch<<"==>";
        ch=ch+32;
        cout<<ch;


    }
    else{
        cout<<ch<<"==>";
        ch=ch-32;
        cout<<ch;
    }




}