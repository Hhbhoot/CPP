#include<iostream>
using namespace std;
int main(){
    char ch='A';

    for(ch=65;ch<=90;ch++){

        cout<<ch<<"-"<<(char)(ch+32)<<" \n";
    }
}