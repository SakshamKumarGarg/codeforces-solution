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

        int ans = 0;
        for(int i=1;i<=n;i++){
            if(n%i == 0){
                continue;
            }
            else{
                ans = i-1;;
                break;
            }
        }
        if(ans==0){
            ans=n;
        } 

        cout<<ans<<"\n";

        //wrong approach
        // vector<int> a;
        // for(int i=1;i<=n/4;i++){
        //     if(n%i==0){
        //         a.push_back(i);
        //     }
        // }

        // int ans =0;
        // int l=1,r;
        // for(int i=0;i<a.size();i++){
        //     if(a[i+1]-a[i]==1){
        //         r=i+1;
        //     }
        //     else{
        //         l=i+1;
        //     }
        //     ans = max(ans,r-l+1);
        // }
    
    }

    return 0;

}