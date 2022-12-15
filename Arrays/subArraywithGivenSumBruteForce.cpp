#include<iostream>
using namespace std;
int main(){
    int n;cin>>n;
    int arr[n];
    for(int i=0;i<n;i++){
      cin>>arr[i];
    }
    int currSum=0;
    int S;cin>>S;
    for(int i=0;i<n;i++) {
        for(int j=i;j<n;j++){
            currSum+=arr[j];
             if(currSum==S){
                cout<<i<<","<<j;
                break;
            }
        }
        currSum=0;
    } 
    return 0;
}