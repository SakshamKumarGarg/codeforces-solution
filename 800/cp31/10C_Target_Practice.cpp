#include<bits/stdc++.h>
using namespace std;

#define int long long 

const int MOD = 1e9 + 7;
const int INF = LLONG_MAX >> 1; 

int solve(char board[][10], int arr[][10]){
    int x,y;
    int sum = 0;
    for(int i=0;i<10;i++){
        for(int j=0;j<10;j++){
            if(board[i][j] == 'X'){
                x=i;
                y=j;

                sum = sum + arr[x][y];
            }

        }

    }

    return sum;

}

signed main(){

    ios::sync_with_stdio(false); cin.tie(NULL);

    int tc; cin>>tc;

    while(tc--){
        char board[10][10];
        for(int i=0;i<10;i++){
            for(int j=0;j<10;j++){
                cin>>board[i][j];
            }
        }

        int arr[10][10] = {
            {1,1,1,1,1,1,1,1,1,1},
            {1,2,2,2,2,2,2,2,2,1},
            {1,2,3,3,3,3,3,3,2,1},
            {1,2,3,4,4,4,4,3,2,1},
            {1,2,3,4,5,5,4,3,2,1},
            {1,2,3,4,5,5,4,3,2,1},
            {1,2,3,4,4,4,4,3,2,1},
            {1,2,3,3,3,3,3,3,2,1},
            {1,2,2,2,2,2,2,2,2,1},
            {1,1,1,1,1,1,1,1,1,1},
        };
    

        cout<<solve(board,arr)<<"\n";

       

    }

    return 0;

}