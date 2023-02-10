#include<iostream>
using namespace std;
int iterativeBSearch(int arr[],int n,int x){
    int low=0,high=n-1;
    while(low<=high){
        int mid=(low+high)/2;
        if(arr[mid]==x)
          return mid;
        else if(arr[mid]>x)  
          high=mid-1;
        else
          low=mid+1;
    }
    return -1;
}
int recursiveBSearch(int arr[],int low,int high,int x){
    if(low>high)
      return -1;
    int mid=(low+high)/2  ;
    if(arr[mid]==x)
       return mid;
    else if(arr[mid]>x) 
       return recursiveBSearch(arr,low,mid-1,x);
    else 
       return recursiveBSearch(arr,mid+1,high,x);
}
int main(){
    int arr[]={2,4,5,6,7,8,8,9,6,11};
    cout<<iterativeBSearch(arr,10,8)<<" "<<recursiveBSearch(arr,0,9,8);
    return 0;
}