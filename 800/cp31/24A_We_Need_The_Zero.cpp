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
        vector<int> a(n);
        for(int i=0;i<n;i++){
            cin>>a[i];
        }

        int total_xor = 0;
        for(int i=0;i<n;i++){
            total_xor ^= a[i];
        }

        if(n%2 == 1){
            cout<<total_xor<<"\n";
        }
        else{
            if(total_xor == 0){
                cout<<total_xor<<"\n";
            }
            else{
                cout<<-1<<"\n";
            }
        }
    }

    return 0;

}