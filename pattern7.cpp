#include<iostream>
using namespace std;
int main(){

    int k=5;

    for(int i=1;i<=5;i++){
        k=5;
        for(int j=1;j<=i;j++){

            cout<<k-i+j<<" " ;
        }
        cout<<"\n";
    }
}