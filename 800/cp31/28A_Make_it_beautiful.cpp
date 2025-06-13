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
        for(int i=0; i<n; i++) cin>>a[i];

        sort(a.begin(),a.end());
        int max_no = a[n-1];
        int min_no = a[0];
        if(min_no == max_no){
            cout<<"NO"<<"\n";
        }
        else{
            cout<<"YES"<<"\n";
            cout<<max_no<<" ";
            for(int i=0;i<n-1;i++){
                cout<<a[i]<<" ";
            }
            cout<<"\n";
        }


    }

    return 0;


}