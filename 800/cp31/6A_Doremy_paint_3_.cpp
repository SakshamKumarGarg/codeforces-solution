#include<bits/stdc++.h>
using namespace std;

#define int long long

const int MOD = 1e9 + 7;
const int INF = LLONG_MAX >> 1; 

string ans(vector<int> &a,int n){
    if(n==2) return "Yes";

    int k = n%2;
    for(int i=0;i<n;i++){
        if(a[i]==a[0]){
            if(i==n-1) return "Yes";
        }
        else{
            break;
        }
    }

    unordered_map<int,int> freq;
    for(int i=0;i<n;i++){
        int m = a[i];
        freq[m] += 1; 
    }

    int s = freq.size();
    if(s>2) return "No";

    for(auto it:freq){
        int key = it.first;
        int value = it.second;

        if(k==0){
            if(value == n/2) return "Yes";
            else    
                return "No";
        }
        else{
            if(value == n/2 || value == ((n/2)+1)) return "Yes";
            else{
                return "No";
            }
        }

    }
    return "No";


}

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
        
        cout<<ans(a,n)<<"\n";

    }

    return 0;

}