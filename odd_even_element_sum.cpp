#include<iostream>
using namespace std;
int main(){

    int arr[7];

    for(int i=0;i<7;i++){

        cout<<"Enter value :";
        cin>>arr[i];
    }
     int sum=0;
     int sum1=0;

    for(int i=0;i<7;i++ ){
        if(arr[i]%2!=0){
            sum=sum+arr[i];
        }
        else{
            sum1=sum1+arr[i];
        }
    }
    cout<<"odd sum :"<<sum;
    cout<<"\neven sum :"<<sum1 ;
}