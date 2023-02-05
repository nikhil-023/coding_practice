#include <iostream>
using namespace std;
void leaderInArray(int arr[],int n){
    for(int i=0;i<n;i++){
        bool flag=false;
        for(int j=i+1;j<n;j++){
            if(arr[i]<=arr[j]){
              flag=true;
              break;
              }
        }
        if(flag==false)
           cout<<arr[i] <<" ";
    }
}
void leaderInArrayEffective(int arr[],int n){
    int currLeader=arr[n-1];
    cout<<currLeader;
    for(int i=n-2;i>=0;i--){
        if(currLeader<arr[i]){
            currLeader=arr[i];
            cout << " " << currLeader;
        }
    }
}
int main()
{
    int arr[]={0,1,2,-1,9,1,8};
    leaderInArray(arr,7);
    cout<<endl;
    leaderInArrayEffective(arr,7);
    return 0;
}