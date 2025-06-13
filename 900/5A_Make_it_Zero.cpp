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

        if(n%2!=0){
            cout << "4" << '\n';
            cout << "1 " << n - 1 << '\n';
            cout << "1 " << n - 1 << '\n';
            cout << n - 1 << ' ' << n << '\n';
            cout << n - 1 << ' ' << n << '\n';
        }
        else{
            cout<<2<<"\n";
            cout<<1<<" "<<n<<"\n";
            cout<<1<<" "<<n<<"\n";
            

        }
    }

    return 0;

}