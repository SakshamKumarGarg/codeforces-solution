#include<bits/stdc++.h>
using namespace std;

string checklucky(string str, int k){
    int count =0;
     for(int i=0;i<k;i++){
        if(str[i] == '4'){
            count++;
            }
        else if(str[i] == '7'){
            count++;
            }
     }
     if(count == 4 || count == 7) return "YES";
     return "NO";
        
}

int main()
{
    long long n;
    cin>>n;
    
    string str = to_string(n);
    int k= str.length();
    
    string ans = checklucky(str,k);
    cout<<ans;
    
  
    
    return 0;
}