#include<bits/stdc++.h>
using namespace std;

#define int long long 

const int MOD = 1e9 + 7;
const int INF = LLONG_MAX >> 1; 

signed main(){

    ios::sync_with_stdio(false); cin.tie(NULL);

    int tc; cin>>tc;

    while(tc--){
        int x;
        cin>>x;

        string s = to_string(x);
        
        int minans = INT_MAX;
        for(int i=0;i<s.length();i++){
            int n = s[i] - '0';
            minans = min(minans,n);
        }

        cout<<minans<<"\n";
    }

    return 0;

}