#include<bits/stdc++.h>
using namespace std;
 
#define int long long 
 
const int MOD = 1e9 + 7;
const int INF = LLONG_MAX >> 1; 
 
signed main(){
 
    ios::sync_with_stdio(false); cin.tie(NULL);
 
    int tc; cin>>tc;
 
    while(tc--){
        int k,a,b,x,y;
        cin>>k>>a>>b>>x>>y;
 
        int count =0;
        if(x > y){
            swap(x,y);
            swap(a,b);
        }

        if(k>=a){count += ((k-a)/x)+1;
            k -= count*x;
        }

        if(k>=b)count+= ((k-b)/y) + 1;
    
 
        cout<<count<<"\n";
    }
 
    return 0;
 
}