#include<iostream>
using namespace std;

int main(){
    int a;
    int b;
    cin>>a>>b;

    int k = 0;

    while(a<=b){
        a = a*3;
        b = b*2;
        k++;
    }

    cout<<k;    
    return 0;

}