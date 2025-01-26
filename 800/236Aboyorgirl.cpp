#include<bits/stdc++.h>
using namespace std;

int main(){
    string str;
    getline(cin,str);

    unordered_map<char,int> freq;
    for(int i = 0;i<str.length();i++){
        freq[str[i]] += 1;
    }

    int n = freq.size();
    if(n%2!=0){
        cout<<"IGNORE HIM!";
    }
    else{
        cout<<"CHAT WITH HER!";
    }
    return 0;

}