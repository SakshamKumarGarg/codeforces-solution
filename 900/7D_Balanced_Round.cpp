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
        sort(a.begin(),a.end());
        int count=1;
        int ans=1;
        for(int i=1;i<n;i++){
            if(a[i]-a[i-1]<=k){
                count++;
            }
            else{
                count=1;
            }
        
        ans = max(ans,count);
        }
        
        cout<<n-ans<<"\n";


    }

    return 0;

}