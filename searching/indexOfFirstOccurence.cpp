#include <iostream>
using namespace std;
int naiveApproach(int arr[],int n,int x){
    for(int i=0;i<n;i++)
       if(arr[i]==x)
            return i;
    return -1;
}
int iterativeBinarySearch(int arr[],int n,int x){
    int low=0,high=n-1;
    while(low<=high){
    int mid=(low+high)/2;
       if(arr[mid]>x)
          high=mid-1;
       else if(arr[mid]<x)
          low=mid+1;
       else{
          if(mid==0 || arr[mid]!=arr[mid-1])
             return mid;
          else  
            high=mid-1;
       }
    }
    return -1;
}
int recursiveBinarySearch(int arr[],int l,int h,int x){
    if(l>h)
      return -1;
    int mid=(l+h)/2;
    if(arr[mid]>x)
       return recursiveBinarySearch(arr,l,mid-1,x);
    else if(arr[mid]<x)
       return recursiveBinarySearch(arr,mid+1,h,x);
    else{
        if (mid == 0 || arr[mid] != arr[mid - 1])
            return mid;
        else
            return recursiveBinarySearch(arr, l, mid - 1, x);
    }
}
int main(){
    int arr[] = {2, 4, 5, 5, 7, 8, 8, 9, 10, 11};
    cout << naiveApproach(arr, 10, 8) << " " << iterativeBinarySearch(arr, 10, 8) << " " << recursiveBinarySearch(arr, 0, 9, 8);

    
    return 0;
}