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

        int count=2;
        int ans=2;
        for (int i = 1; i < s.length(); i++)
        {
            char ch = s[i-1];
            if(s[i]==ch){
                ans++;

            }
            else{
                ans=2;
            }
            count = max(count,ans);
        }
        

        cout<<count<<"\n";
    }

    return 0;

}