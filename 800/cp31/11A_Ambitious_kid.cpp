#include<bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cin>>n;
    vector<int> arr(n);
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }

    int diff = INT_MAX;

    for(int i=0;i<n;i++){
    
        diff=min(diff,abs(arr[i]-0));
    }

    cout<<diff;


return 0;

}