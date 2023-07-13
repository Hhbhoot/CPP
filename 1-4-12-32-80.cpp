#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"Enter n :";
    cin>>n;
     
     int p=1;

     for(int i=1;i<=n;i++){

        cout<<i*p<<" ";
         p=p*2;

     }
    
}