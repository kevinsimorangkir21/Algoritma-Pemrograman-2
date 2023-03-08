#include <iostream>
using namespace std;

int main(){
    int n;
    cin>>n;
    int data[n];
    int z=0;

    for(int i=0; i<n;i++){
        cin>>data[i];
    }

    for(int i=0; i<n;i++){
        if(data[i]%2==0){
            data[z]=data[i];
            cout<<data[z]<<", ";
            z++;
        }
    }
}