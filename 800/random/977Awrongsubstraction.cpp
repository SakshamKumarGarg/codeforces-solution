#include<bits/stdc++.h>
using namespace std;

int main(){
    int n,k;
    cin>>n>>k;

    string str = to_string(n);
    // int m = str.length();
    for(int i = 0;i<k;i++){
        int m = str.length();
        if(str[m-1] != '0'){
            str = to_string(stoi(str)-1);
        }
        else{
            str = to_string(stoi(str)/10);
        }
    }

    cout<<str;
    return 0;

}