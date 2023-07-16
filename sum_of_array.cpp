#include<iostream>
using namespace std;
int main(){

    int a[3][3],b[3][3];

    for(int i=0;i<3;i++){
        for(int j=0;j<3;j++){

            cout<<"Enter value of :";
            cin>>a[i][j];
            cout<<"Enter value : ";
            cin>>b[i][j];
        }
        

    }

    int sum ;
    
    cout<<"\n";

    for(int i=0;i<3;i++){
        for(int j=0;j<3;j++){
            cout<<a[i][j]<<" ";
        }
        cout<<"\t";

        for(int j=0;j<3;j++){
            cout<<b[i][j]<<" ";
        }
        cout<<"\t";

        for(int j=0;j<3;j++){
            sum=a[i][j]+b[i][j];
            cout<<sum<<" ";
        }
        cout<<"\n";
    }
}