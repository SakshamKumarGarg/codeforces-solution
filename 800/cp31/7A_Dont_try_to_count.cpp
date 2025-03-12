#include<bits/stdc++.h>
using namespace std;

#define int long long 

const int MOD = 1e9 + 7;
const int INF = LLONG_MAX >> 1; 

int ans(int n, int m, string &x, string &s){
    int count = 0;
    if(x.find(s)!=string::npos){
        return count;
    }

    for(int i=0;i<(m/2)+1;i++){
        string str = x;
        x.append(str);
        count++;
        if(x.find(s)!=string::npos){
            return count;
        }
    }

    return -1;
}
signed main(){

    ios::sync_with_stdio(false); cin.tie(NULL);

    int tc; cin>>tc;

    while(tc--){
        int n,m;
        cin>>n>>m;

        string x;
        cin>>x;
        string s;
        cin>>s;

        cout<<ans(n,m,x,s)<<"\n";
    }

    return 0;

}