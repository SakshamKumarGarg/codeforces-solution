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

        int zerocount = 0;
        vector<int> a(n);
        for(int i=0;i<n;i++){
            cin>>a[i];
            if(a[i]==0){
                zerocount++;
            }
        }

        int left = 0;
        int right =n-1;
        bool found = false;

        while(a[left]==0){
            left++;
        }
        while(a[right]==0){
            right--;
        }

        for(int i=left;i<=right;i++){
            if(a[i]==0){
                found = true;
            }
        }

        if(n==zerocount){
            cout<<0<<"\n";
        }
        else if(found == false){
            cout<<1<<"\n";
        }
        else{
            cout<<2<<endl;
        }

            
    }

    return 0;

}