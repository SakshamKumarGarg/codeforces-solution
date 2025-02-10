#include<bits/stdc++.h>
using namespace std;

#define int long long 

const int MOD = 1e9 + 7;
const int INF = LLONG_MAX >> 1; 

signed main(){

    ios::sync_with_stdio(false); cin.tie(NULL);

    int tc; cin>>tc;

    while(tc--){
        int n,k;
        cin>>n>>k;

        vector<int> a(n);
        for(int i =0;i<n;i++){
            cin>>a[i];
        }

        vector<int> a_copy = a;
        sort(a_copy.begin(),a_copy.end());

        if(a_copy == a || k>1){
            cout<<"YES \n";
        }
        else{
            cout<<"NO \n";
        }

    }

    return 0;

}
