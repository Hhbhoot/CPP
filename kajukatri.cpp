#include<iostream>
using namespace std;
int main(){
     
    int n;

    cout<<"Enter n : ";
    cin>>n;

    int nst , nsp , ml ;

    nst= 1;
    nsp = n/2;
    ml=n/2 + 1;

    for(int i=1;i<=n;i++){
        for(int j=1;j<=nsp;j++){
            cout<<"  ";
        }
        for(int j=1;j<=nst;j++){
            cout<<"* ";

        }
        if(i>=ml){
            nsp+=1;
            nst-=2;
        }
        else{
            nsp-=1;
            nst+=2;
        }
        cout<<"\n";
        }
    }
