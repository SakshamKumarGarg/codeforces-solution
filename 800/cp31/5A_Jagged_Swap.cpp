#include<bits/stdc++.h>
using namespace std;

#define int long long 

const int MOD = 1e9 + 7;
const int INF = LLONG_MAX >> 1; 

string checksort(vector<int> &a,int n){
    for (int j = 0; j < n; j++)
    {
        int count = 0;
        for (int i = 1; i < n - 1; i++)
        {
            if (a[i - 1] < a[i] && a[i] > a[i + 1])
                swap(a[i], a[i + 1]);
                count++;
        }
        if(count==0) break;
    }

    for(int i=0;i<n-1;i++){
        if(a[i]>a[i+1]) return "NO";
    }

    return "YES";
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

        cout<<checksort(a,n)<<endl;

    }

    return 0;

}