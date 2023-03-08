#include <iostream>
using namespace std;
int main (){
    int vokal =0;
    char kalimat[50];
    int x;
    cin.getline(kalimat,250);

    for(int i=0;i<100;i++){
        if(kalimat[i]=='a'||kalimat[i]=='i'||kalimat[i]=='u'||kalimat[i]=='e'||kalimat[i]=='o'){
            vokal++;
        }
    }
    cout<<vokal;
}