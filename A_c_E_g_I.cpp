#include<iostream>
using namespace std;
int main(){

    char ch='A' ;
    for(int i=0;i<26;i=i+2){

        if(i%4==0){
            cout<<char(ch+i)<<" ";

        }
        else{
            cout<<char(ch+32+i)<<" ";
            
        }
    }
}