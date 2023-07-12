#include<iostream>
using namespace std;
int main(){
     int n;

     cout<<"Enter a Year :";
     cin>>n;
     
     if((n%100!=0 && n%4==0) || n%400==0)
     {
        cout<<"It's a Leap year ";

     }   
     else{
        cout<<"It's NOt a Leap year";
     }
   }