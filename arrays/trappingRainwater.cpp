#include<bits/stdc++.h>
using namespace std;
int getWater(int arr[],int n){
    int res=0;
    for(int i=1;i<n;i++){
          int lMax=arr[i];
          for(int j=0;j<i;j++)
             lMax=max(lMax,arr[j]);
          int rMax=arr[i];
          for(int j=i+1;j<n;j++)
             rMax=max(rMax,arr[j]);
          res=res+(min(rMax,lMax)-arr[i]) ;     
    }
    return res;
}
int getWaterOptimesed(int arr[],int n){
    int res=0;
    int lmax[n],rmax[n];
    lmax[0]=arr[0];
    for(int i=1;i<n;i++)
       lmax[i]=max(arr[i],lmax[i-1]);
    rmax[n-1]=arr[n-1];
    for(int i=n-2;i>=0;i--)   
       rmax[i]=max(arr[i],rmax[i+1]);
    for(int i=1;i<n-1;i++)   
       res=res+(min(lmax[i],rmax[i])-arr[i]);
    return res;   
}
int main(){
    int arr[]={5,0,6,2,3};
    cout<<getWater(arr,5)<<" "<<getWaterOptimesed(arr,5);
    return 0;

}