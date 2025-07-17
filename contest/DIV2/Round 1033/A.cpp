#include<bits/stdc++.h>
using namespace std;

#define int long long 

const int MOD = 1e9 + 7;
const int INF = LLONG_MAX >> 1; 
// bool isPerfectSquare(int area) {
//     int x = sqrt(area);
//     return x * x == area;
// }


signed main(){

    ios::sync_with_stdio(false); cin.tie(NULL);

    int tc; cin>>tc;

    while(tc--){
        int l1,b1,l2,b2,l3,b3;
        cin>>l1>>b1>>l2>>b2>>l3>>b3;

        if(b1==b2 && b2 == b3 && l1+l2+l3 == b1){
            cout<<"YES"<<"\n";
        }
        else if(l1==l2 && l2==l3 && b1+b2+b3==l1){
            cout<<"YES\n";
        }
        else if(l1 == l2+l3 && b2==b3 && b1+b2 == l1){
            cout<<"YES\n";
        }
        else if(b1 == b3+b2 && l2==l3 && l1+l2 == b1){
            cout<<"YES\n";
        }
        else{
            cout<<"NO\n";
        }

        //Missed the case and put many unneccassary constraint
        // int area = l1*b1 + l2*b2 + l3*b3;
        // float x = sqrt(area);
        // if(x == (int)x){
        //     if(l1==l2 && l2 == l3){
        //         if(l1 == b1+b2+b3){
        //             cout<<"YES"<<"\n";
        //         }
        //         else if(b1 == l1+l2 && b1 == b2+b3){
        //             cout<<"YES\n";
        //         }
        //         else if(b1 == l1+l2+l3 && b1==b2 && b2==b3){
        //             cout<<"YES"<<"\n";
        //         }
        //         else{
        //             cout<<"NO\n";
        //         }
        //     }
        //     else if(l1 == l2+l3 && l2 == l3){
        //         if(b2 == b3){
        //             cout<<"YES\n";
        //         }
        //         else if(b1 == l1+l2 && b1 == b2+b3){
        //             cout<<"YES"<<"\n";
        //         }
        //         else{
        //             cout<<"NO"<<"\n";
        //         }
        //     } 
        //     else if(l1 == l2+l3 && l2!=l3){
        //         if(b2==b3){
        //             cout<<"YES\n";
        //         }
        //         else{
        //             cout<<"NO"<<"\n";
        //         }
        //     }
        //     else{
        //         cout<<"NO\n";
        //     }

        // }
        // else{
        //     cout<<"NO\n";
        // }
        
    }

    return 0;

}