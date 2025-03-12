#include <iostream>
#include<vector>
#include<algorithm>
using namespace std;

int main(){

    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n; 

        vector<int> ans(n); 

        for (int i = 0; i < n; i++)
        {
            cin >> ans[i]; 
        }

        int sum = 0;
        for(int i=0;i<n;i++){
            sum += ans[i];
        }

        if(sum%2 == 0){
            cout<<"YES"<<'\n';
        }
        else{
            cout<<"NO"<<'\n';
        }
    }

    return 0;
}