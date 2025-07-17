#include<bits/stdc++.h>
using namespace std;

#define int long long 

const int MOD = 1e9 + 7;
const int INF = LLONG_MAX >> 1; 

bool cmp(int a,int b){
    return a>b;
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

        sort(a.begin(),a.end(),cmp);
        // cout<<a[0];

        double sum = 0;
        for(int i=1;i<n;i++){
            sum += a[i];
        }

        double aver = 1.0 * sum/(n-1);
        double ans = a[0] + aver;

        cout<<fixed<<setprecision(10)<<ans<<"\n";
        // cout<<setprecision(10)<<ans<<"\n";
    }

    return 0;

}