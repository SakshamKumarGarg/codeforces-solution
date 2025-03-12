#include<bits/stdc++.h>
using namespace std;

#define int long long 

const int MOD = 1e9 + 7;
const int INF = LLONG_MAX >> 1; 

int checkstring(int n,string &s){
    if(s.find("...") != string::npos){
        return 2;
    }
    int count = 0;
    for(int i=0;i<n;i++){
        if(s[i] == '.') count++;
    }
    return count;
}
signed main(){

    ios::sync_with_stdio(false); cin.tie(NULL);

    int tc; cin>>tc;

    while(tc--){
        int n;
        cin>>n;
        string s;
        cin>>s;

        int ans = checkstring(n,s);
        cout<<ans<<"\n";
    }

    return 0;

}