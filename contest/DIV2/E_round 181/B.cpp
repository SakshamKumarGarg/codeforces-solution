#include<bits/stdc++.h>
using namespace std;

#define int long long 

const int MOD = 1e9 + 7;
const int INF = LLONG_MAX >> 1; 

int gcd(int a, int b) {
    if (b == 0) return a;
    return gcd(b, a % b);
}

signed main(){

    ios::sync_with_stdio(false); cin.tie(NULL);

    int tc; cin>>tc;

    while(tc--){
        int a,b,k;
        cin>>a>>b>>k;

        int g = gcd(a,b);
        a /= g;
        b /= g;
        if(a <= k && b <= k){
            cout<<1<<"\n";
        }
        else{
            cout<<2<<"\n";
        }
    }
    return 0;
}