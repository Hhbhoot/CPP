#include<iostream>
using namespace std;
int main(){

    int i=1;

    do{
        int j=1;
        do{
            cout<<"* ";
            j++;
        }
        while(j<=i);
        i++;
        cout<<"\n";
    }
    while(i<=5);
}