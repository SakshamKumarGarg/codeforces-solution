#include<bits/stdc++.h>
using namespace std;

int main(){
    vector<int> takinginput(8);
    for(int i = 0;i<8;i++){
        cin>>takinginput[i];
    }

    int drink = (takinginput[1]*takinginput[2])/takinginput[6];
    int lime = takinginput[3]*takinginput[4];
    int salt = takinginput[5]/takinginput[7];
    int value = min({drink,lime,salt});
    cout<<value/takinginput[0];
    return 0;

}