#include<bits/stdc++.h>
using namespace std;

#define int long long 

const int MOD = 1e9 + 7;
const int INF = LLONG_MAX >> 1; 

signed ans(vector<int> &a,int n,int x){
    int diff = LLONG_MIN;

    if(n==1) diff = a[0];

    for(int i=0;i<n-1;i++){
        diff = max(diff,(a[i+1]-a[i]));
    }

    diff = max(diff,2*(x-a[n-1]));

    return diff;
    
}

signed main(){

    ios::sync_with_stdio(false); cin.tie(NULL);

    int tc; cin>>tc;

    while(tc--){
        int n,x;
        cin>>n>>x;

        vector<int> a;
        a.push_back(0);
        
        for(int i=0;i<n;i++){
            int point;
            cin>>point;
            a.push_back(point);
        }

        a.push_back(x);

        n = a.size();

        int diff = LLONG_MIN;

        for(int i=1;i<n;i++){
            if(i == n-1){
                diff = max(diff, 2*(a[i] - a[i-1]));
            }
            else{
                diff=max(diff,(a[i]-a[i-1]));
            }   
        }
        
        cout<<diff<<"\n";

    }

    return 0;

}