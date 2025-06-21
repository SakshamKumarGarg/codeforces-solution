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
        
        map<long long, long long> mp;
        for (long long i = 0; i < n; i++) // n
            mp[a[i]]++;                   // logn

        long long current_highest_freq = 0;
        for (auto i : mp)
            current_highest_freq = max(current_highest_freq, i.second);

        long long operations = 0;
        while (current_highest_freq < n) // log2(n)
        {
            operations++; // to clone the array
            if (current_highest_freq * 2 <= n)
            {
                operations += current_highest_freq; // swap all the copies
                current_highest_freq *= 2;
            }
            else
            {
                operations += n - current_highest_freq; // swap only required copies
                current_highest_freq = n;
            }
        }

        cout << operations << endl;

        // logic correct but wrong approach
        // vector<int> a_copy = a;
        // sort(a_copy.begin(),a_copy.end());
        // int maxcount =1;
        // int k=1;
        // for(int i=0;i<n;i++){
        //     if(a_copy[i]==a_copy[i+1]){
        //         k++;
        //     }
        //     else{
        //         k=0;
        //     }

        //     maxcount = max(maxcount,k);
        // }

        // int operation = 0;
        // int swapping =0;
        // while(maxcount<n){
        //     operation++;
        //     if(maxcount < n-maxcount) swapping += maxcount;
        //     else{
        //         swapping += n-maxcount;
        //     }
        //     maxcount *= 2;
            
        // }

        // operation += swapping;
        // cout<<operation<<"\n";
    }

    return 0;

}