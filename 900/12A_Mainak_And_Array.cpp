#include<bits/stdc++.h>
using namespace std;

#define int long long 

const int MOD = 1e9 + 7;
const int INF = LLONG_MAX >> 1; 

signed main(){

    ios::sync_with_stdio(false); cin.tie(NULL);

    int tc; cin>>tc;

    while(tc--){
        int N;
        cin>>N;

        vector<int> A(N,0);
        for(int i=0;i<N;i++){
            cin>>A[i];
        }

        int ans =0;
        

        for(int i = 0; i < N; ++i){
            ans = max(ans, A[(i - 1 + N) % N] - A[i]);
        }

        for(int i = 1; i < N; ++i){
            ans = max(ans, A[i] - A[0]);
        }

        for(int i = 0; i < N - 1; ++i){
            ans = max(ans, A[N - 1] - A[i]);
        }

        cout << ans << '\n';
        }

    return 0;

}