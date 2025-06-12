#include<bits/stdc++.h>
using namespace std;

#define int long long 

const int MOD = 1e9 + 7;
const int INF = LLONG_MAX >> 1; 



signed main(){

    ios::sync_with_stdio(false); cin.tie(NULL);

    int tc; cin>>tc;

    while(tc--){
        int n,k,x;
        cin>>n>>k>>x;

        long long minimum_sum = (k * (k + 1)) / 2; // sum of k lowest numbers
        long long maximum_sum = (n * (n + 1)) / 2 - ((n - k) * (n - k + 1)) / 2; // sum of k largest numbers
        if (x >= minimum_sum && x <= maximum_sum)
            cout << "YES" << endl;
        else
            cout << "NO" << endl;



    }

    return 0;

}