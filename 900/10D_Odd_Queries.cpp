#include<bits/stdc++.h>
using namespace std;

#define int long long 

const int MOD = 1e9 + 7;
const int INF = LLONG_MAX >> 1; 

signed main(){

    ios::sync_with_stdio(false); cin.tie(NULL);

    int tc; cin>>tc;

    while(tc--){
        int n,q;
        cin>>n>>q;

        vector<int> a(n + 1, 0); 
        vector<int> prefix(n + 1, 0);
        
        for (int i = 1; i <= n; i++) {
            cin >> a[i];
            prefix[i] = prefix[i - 1] + a[i];
        }

        int totalSum = prefix[n]; 

        while(q--){
            int l,r,k;
            cin>>l>>r>>k;
            
            int segmentSum = prefix[r] - prefix[l - 1]; 
            int newSum = totalSum - segmentSum + (r - l + 1) * k;

            if (newSum % 2 != 0) cout << "YES\n";
            else cout << "NO\n";

        }
    }

    return 0;

}