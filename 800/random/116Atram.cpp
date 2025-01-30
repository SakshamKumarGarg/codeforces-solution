#include<bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cin>>n;

    int capacity = 0;
    int a,b;
    int sum = 0;
    for(int i = 0;i<n;i++){
        cin>>a;
        cin>>b;
        sum = sum + b - a;
        capacity = max(capacity,sum);
    }

    cout<<capacity;
    return 0;

}