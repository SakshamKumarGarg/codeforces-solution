#include<bits/stdc++.h>
using namespace std;

#define int long long 

const int MOD = 1e9 + 7;
const int INF = LLONG_MAX >> 1; 

int dx[] = {-1,1,-1,1} , dy[] = {-1,-1,1,1};

signed main(){

    ios::sync_with_stdio(false); cin.tie(NULL);

    int tc; cin>>tc;

    while(tc--){
        int a,b;
        cin>>a>>b;
        int x_k,y_k;
        cin>>x_k>>y_k;
        int x_q,y_q;
        cin>>x_q>>y_q;


        set<pair<int,int>> king_hits, queen_hits;

        for(int j = 0; j < 4; j++){ // 4
            king_hits.insert({x_k+dx[j]*a, y_k+dy[j]*b}); // log2(8)
            king_hits.insert({x_k+dx[j]*b, y_k+dy[j]*a});

            queen_hits.insert({x_q+dx[j]*a, y_q+dy[j]*b});
            queen_hits.insert({x_q+dx[j]*b, y_q+dy[j]*a});
        }

        int ans = 0;
        for(auto position : king_hits) // 8
            if(queen_hits.find(position) != queen_hits.end()) //log2(8)
                ans++;
        
        //Wrong approach
        // if((x_k<=x_q)  && (y_k <= y_q)){
        //     if((abs(x_k + a) == abs(x_q - b)) && (abs(y_k + b) == abs(y_q - a))){
        //         ans++;
        //         cout<<3<<endl;
        //     }
        //     else if((abs(x_k + b) == abs(x_q - a)) && (abs(y_k + a) == abs(y_q - b))){
        //         ans++;
        //         cout<<4<<endl;
        //     }
        // }
        // else if((x_k>=x_q)  && (y_k <= y_q)){
        //     if((x_k -a == x_q + b) && (y_k + b == y_q - a)){
        //         ans++;
        //     }
        //     else if((x_k - b == x_q + a) && (y_k + a == y_q - b)) ans++;


        // }
        // else if((x_k<=x_q)  && (y_k >= y_q)){
        //     if((x_k + a == x_q - b) && (y_k - b == y_q + a)){
        //         ans++;
        //     }
        //     else if((x_k + b == x_q - a) && (y_k - a == y_q + b)) ans++;


        // }
        // else if((x_k>=x_q)  && (y_k >= y_q)){
        //     if((x_k -a == x_q + b) && (y_k - b == y_q + a)){
        //         ans++;
        //     }
        //     else if((x_k - b == x_q + a) && (y_k - a == y_q + b)) ans++;


        // }

        cout<<ans<<"\n";


        
    }

    return 0;

}