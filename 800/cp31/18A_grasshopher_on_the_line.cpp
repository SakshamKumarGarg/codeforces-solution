#include<bits/stdc++.h>
using namespace std;

#define int long long 

const int MOD = 1e9 + 7;
const int INF = LLONG_MAX >> 1; 

signed main(){

    ios::sync_with_stdio(false); cin.tie(NULL);

    int tc; cin>>tc;

    while(tc--){
        int x,k;
        cin>>x>>k;

        if(x%k != 0){
            cout<<1<<"\n";
            cout<<x<<"\n";
        }
        else{
            // int n = x;
            // vector<int> jumps;
            // while(n--){
            //     if(n%k!=0){
            //         jumps.push_back(n);
            //         break;
            //     }
            // }
            // cout<<jumps.size()+1<<'\n';
            // cout<<jumps[0]<<" "<<(x-jumps[0])<<'\n';
            cout<<2<<"\n";
            cout<<1<<" "<<x-1<<"\n";
        }

    }

    return 0;

}