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
        vector<int> b(n);
        for(int i=0;i<n;i++){
            cin>>b[i];
        }
        vector<int> output;
        output.push_back(b[0]);

        int i=0;
        int j =1;
        while(j<n){
            if(b[i]<=b[j]){
                output.push_back(b[j]);
                j++;
                i++;
            }
            else{
                output.push_back(b[j]);
                output.push_back(b[j]);
                j++;
                i++;

            }
        }

        int m=output.size();
        cout<<m<<'\n';
        for(int i=0;i<m;i++){
            cout<<output[i]<<" ";
        }
        cout<<'\n';

    }

    return 0;

}