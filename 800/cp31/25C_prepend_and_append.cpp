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
        for(int i=0;i<n;i++){
            char ch;
            cin>>ch;
            s.push_back(ch);
        }

        int l = 0;
        int h = n-1;
        while(l<=h){
            if(s[l]!=s[h]){
                l++;
                h--;
                if(l>h){
                    cout<<0<<"\n";
                    break;
                }
                
            }
            else{
                cout<<(h-l+1)<<"\n";
                break;
            }
            
        }
        
    }

    return 0;

}