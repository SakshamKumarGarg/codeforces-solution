#include<bits/stdc++.h>
using namespace std;

int main(){
    int k,n,w;
    cin>>k>>n>>w;

    int totalcost = 0;
    for(int i = 1;i<=w;i++){
        totalcost += k*i;
    }

    int borrow = totalcost - n;
    if(borrow>0){
        cout<<borrow;
    }
    else cout<<0;
    return 0;

}