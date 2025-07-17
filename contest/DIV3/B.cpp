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

        string s;
        cin>>s;

        string ans = "NO";
        
        for(int i=1;i<n-1;i++){
            char b = s[i];
            string a = s.substr(0,i);
            string c = s.substr(i+1);
            string con = a+c;
            if(con.find(b) != string::npos){
                ans = "YES";
                break;
            }
        }

        cout<<ans<<"\n";

        
    }

    return 0;

}