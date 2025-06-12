#include<bits/stdc++.h>
using namespace std;

#define int long long 

const int MOD = 1e9 + 7;
const int INF = LLONG_MAX >> 1; 

signed main(){

    ios::sync_with_stdio(false); cin.tie(NULL);

    int tc; cin>>tc;

    while(tc--){
        int a,b,n;
        cin>>a>>b>>n;

        vector<int> x(n);
        for(int i=0;i<n;i++){
            cin>>x[i];
        }


        int maximum_time = b;
        for(int i=0;i<n;i++){
            maximum_time += min(x[i],a-1);
        }

        cout<<maximum_time<<"\n";

    }

    return 0;

}