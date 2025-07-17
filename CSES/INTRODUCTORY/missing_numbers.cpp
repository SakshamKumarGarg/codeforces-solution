#include<bits/stdc++.h>
using namespace std;

#define int long long

signed main(){
    int n;
    cin>>n;

    vector<int> a(n-1);
    for(int i=0;i<n-1;i++){
        cin>>a[i];
    }

    sort(a.begin(),a.end());

    int missing;
    for(int i=1;i<=n;i++){
        if(a[i-1] != i){
            missing = i;
            break;
        }
    }

    cout<<missing;

    return 0;

}