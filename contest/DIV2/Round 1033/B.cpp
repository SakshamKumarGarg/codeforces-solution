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

        int ans =0;
        while(n--){
            int dx,dy,xi,yi;
            cin>>dx>>dy>>xi>>yi;

            if(dx == 1 && dy == 1){
                if(xi == yi) ans++;
            }
            else if(dx == -1 && dy == 1){
                if(xi+yi == s) ans++;
            }
            else if(dx == 1 && dy == -1){
                if(xi+yi == s) ans++;
            }
            else if(dx == -1 && dy == -1){
                if(xi == yi) ans++;
            }
        }

        cout<<ans<<"\n";

    }

    return 0;

}