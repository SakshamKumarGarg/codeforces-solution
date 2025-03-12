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

        int negativeOne = 0;
        int positiveOne = 0;

        for(int i=0;i<n;i++){
            if(a[i]==1){
                positiveOne++;
            }
            else{
                negativeOne++;
            }
        }

        int operation = 0;
        
        if(positiveOne>=negativeOne){
            if(negativeOne%2==0){
                cout<<0<<'\n';
            }
            else{
                cout<<1<<'\n';
            }
        }
        else{
            int k;
            k = negativeOne-positiveOne;
            int m = k%2==0 ? k/2 : k/2+1 ;
            negativeOne -= m;
            positiveOne += m;
            if(negativeOne%2==0){
                cout<<m<<"\n";
            }
            else{
                cout<<m+1<<"\n";
            }
        }
        


    }

    return 0;

}