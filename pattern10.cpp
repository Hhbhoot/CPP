#include<iostream>
using namespace std;
int main(){

    int sp=20;

    for(int i=5;i>=1;i--){
        for(int j=1;j<=sp;j++){
            cout<<" ";
        }
        for(int j=1;j<=i;j++){
            cout<<"* ";
        }
        cout<<"\n"<<" ";
    }
}