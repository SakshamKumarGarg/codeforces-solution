#include<bits/stdc++.h>
using namespace std;

#define int long long 

const int MOD = 1e9 + 7;
const int INF = LLONG_MAX >> 1; 

signed main(){

    ios::sync_with_stdio(false); cin.tie(NULL);

    int tc; cin>>tc;

    while(tc--){
        string s;
        cin>>s;

        int n = s.size();

        if (s[0] != s[n - 1])
        {
            if (s[0] == 'a')
                s[0] = 'b';
            else
                s[0] = 'a';
        }

        cout << s << endl;
    }

    return 0;

}