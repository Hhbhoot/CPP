#include<iostream>
using namespace std;
int main(){

    char ch = 'A';

    for(int i=1;i<=5;i++){
        for(int j=1;j<=i;j++){
            cout<<char(ch+i-j)<<" ";
        }
        cout<<'\n';
    }
}