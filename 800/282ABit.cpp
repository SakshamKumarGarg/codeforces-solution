#include<iostream>
using namespace std;

int main(){
    int n;
    cin>>n;
    int X = 0;
    for(int i =0;i<n;i++){
        if(n%2==0){
            X++;
        }
        else{
            --X;
        }
    }
    cout<<X;
return 0;

}