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

        int px,py,qx,qy;
        cin>>px>>py>>qx>>qy;

        vector<int> a(n);
        int sum = 0;
        for(int i=0;i<n;i++){
            cin>>a[i];
            sum += a[i];
        }

        // int minielement = *min_element(a.begin(),a.end());
        double dist = sqrt((px-qx)**2 + (py-qy)**2);
        if(dist <= sum)

    }

    return 0;

}