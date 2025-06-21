#include<bits/stdc++.h>
using namespace std;

#define int long long 

const int MOD = 1e9 + 7;
const int INF = LLONG_MAX >> 1; 

int gcd(int a, int b) {
    return b == 0 ? a : gcd(b, a % b);
}

signed main(){

    ios::sync_with_stdio(false); cin.tie(NULL);

    int tc; cin>>tc;

    while(tc--){
        int n;
        cin>>n;

        vector<int> p(n);
        for(int i=0;i<n;i++){
            cin>>p[i];
        }

         int g = 0;
        for (int i = 0; i < n; i++) {
            if (p[i] != i + 1) {
                g = gcd(g, abs(p[i] - (i + 1)));
            }
        }

        cout << (g == 0 ? n : g) << '\n';

        // wrong approach
        // int k=0;
        // int ans =INT_MAX;

        // for(int i=0;i<n;i++){
        //     if(p[i] != i+1){
        //         k = abs((p[i]-1) - i);
        //         ans=min(ans,k);
        //     }
        // }

        // if(ans==INT_MAX) ans=0;
        // cout<<ans<<"\n";

    }

    return 0;

}