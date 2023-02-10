#include <bits/stdc++.h>
using namespace std;
bool getSumforUnsorted(int arr[],int n,int x){
    for(int i=0;i<n;i++){
        for(int j=i+1;j<n;j++)
        if(arr[i]+arr[j]==x)
        return true;
    }
    return false;
}
bool getSumforSorted(int arr1[],int n,int x){
    int r=n-1,l=0;
    while(l<=r){
        if (arr1[l] + arr1[r] == x)
            return true;
        else if (arr1[l] + arr1[r] > x)
            r--;
        else 
           l++;    
    }
    return -1;
}
bool getTripletSum(int arr2[],int n,int x){
    for(int i=0;i<n;i++)
        for(int j=i+1;j<n;j++)
           for(int k=j+1;k<n;k++)
               if(arr2[i]+arr2[j]+arr2[k]==x)
                   return true;
    return false;              
}
bool isPair(int arr2[], int l, int r, int x)
{
    while (l <= r)
    {
        if (arr2[l] + arr2[r] == x)
            return true;
        else if (arr2[l] + arr2[r] > x)
            r--;
        else
            l++;
    }
    return -1;
}
bool getTripletSumEfficient(int arr2[],int n,int x){
    for(int i=0;i<n;i++)
        if(isPair(arr2,i+1,n-1,x-arr2[i]))
           return true;
    return false;       
}
bool getTripletSumforunsorted(int arr[], int n, int x)
{
    sort(arr, arr + n);
    return getTripletSumEfficient(arr, 7, 17);
}

int main(){
    int arr[]={3,5,9,2,8,10,11};
    int arr1[]={2,5,8,12,30};
    int arr2[]={2,3,4,8,9,20,40};
    cout<<getSumforUnsorted(arr,7,17)<<" ";
    cout<<getSumforSorted(arr1,5,17)<<" ";
    cout << getTripletSum(arr2, 7, 32) << " " << getTripletSumEfficient(arr2, 7, 32)<<" ";
    cout << getTripletSumforunsorted(arr,7,17) ;
    return 0;
}