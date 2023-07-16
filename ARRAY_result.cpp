#include<iostream>
using namespace std;
int main(){

    int m[3],s[3],e[3],t[3],pr[3];

    for(int i=0;i<3;i++){
    
            cout<<"Enter marks of maths  : ";
            cin>>m[i];

            cout<<"Enter marks of science :";
            cin>>s[i];

            cout<<"Enter marks of english :";
            cin>>e[i];
        }
        for(int i=0;i<3;i++){

            t[i]=m[i]+s[i]+e[i];
            pr[i]=t[i]/3;
        }

        cout<<"maths\tscience\tenglish\ttotal\tpercentage ";
        cout<<"\n";

        for(int i=0;i<3 ; i++){
            cout<<m[i]<<"\t"<<s[i]<<"\t"<<e[i]<<"\t"<<t[i]<<"\t"<<pr[i]<<"\n";
        }
    
}