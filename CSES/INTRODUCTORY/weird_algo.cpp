#include<bits/stdc++.h>
using namespace std;

#define int long long

signed main(){
    int n;
    cin>>n;

    if(n==1) cout<<n;
    while(n>1){
        cout<<n<<" ";
        if(n%2 == 0){
            n /= 2;
        }
        else{
            n = n*3 + 1;
        }

        if(n==1){
            cout<<n;
            break;
        }
    }

    return 0;

}