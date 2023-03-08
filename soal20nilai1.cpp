#include <iostream>
using namespace std;

float lingkaran (int a){
    if(a%7==0){
        return (22*a*a)/7;

    }else{
       return 3.14*a*a;
    }     
}

int belahKetupat (int a, int b){
    return 0.5*a*b;
}

int trapesium (int t, int a, int b){
    return ((a+b)*t)/2;
}
int main(){
    int a,b,t;
    string bangunDatar;
    cin>>bangunDatar;

    if(bangunDatar=="Trapesium"){
        cin>>a;
        cin>>b;
        cin>>t;
        cout<<trapesium(t,a,b);
    }else if (bangunDatar=="Lingkaran"){
        cin>>a;
        cout<<lingkaran(a);

    }else if (bangunDatar=="BelahKetupat"){
        cin>>a;
        cin>>b;
        cout<<belahKetupat(a,b);
    }else{
        cout<<"Pilihan salah!";
    }
}