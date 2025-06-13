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
        for(int i=0;i<n;i++) cin>>a[i];

        int ans =0;
        int i=0;
        while(i+1<a.size()){
            if(a[i]%2 == 0 && a[i+1]%2 == 0){
                a[i] = a[i]*a[i+1];
                ans++;
                a.erase(a.begin()+i+1);
            }
            else if(a[i]%2 != 0 && a[i+1]%2 != 0){
                a[i] = a[i]*a[i+1];
                ans++;
                a.erase(a.begin()+i+1);
            }
            else{
                i++;
            }
        }

        cout<<ans<<"\n";

    }

    return 0;

}