#include<bits/stdc++.h>
using namespace std;

#define int long long 

const int MOD = 1e9 + 7;
const int INF = LLONG_MAX >> 1; 

signed main(){

    ios::sync_with_stdio(false); cin.tie(NULL);

    int tc; cin>>tc;

    while(tc--){
        int a,b,c,d;
		cin>>a>>b>>c>>d;
		if(b<=d&&c<=a+d-b) {
			cout<<(d-b)+(a+d-b-c)<<"\n";
		} else {
			cout<<"-1\n";
		}


    }

    return 0;

}