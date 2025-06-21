#include<bits/stdc++.h>
using namespace std;

#define int long long 

const int MOD = 1e9 + 7;
const int INF = LLONG_MAX >> 1; 

signed main(){

    ios::sync_with_stdio(false); cin.tie(NULL);

    int tc; cin>>tc;

    while(tc--){
        int n,m,i,j;
        cin>>n>>m>>i>>j;

        int  x1,y1,x2,y2;

        x1 = 1;
        y1 = 1;
        x2 = n;
        y2 = m;


        cout<<x1<<" "<<y1<<" "<<x2<<" "<<y2<<"\n";
    }

    return 0;

}