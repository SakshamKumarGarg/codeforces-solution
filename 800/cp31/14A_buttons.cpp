#include<bits/stdc++.h>
using namespace std;

#define int long long 

const int MOD = 1e9 + 7;
const int INF = LLONG_MAX >> 1; 

signed main(){

    ios::sync_with_stdio(false); cin.tie(NULL);

    int tc; cin>>tc;

    while(tc--){
        int a,b,c;
        cin>>a>>b>>c;


        if(c%2==0){
            if(a>b){
                cout<<"First"<<'\n';
            }
            else{
                cout<<"Second"<<'\n';
            }
        }
        else{
            if(a>=b){
                cout<<"First"<<'\n';
            }
            else{
                cout<<"Second"<<'\n';
            }
        }
        
    }

    return 0;

}