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

        vector<int> a(n);
        for(int i=0;i<n;i++){
            cin>>a[i];
        }

        int ans = 0;
        int count = 0;
        for(int i=0;i<n;i++){
            if(a[i]==0){
                count++;
                ans = max(ans,count);
            }
            else{
                count = 0;
            }
        }
        
        cout<<ans<<"\n";
    }

    return 0;

}