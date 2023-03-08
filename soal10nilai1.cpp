#include <iostream>
using namespace std;

int main(){
    int n;
    cin>>n;
    int data[n];
    int minus=0;

    for(int i=0;i<n;i++){
        cin>>data[i];
        minus=minus-data[i];
    }

    cout<<minus;

}