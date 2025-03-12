#include<bits/stdc++.h>
using namespace std;

#define int long long 

const int MOD = 1e9 + 7;
const int INF = LLONG_MAX >> 1; 


signed main(){

    ios::sync_with_stdio(false); cin.tie(NULL);

    int tc; cin>>tc;

    while(tc--){
        int n,k,x;
        cin>>n>>k>>x;
        
        if(x!=1){
            cout<<"YES"<<'\n';
            vector<int> ans(n,1);
            cout<<ans.size()<<'\n';
            for(int i=0;i<n;i++){
                cout<<ans[i]<<" ";
            }
        }
        cout<<'\n';

        if(x==1){
            if(k==1) cout<<"NO"<<'\n';
            else if(k==2 && n%2==0){
                cout<<"YES"<<"\n";
                vector<int> ans(n/2,2);
                cout<<ans.size()<<"\n";
                for(int i=0;i<n/2;i++){
                    cout<<ans[i]<<" ";
                }
                cout<<"\n";
            }
            else if(k==2 && n%2!=0) cout<<"NO"<<"\n";
            else if(k>2){
                if(n%2!=0){
                    cout<<"YES"<<"\n";
                    vector<int> ans((n-3)/2,2);
                    cout<<ans.size()+1<<"\n";
                    for(int i=0;i<(n-3)/2;i++){
                        cout<<ans[i]<<" ";
                    }
                    cout<<3<<'\n';
                }
                else{
                    cout<<"YES"<<'\n';
                    vector<int> ans(n/2,2);
                    cout<<ans.size()<<"\n";
                    for(int i=0;i<n/2;i++){
                        cout<<2<<" ";
                    }
                    cout<<"\n";
                }
            }
        }
    }

    return 0;

}