#include<bits/stdc++.h>
using namespace std;

#define int long long 

const int MOD = 1e9 + 7;
const int INF = LLONG_MAX >> 1; 

int gcd(int a, int b) {
    return b == 0 ? a : gcd(b, a % b);
}

signed main(){

    ios::sync_with_stdio(false); cin.tie(NULL);

    int tc; cin>>tc;

    while(tc--){
        int a,b;
        cin>>a>>b;
        
        if (a == b) {
            cout << 0 << " " << 0 << "\n";
        } else {
            int d = abs(a - b);
            int moves = min(a % d, d - (a % d));
            cout << d << " " << moves << "\n";
        }
        
        // logical issues
        // int operation1 =1;
        // int operation2 =1;
        // if(a==b) cout<<0<<" "<<0<<"\n";
        // else if(abs(a-b) == 1) cout<<1<<" "<<0<<"\n";
        // else{
        //     int a1 = a;
        //     int b1 = b;
        //     while(a%b != 0 || b%a != 0){
        //         a += 1;
        //         b += 1;
        //         a1 -= 1;
        //         b1 -= 1;
        //         if((a)%(b) != 0 || (b)%(a) != 0){
        //             operation1++;   
        //         }
        //         if(a1%b1 != 0 || b1%a1 !=0){
        //             operation2++;
        //         }
        //     }
        //     if(operation1>=operation2){
        //         cout<<gcd(a,b)<<" "<<operation1<<"\n";
        //     }
        //     else{
        //         cout<<gcd(a1,b1)<<" "<<operation2<<"\n";
        //     }
        // }

    }

    return 0;

}