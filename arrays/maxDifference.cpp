#include<iostream>
using namespace std;
int maxDiff(int arr[],int n){
    int res=arr[1]-arr[0];
    for(int i=0;i<n-1;i++){
        for(int j=i+1;j<n;j++)
           res=max(res,arr[j]-arr[i]);
    }
    return res;
}
int maxDiffEfficient(int arr[],int n){
    int res = arr[1] - arr[0];
    int minVal=arr[0];
    for(int i=1;i<n;i++){
        res=max(res,arr[i]-minVal);
        minVal=min(minVal,arr[i]);
    }
    return res;
}
int main(){
    
    int arr[]={2, 3,4,9,20};
    cout<<maxDiff(arr,5);
    cout<<"\n";
    cout<<maxDiffEfficient(arr,5);
    return 0;
}