#include<iostream>
using namespace std;

int main(){
    int arr[5][5];
    int r,c;
    for(int i = 0;i<5;i++){
        for(int j = 0;j<5;j++){
            cin>>arr[i][j];
            if(arr[i][j]==1){
                r=i;
                c=j;
            }
        }
        cout<<endl;
    }
    
    int x = abs(2-r);
    int y = abs(2-c);

    cout<<x+y;

    return 0;

}