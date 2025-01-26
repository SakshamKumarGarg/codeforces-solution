#include<bits/stdc++.h>
using namespace std;

string checkeasy(int n){
    for(int i = 0;i<n;i++){
        int a;
        cin>>a;
        if(a == 1){
            return "HARD";
        }
    }
    return "EASY";
}

int main(){
    int n;
    cin>>n;

    cout<<checkeasy(n);
    return 0;

}