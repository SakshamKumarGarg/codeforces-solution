#include<bits/stdc++.h>
using namespace std;

int main(){
    int x1,x2,x3;
    cin>>x1>>x2>>x3;

    int y = min({x1,x2,x3});
    int z = max({x1,x2,x3});

    cout<<z-y;


    return 0;

}