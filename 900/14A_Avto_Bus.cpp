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

        if(n<4 || (n % 2 !=0)) cout<<-1<<"\n";
        else{
            long long min_buses = ceil(n * 1.0 / 6); // 1
            long long max_buses = n / 4;
            cout << min_buses << " " << max_buses << '\n';
        }
    }

    return 0;

}