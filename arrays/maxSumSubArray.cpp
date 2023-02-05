#include <iostream>
using namespace std;
int maxSumSubarray(int arr[],int n){
    int res=arr[0];
    for(int i=0;i<n;i++){
        int currSum=0;
        for(int j=i;j<n;j++){
            currSum=currSum+arr[j];
            res=max(res,currSum);
        }
    }
    return res;
}
int maxSumEfficient(int arr[],int n){
    int res=arr[0];
    int maxEnding=arr[0];
    for(int i=1;i<n;i++){
        maxEnding=max(maxEnding+arr[i],arr[i]);
        res=max(res,maxEnding);
    }
    return res;
}
int main(){
    int arr[]={2,3,-8,7,-1,2,3};
    cout<<maxSumSubarray(arr,7)<<" "<<maxSumEfficient(arr,7);
    return 0;
}