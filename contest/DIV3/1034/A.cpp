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

        if(n%4 != 0){
            cout<<"Alice"<<"\n";

        }
        else{
            cout<<"Bob\n";
        }
    }

    return 0;

}