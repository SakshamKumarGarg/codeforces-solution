#include<bits/stdc++.h>
using namespace std;

#define int long long 

const int MOD = 1e9 + 7;
const int INF = LLONG_MAX >> 1; 

signed main(){

    ifstream fin("mixmilk.in");
    ofstream fout("mixmilk.out");

    int c1,m1,c2,m2,c3,m3;
    fin>>c1>>m1>>c2>>m2>>c3>>m3;

    for(int i=0;i<33;i++){
        int amt1 = min(m1, c2 - m2);
        m1 -= amt1;
        m2 += amt1;
        int amt2 = min(m2, c3 - m3);
        m2 -= amt2;
        m3 += amt2;
        int amt3 = min(m3 , c1 - m1);
        m3 -= amt3;
        m1 += amt3;
    }

    int amt = min(m1, c2-m2);
    m1 -= amt;
    m2 += amt;

    fout<<m1<<" "<<m2<<" "<<m3<<"\n";

    return 0;

}