#include<bits/stdc++.h>
using namespace std;

#define int long long 

const int MOD = 1e9 + 7;
const int INF = LLONG_MAX >> 1; 

signed main(){

    ios::sync_with_stdio(false); cin.tie(NULL);

    int tc; cin>>tc;

    while(tc--){
        int s1,s2,s3,s4;
        cin>>s1>>s2>>s3>>s4;

        if((s1 > s3 && s1 > s4 ) && (s2>s3 && s2 > s4)){
            cout<<"NO\n";
        }
        else if((s3 > s1 && s3 > s2 ) && (s4 > s1 && s4 > s2)){
            cout<<"NO\n";
        }
        else{
            cout<<"YES\n";
        }

    }

    return 0;

}