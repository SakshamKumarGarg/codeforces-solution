#include<bits/stdc++.h>
using namespace std;

#define int long long 

const int MOD = 1e9 + 7;
const int INF = LLONG_MAX >> 1; 

signed main(){

    ios::sync_with_stdio(false); cin.tie(NULL);

    int tc; cin>>tc;

    while(tc--){
        int x,n;
        cin>>x>>n;

        int finalpos = 0;
        if(n%4 ==0){
            finalpos = 0;
        }
        else if(n%4 == 1){
            finalpos = -n;
        }
        else if(n%4 == 2){
            finalpos = 1;
        }
        else if(n%4 == 3){
            finalpos = n+1;
        }

        if(x%2==0){
            finalpos = x + finalpos;
        }
        else{
            finalpos = x - finalpos;
        }

        cout<<finalpos<<"\n";

        //TLE
        // int ans =0;
        // int i=0;

        // while(i<=n){
        //     if(x % 2 == 0){
        //         x -= 2*i+1;
        //     }
        //     else{
        //         x += 2*i+1;
        //     }

        //     i += 2;
        // }

        // cout<<x<<"\n";
    }

    return 0;

}