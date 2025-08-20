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

        int n = s.length();
        int tcnt=0;
        for(int i=0;i<n;i++){
            if(s[i] == 'T'){
                tcnt++;
            }
        }

        string ans = "";
        for(int i=0;i<tcnt;i++){
            ans += "T";
        }
        for(int i=0;i<n;i++){
            if(s[i]!='T'){
                ans+=s[i];
            }
        }

        cout<<ans<<"\n";
    }

    return 0;

}