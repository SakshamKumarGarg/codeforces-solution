#include<bits/stdc++.h>
using namespace std;

#define int long long 

const int MOD = 1e9 + 7;
const int INF = LLONG_MAX >> 1; 

int check(vector<int> &a,int n){
    for(int i=0;i<n;i++){
        if(!(a[i]<=a[i+1])) return 0;
    }

    int diff = INT_MAX;
    for(int i=0;i<n-1;i++){
        diff = min(diff,(a[i+1] - a[i]));
    }

    int ans = diff/2 + 1;
    return ans;
}

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

        cout<<check(a,n)<<'\n';

    }

    return 0;

}