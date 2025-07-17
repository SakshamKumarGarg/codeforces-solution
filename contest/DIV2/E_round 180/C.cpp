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

    
        int ans =0;


        // binary search with approach (n^2logn)
        for(int i=0;i<n;i++){
            for(int j=0;j<i;j++){
                int x = max(a[n-1],2*a[i]) - a[i] - a[j];
                int k = upper_bound(a.begin(), a.begin() + j, x) - a.begin();
                ans += j - k;
            }
        }

        cout<<ans<<"\n";

        // Wrong approach used 3sum logic here
        // sort(a.begin(),a.end());

        // int max_val = a.back();

        // vector<vector<int>> b;
        // for(int i=0;i<n-2;i++){
        //     if(i>0 && a[i] == a[i-1]){
        //         continue;
        //     }

        //     int left = i + 1;
        //     int right = n - 1;

        //     while(left<right){
        //         int sum = a[i] + a[left]+ a[right];

        //         if(sum > max_val){
        //             b.push_back({a[i],a[left],a[right]});

        //             while(left < right && a[left] == a[left+1]){
        //                 left++;
        //             }
        //             while(left< right && a[right] == a[right-1]){
        //                 right--;
        //             }
        //             left++;
        //             right--;
        //         }
        //         else if(sum < max_val){
        //             left++;
        //         }
        //         else{
        //             right--;
        //         }
        //     }

        // }

        // cout<<b.size()<<"\n";
    }

    return 0;

}