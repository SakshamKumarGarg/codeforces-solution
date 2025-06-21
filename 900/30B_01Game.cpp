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

        int count0 = count(s.begin(),s.end(),'0');
        int count1 = s.length() - count0;

        int ans = min(count0,count1);
        if(ans%2 !=0) cout<<"DA"<<"\n";
        else{
            cout<<"NET"<<"\n";
        }

        //incorrect approach
        // int n=s.length();
        // int i=0;
        // int j=1;
        // int ans=0;
        // while(i<n){
        //     if(s[i]!=s[j]){
        //         s.erase(i,j);
        //         ans++;
        //     }
        //     else{
        //         i++;
        //         j++;
        //     }
        // }
        // cout<<ans<<"\n";

        // if(ans %2 !=0) cout<<"DA"<<"\n";
        // else{
        //     cout<<"NET"<<"\n";
        // }
    }

    return 0;

}