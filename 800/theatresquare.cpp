#include<iostream>
using namespace std;

int main(){
    long long n,m,a;
    cin>>n>>m>>a;
    long long x = (n%a==0 ? n/a:n/a+1);
    long long y = (m%a==0 ? m/a:m/a+1);
    long long ans = x*y;
    cout<<ans;
    return 0;
    
}