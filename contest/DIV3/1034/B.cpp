#include<bits/stdc++.h>
using namespace std;

#define int long long 

const int MOD = 1e9 + 7;
const int INF = LLONG_MAX >> 1; 

signed main(){

    ios::sync_with_stdio(false); cin.tie(NULL);

    int tc; cin>>tc;

    while(tc--){
        int n,j,k;
        cin>>n>>j>>k;

        int mx =0;
        vector<int> a(n+1);
        for(int i=1; i<=n; i++){
            cin >> a[i];
            mx = max(mx, a[i]);
        }
        cout << (k > 1 || a[j] == mx ? "YES" : "NO") << '\n';

    }

    return 0;

}