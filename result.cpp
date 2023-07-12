#include<iostream>
using namespace std;
int main(){
    int m,s,e,total;
    float pr ;

    cout<<"Enter marks of maths science english :";
    cin>>m>>s>>e;

    total=m+s+e;
    pr=total/3;

    cout<<"Maths\tscience\tenglish\ttotal\tpercentage\n";
    cout<<m<<"       " <<s<<"       " <<e<<"      " <<total<<"     " << pr;
}