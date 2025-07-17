#include<bits/stdc++.h>
using namespace std;

#define int long long 

const int MOD = 1e9 + 7;
const int INF = LLONG_MAX >> 1; 

signed main(){

    ios::sync_with_stdio(false); cin.tie(NULL);

    int tc; cin>>tc;

    while(tc--){
        int n,s;
        cin>>n>>s;

        vector<int> x(n);
        for(int i=0;i<n;i++){
            cin>>x[i];
        }

        int maxans = x[n-1];
        int minans = x[0];
        int ans =0;
        if(s >= maxans) ans = s-minans;
        else if(s <= minans) ans = maxans -s;
        else if(abs(s-minans) <= abs(maxans-s)){
            ans = 2*abs(s-minans) + abs(maxans - s); 
        }
        else{
            ans = 2*abs(maxans-s) + abs(s-minans); 
        }

        cout<<ans<<"\n";

    }

    return 0;

}