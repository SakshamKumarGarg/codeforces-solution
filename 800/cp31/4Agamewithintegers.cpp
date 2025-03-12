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

        for(int i=0;i<10;i++){
            int k = n-1;
            int m = n+1;
            if(k%3 == 0 || m%3 == 0){
                cout<<"First"<<"\n";
                break;
            }
            else{
                cout<<"Second"<<"\n";
                break;
            }
        }

    }

    return 0;

}