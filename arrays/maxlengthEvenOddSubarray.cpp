#include<iostream>
using namespace std;
int maxLengthEvenOddSubarray(int arr[],int n){
    int res = 1;
    
    for(int i=0;i<n;i++){
        int currLen = 1;
        for(int j=i+1;j<n;j++){
            if ((arr[j] % 2 == 0 && arr[j - 1] % 2 != 0) || (arr[j] % 2 != 0 && arr[j-1] % 2 == 0))
            currLen++;
            else
               break;    
    }
    res = max(res, currLen);
     }
    return res;
}
int maxLengthEvenOddSubarrayEffective(int arr[],int n){
    int  res=1, currLen=1;
    for(int i=1;i<n;i++){
        if((arr[i]%2==0 && arr[i-1]%2!=0 )||(arr[i]%2!=0 && arr[i-1]%2==0)){
            currLen++;
            res=max(res,currLen);
        }
        else  
            currLen=1;
    }
    return res;
}

int main(){
    int arr[]={1,5,3,4,8,0};
    cout<<maxLengthEvenOddSubarray(arr,6)<<" "<<maxLengthEvenOddSubarrayEffective(arr,6);
    return 0;
}