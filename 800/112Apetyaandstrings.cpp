#include<iostream>
#include<string>
#include<algorithm>
using namespace std;

int main(){
    string s1;
    string s2;
    getline(cin,s1);
    getline(cin,s2);
    transform(s1.begin(),s1.end(),s1.begin(), ::tolower);
    transform(s2.begin(),s2.end(),s2.begin(), ::tolower);
    cout<<s1.compare(s2);
     // Compare the strings lexicographically
    // if (s1 < s2) {
    //     cout << -1 << endl; // s1 is less than s2
    // } else if (s1 > s2) {
    //     cout << 1 << endl; // s1 is greater than s2
    // } else {
    //     cout << 0 << endl; // s1 is equal to s2
    // }

    return 0;

}