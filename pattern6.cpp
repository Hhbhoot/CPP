#include<iostream>
using namespace std;
int main(){

    char ch = 'A';

    for(int i=1;i<=5;i++){
        for(int j=1;j<=i;j++){
            
            if(i%2!=0){
                cout<<ch<<" ";
                ch++;

            }
            else{
                cout<<char(ch+32)<<" ";
                ch++;
            }
        }
        cout<<"\n";
    }
}