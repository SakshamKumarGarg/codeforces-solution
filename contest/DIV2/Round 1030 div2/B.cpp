#include<bits/stdc++.h>
using namespace std;

#define int long long 

const int MOD = 1e9 + 7;
const int INF = LLONG_MAX >> 1; 

signed main(){

    ios::sync_with_stdio(false); cin.tie(NULL);

    int tc; cin>>tc;

    while(tc--){
        int n;
        cin>>n;

        cout<<2*n -1<<"\n";
        cout<<1<<" "<<1<<" "<<n<<"\n";
        for(int i=2;i<=n;i++){
            cout<<i<<" "<<1<<" "<<i-1<<"\n";
            cout<<i<<" "<<i<<" "<<n<<"\n";
        }

    }

    return 0;

}