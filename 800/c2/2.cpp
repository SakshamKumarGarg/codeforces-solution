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

        vector<int> a(2*n);
        for(int i=0;i<2*n;i++){
            cin>>a[i];

        }

        int oddcnt = 0;
        int evencnt = 0;
        for(int i=0;i<2*n;i++){
            if(a[i]%2 == 0){
                evencnt++;
            }
            else{
                oddcnt++;
            }
        }

        if(oddcnt==evencnt) cout<<"Yes\n";
        else{
            cout<<"No\n";
        }
    }

    return 0;

}