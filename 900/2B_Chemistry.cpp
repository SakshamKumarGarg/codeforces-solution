#include<bits/stdc++.h>
using namespace std;

#define int long long 

const int MOD = 1e9 + 7;
const int INF = LLONG_MAX >> 1; 

signed main(){

    ios::sync_with_stdio(false); cin.tie(NULL);

    int tc; cin>>tc;

    while(tc--){
        int n,k;
        cin>>n>>k;
        string s;
        cin>>s;

        
        unordered_map<char,int> freq;
        for(int i=0;i<n;i++){
            char ch = s[i];
            freq[ch]++;
        }

        int oddfreq = 0;
        int evenfreq = 0;
        int charfreq = 0;
        for(auto it:freq){
            charfreq++;
            if(it.second %2 == 0) evenfreq++;
            else{
                oddfreq++;
            }
        }

        if(oddfreq <= k + 1) {
            cout << "YES\n";
        } else {
            cout << "NO\n";
        }

    }

    return 0;

}