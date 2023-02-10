#include<iostream>
using namespace std;
void getPeak(int arr[],int n){
    if(n==1)
       cout<<arr[0] ;
    if(arr[0]>=arr[1])  
       cout<<arr[0]<<" ";
    if(arr[n-1]>=arr[n-2]) 
       cout<<arr[n-1];
    for(int i=1;i<n-1;i++)
        if(arr[i]>=arr[i-1] && arr[i]>=arr[i+1])
           cout<< arr[i]<<" ";
}
int efficientGetPeak(int arr[],int n){
    int l=0,h=n-1;
    while(l<=h){
        int mid=(l+h)/2;
        if((mid==0 || arr[mid]>=arr[mid-1]) && (mid==n-1 || arr[mid]>=arr[mid+1]))
              return mid;
        if(mid>0 && arr[mid-1]>=arr[mid])      
            h=mid-1;
        else  
            l=mid+1;    
    }
    return -1;
}
int main(){
    int arr[]={10,20,15,5,23,90,67};
    getPeak(arr,7);
    cout<<"\n";
    cout<< efficientGetPeak(arr,7);
    return 0;
}