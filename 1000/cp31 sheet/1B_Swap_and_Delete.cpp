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
        int onecount =0;
        int zerocount =0;
        for(int i=0;i<s.size();i++){
            if(s[i]=='0'){
                zerocount++;
            }
            else{
                onecount++;
            }
        }

        int lengthof_t = 0;

        for(int i=0;i<s.size();i++){
            if(s[i] == '0' && onecount>0){
                onecount--;
                lengthof_t++;
            }
            else if(s[i] == '1' && zerocount >0){
                zerocount--;
                lengthof_t++;
            }
            else{
                break;
            }
        }

        cout<<n-lengthof_t<<"\n";
        
    }

    return 0;

}