#include<bits/stdc++.h>
using namespace std;

#define int long long 

const int MOD = 1e9 + 7;
const int INF = LLONG_MAX >> 1; 

string solve(vector<int> &a,int n,int x){
    int i=0;
    int k=x;
    while(i<n){
        if(a[i] == 1){
            if(x>0){
                x--;
            }
            else{
                return "NO";
            }
        }
        else{
            if(x<k){
                x--;
            }
            
        }
        i++;
    }

    return "YES";

}

signed main(){

    ios::sync_with_stdio(false); cin.tie(NULL);

    int tc; cin>>tc;

    while(tc--){
        int n,x;
        cin>>n>>x;

        vector<int> a(n);
        for(int i=0;i<n;i++){
            cin>>a[i];
        }
        
        string ans = solve(a,n,x);
        cout << ans << "\n";




    }

    return 0;

}