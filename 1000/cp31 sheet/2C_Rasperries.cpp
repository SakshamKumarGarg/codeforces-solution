#include<bits/stdc++.h>
using namespace std;

#define int long long 

const int MOD = 1e9 + 7;
const int INF = LLONG_MAX >> 1; 

signed main(){

    ios::sync_with_stdio(false); cin.tie(NULL);

    int tc; cin>>tc;

    while(tc--){
        int n,k;
        cin>>n>>k;

        vector<int> a(n);
        for(int i=0;i<n;i++){
            cin>>a[i];
        }

        int ans = INT_MAX;
        int even_count = 0;
        for (int i = 0; i < n; i++) // n
        {
            if (a[i] % 2 == 0)
                even_count++;
            if (a[i] % k == 0)
                ans = 0;
            ans = min(ans, (k - a[i] % k));
        }

        if (k == 4)
        {
            if (even_count >= 2)
                ans = min(ans, 0LL);
            else if (even_count == 1)
                ans = min(ans, 1LL);
            else if (even_count == 0)
                ans = min(ans, 2LL);
        }
        cout << ans << endl;

    }

    return 0;

}