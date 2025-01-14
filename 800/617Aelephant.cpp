#include<iostream>
using namespace std;

int main(){
    long long x;
    cin>>x;
    long long ans = (x%5==0?x/5:(x/5)+1);
    if(x<5){
        ans = 1;
    }
    cout<<ans;
    return 0;
}