#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"Enter n :";
    cin>>n;

    float j=0.5;

    for(float i=0.5;i<=n;i++){

        cout<<j<<" ";
        j=i+j;

    }


}