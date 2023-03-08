#include <iostream>
using namespace std;

int main (){

    int n;
    cin>>n;
    int data1[n];
    int data2[n];
    int data3[n];

    for(int i = 0;i<n;i++){
        cin>>data1[i];
    }

    for(int i = 0;i<n;i++){
        cin>>data2[i];
    }
    for(int i=0;i<n;i++){
        data3[i]=data1[i]+data2[i];
        cout<<data3[i]<<" ";
    }
}