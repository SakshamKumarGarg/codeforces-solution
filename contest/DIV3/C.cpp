#include<bits/stdc++.h>
using namespace std;

#define int long long 

const int MOD = 1e9 + 7;
const int INF = LLONG_MAX >> 1; 

signed main(){

    ios::sync_with_stdio(false); cin.tie(NULL);

    int tc; cin>>tc;

    while(tc--){
        int n,m;
        cin>>n>>m;

        vector<vector<int>> a(n,vector<int> (m));
        for(int i=0;i<n;i++){
            for(int j=0;j<m;j++){
                cin>>a[i][j];
            }
        }

        int ans = INT_MIN;
        for(int i=0;i<n;i++){
            int val = *max_element(a[i].begin(),a[i].end());
            ans = max(val,ans);
        }
        cout<<ans-1<<"\n";
    }

    return 0;

}