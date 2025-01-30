#include<bits/stdc++.h>
using namespace std;


string checkpair(const string &str,const vector<string> &cards){
    for (const string &card : cards) {
        if (str[0] == card[0] || str[1] == card[1]) {
            return "YES";
        }
    }
    return "NO";
}
int main(){
    string str;
    getline(cin,str);

    vector<string> cards(5);
    for(int i = 0;i<5;i++){
        cin >> cards[i];
    }

    string ans = checkpair(str,cards);
    cout<<ans;
    return 0;

}