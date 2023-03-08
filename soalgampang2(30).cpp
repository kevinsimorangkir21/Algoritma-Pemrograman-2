#include <iostream>
using namespace std;

void penghitung (int n){
    int data[n];
    int max= 0;
    float avg=0;
    for(int i=0;i<n;i++){
        cin>>data[n];
        if(data[n]>max){
            max=data[n];
        }
        avg=avg+data[n];
    }
    cout<<max<<endl;
    cout<<avg/n;
}

int main(){
    int n;
    cin>>n;
    penghitung(n);

}