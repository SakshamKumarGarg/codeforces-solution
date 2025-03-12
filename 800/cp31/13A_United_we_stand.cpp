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
        vector<int> b;
        vector<int> c;

        sort(a.begin(),a.end());

        b.push_back(a[0]);
        int j =1;

        for(int i=0;i<n-1;i++){
            if(a[i]==a[j]){
                b.push_back(a[j]);
                j++;
            }
            else{
                break;
            }
        }

        while(j<n){
            c.push_back(a[j]);
            j++;
        }

        int lb = b.size();
        int lc = c.size();

        if(lb == 0 || lc == 0){
            cout<<-1<<'\n';
        }
        else{
            cout<<lb<<" "<<lc<<'\n';
            for(int i=0;i<lb;i++){
                cout<<b[i]<<" ";
            }
            cout<<'\n';
            for(int i=0;i<lc;i++){
                cout<<c[i]<<" ";
            }
            cout<<'\n';
        }
    }

    return 0;

}