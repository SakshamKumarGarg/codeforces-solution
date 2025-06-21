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

        // int moves =0;
        // while(n>1){
        //     if(n%6 ==0){
        //         n /= 6;
        //         moves++;
        //     }
        //     else{
        //         n *= 2;
        //         moves++;
        //     }
        // }

        // if(n==1) cout<<moves<<"\n";
        // else{
        //     cout<<-1<<"\n";
        // }
        long long count_of_3 = 0;
        long long count_of_2 = 0;

        while (n > 0 && n % 3 == 0) // log3(n)
        {
            count_of_3++;
            n /= 3;
        }

        while (n > 0 && n % 2 == 0) // log2(n)
        {
            count_of_2++;
            n /= 2;
        }

        if (n > 1 || count_of_2 > count_of_3)
            cout << -1 << endl;
        else
            cout << count_of_3 + (count_of_3 - count_of_2) << endl;
    }

    return 0;

}