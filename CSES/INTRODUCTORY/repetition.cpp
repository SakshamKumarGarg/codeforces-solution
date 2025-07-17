#include<bits/stdc++.h>
using namespace std;

#define int long long

signed main(){
    string s;
    cin>>s;

    int n = s.length();
    int ans = 1;
    int cnt =1;
    for(int i=0;i<n;i++){
        if(s[i] == s[i+1]){
            cnt++;
        }
        else{
            cnt = 1;
        }
        ans = max(ans,cnt);
    }

    cout<<ans;

    return 0;

}