#include<iostream>
using namespace std;
//this is for all type of matrix
int main(){
    int n,m;cin>>n>>m;
    int arr[n][m];
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            cin>>arr[i][j];
        }
    }
    for(int j=0;j<m;j++){
        for(int i=0;i<n;i++){
            cout<<arr[i][j]<<" ";
        }
        cout<<endl;
    }
    return 0;
}