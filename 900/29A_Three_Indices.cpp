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

        vector<int> a(n+1,0);
        for(int i=1;i<=n;i++){
            cin>>a[i];
        }

        int i =0;
        int b=0;
        int c=0;
        for(int j=2;j<=n;j++){
            if(a[j] > a[j-1] && a[j] > a[j+1]){
                i = j-1;
                b = j;
                c = j+1;
                break;
            }
        }

        if(i==b) cout<<"NO\n";
        else{
            cout<<"YES\n";
            cout<<i<<" "<<b<<" "<<c<<"\n";
        }

    }

    return 0;

}