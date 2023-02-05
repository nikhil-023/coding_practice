#include<iostream>
using namespace std;
int maxSumk(int arr[],int n,int k){
    int res=INT_MIN;
    for(int i=0;i+k-1<n;i++){
        int currSum=0;
        for(int j=0;j<k;j++){
            currSum+=arr[i+j];
        }
        res=max(res,currSum);
    }
    return res;
}
//window sliding technique
int maxSumEfficient(int arr[],int n,int k){
    int curr=0;
    for(int i=0;i<k;i++){
        curr+=arr[i];
    }
    int res=curr;
    for(int i=k;i<n;i++){
         curr+=arr[i]-arr[i-k];
         res=max(res,curr);
    }
    return res;
}
int main(){
    int arr[]={1,8,30,-5,20,7};
    cout<<maxSumk(arr,6,3)<<" "<<maxSumEfficient(arr,6,3);
    return 0;
}