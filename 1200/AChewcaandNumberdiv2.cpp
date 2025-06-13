#include<bits/stdc++.h>
using namespace std;

int convertsmall(string &str){
    int n = str.length();
    if(n==1 && str[0] == '9'){
        return 9;
    }

    for (int i = 1; i < n; i++)
    {
        int t = str[i] - '0';
        if (9 - t < t)
        {
            t = 9 - t;
            str[i] = char(t + '0');
        }
    }

    int k = str[0] - '0';
    if(k<9 && 9-k<k){
        str[0] = char((9-k)+'0');
    }

    long long num = stoll(str);
    return num;
}

int main(){
    long long x;
    cin>>x;
    string str = to_string(x);
    long long ans = convertsmall(str);
    cout<<ans;   

    return 0;
}
