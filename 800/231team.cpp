#include<iostream>
using namespace std;

int main(){
    int n;
    cin>>n;
    int arr[n][3];
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            cin>>arr[i][j];
        }
        cout<<endl;
    }
    int count = 0;
    int k=0;
    for(int i = 0;i<n;i++){
        for(int j = 0;j<3;j++){
            if(arr[i][j] == 1){
                count++;
                if(count>=2){
                    k++;
                    count =0;
                }
            }
        }

        count = 0;
    }

    cout<<k;
    
    return 0;

}