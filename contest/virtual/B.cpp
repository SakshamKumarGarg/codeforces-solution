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

        vector<int> a(n);
        for(int i=0;i<n;i++){
            a[i] = i+1;
        }

        swap(a[1],a[n-1]);

        for(int i=0;i<n;i++){
            cout<<a[i]<<" ";
        }

        cout<<"\n";

    }

    return 0;

}