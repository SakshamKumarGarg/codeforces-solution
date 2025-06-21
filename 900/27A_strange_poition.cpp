#include<bits/stdc++.h>
using namespace std;

#define int long long 

const int MOD = 1e9 + 7;
const int INF = LLONG_MAX >> 1; 

signed main(){

    ios::sync_with_stdio(false); cin.tie(NULL);

    int tc; cin>>tc;

    while(tc--){
        int n,x;
        cin>>n>>x;

        vector<int> a(n);
        for(int i=0;i<n;i++){
            cin>>a[i];
        }

        int val2 = 0;
        for (int i = 0; i < n; i++) {
            val2 += (a[i] + x - 1) / x; 
        }

        long long total = accumulate(a.begin(), a.end(), 0LL);
        int val1 = (total + x - 1) / x;

        cout << val1 << " " << val2 << "\n";


    }

    return 0;

}