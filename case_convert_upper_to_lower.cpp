#include<iostream>
using namespace std;
int main(){
    char ch;

    cout<<"Enter ch : ";
    cin>>ch;

    if(ch>=65 && ch<=90){
        ch = ch + 32;
        cout<<ch;
    }
    else{
        ch=ch-32;
        cout<<ch;
    }
        
    

    
    
    
    
    }