#include<bits/stdc++.h>
using namespace std;

#define int long long 

const int MOD = 1e9 + 7;
const int INF = LLONG_MAX >> 1; 

signed main(){

    ios::sync_with_stdio(false); cin.tie(NULL);

    int tc; cin>>tc;

    while(tc--){
        int y,x;
        cin>>y>>x;

        int n = max(x,y);
        int k =1;
        vector<vector<int>> a(n, vector<int> (n));
        for(int i=0;i<n;i++){
            if(i%3==0){
                for(int j=0;j<=i+1;j++){
                    a[i][j] = k;
                    k++;
                }
                for(int j=i+1;j>=0;j--){
                    a[j][i+1] = k;
                    k++;
                }
            }
            else if(i%3==1){
                for(int j=i;j>=0;j--){
                    a[i][j] = k;
                    k++;
                }
                for(int j)
            }
            else{
                for(int j=i;j>=0;j--){
                    a[i][j] = k;
                    k++;
                }
            }
        }
    }

    return 0;

}