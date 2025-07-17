#include<bits/stdc++.h>
using namespace std;

#define int long long 

const int MOD = 1e9 + 7;
const int INF = LLONG_MAX >> 1; 

signed main(){

    ios::sync_with_stdio(false); cin.tie(NULL);

    int tc; cin>>tc;

    while(tc--){
        int a,x,y;
        cin>>a>>x>>y;

        if(a <= x && a<=y){
            cout<<"YES"<<"\n";
        }
        else if(a>=x && a>=y ){
            cout<<"YES\n";
        }
        else{
            cout<<"NO\n";
        }
    }

    return 0;

}