#include<bits/stdc++.h>
using namespace std;

void year(int y){
    y++;
    /*                  // set method to solve 
    while(true){
        string str = to_string(y)
        set<char>st;
        bool f1 = true;
        for(auto &i : str){
            if(st.count(i)){
                f1 = false;
                break;
            }
            st.insert(i);
        }
        if(f1){
            cout<<y;
            return;
        }
        y++;
    }*/
    while(true){
        string str = to_string(y);
        bool f1 = true;
        int n = str.size();
        for(int i =0;i<n;i++){
            for(int j = i+1;j<n;j++){
                if(str[i] == str[j]){
                    f1 = false;
                    break;
                }
            }
        }
        if(f1){
            cout<<y;
            return;
        }
        y++;

    }

}

int main(){
    int y;
    cin>>y;

    year(y);
   
return 0;

}