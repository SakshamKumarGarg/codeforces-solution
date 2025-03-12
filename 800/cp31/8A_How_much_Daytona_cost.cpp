#include<bits/stdc++.h>
using namespace std;

#define int long long 

const int MOD = 1e9 + 7;
const int INF = LLONG_MAX >> 1; 

string ans(int n,int k,vector<int> &a){
    for(int i=0;i<n;i++){
        if(a[i] == k) return "YES";
    }
    return "NO";
}
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

        cout<<ans(n,k,a)<<"\n";

    }

    return 0;

}