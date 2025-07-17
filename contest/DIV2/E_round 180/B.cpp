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
         
        int ans = -1;
        
        for(int i=1;i+1<n;i++){
            if(a[i-1]<a[i] && a[i]>a[i+1]){
                ans = 1;
                break;
            }
            if (a[i - 1] > a[i] && a[i] < a[i + 1]) {
                ans = 1;
                break;
            }
        }

        for(int i=1;i<n;i++){
            if(abs(a[i-1] - a[i])<=1){
                ans =0;
                break;
            }
        }

        cout<<ans<<"\n";



        //wrong approach
        // int operation =0;
        // while (n>2){

        //     for(int i=n-1;i>=0;i++){
        //         if(abs(a[i]-a[i+1])<=1){
        //             break;
        //         }
        //         else{
        //             if(a[i-2] == min(a[i],a[i-1])){
        //                 operation++;
        //                 break;
        //             }
        //             else if(a[i-2] == max(a[i],a[i-1])){
        //                 operation++;
        //                 break;
        //             }
        //             else if(a[i-2] < max(a[i],a[i-1]) && a[i-2]>min(a[i],a[i-1])){
        //                 operation++;
        //                 break;
        //             }
        //             else if(a[i-2] < min(a[i],a[i-1])){
        //                 int val = min(a[i],a[i-1]);
        //                 a.pop_back();
        //                 a[i-1] = val;
        //                 n--;
        //                 operation++;
        //             }
        //             else if(a[i-2] > max(a[i],a[i-1])){
        //                 int val = max(a[i],a[i-1]);
        //                 a.pop_back();
        //                 n--;
        //                 a[i-1] = val;
        //                 operation++;
        //             }
        //         }
        //     }
        //     n = a.size();
        // }
        

        // cout<<operation<<"\n";

    }

    return 0;

}