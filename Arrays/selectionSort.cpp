#include<iostream>
using namespace std;
//find the minimum element in array and swap it with the first element
void ascSelectionSort(int arr[],int n){  // 4 0 8 7 9   ,5
   for(int i=0;i<n-1;i++){
       for(int j=i+1;j<n;j++){
           if(arr[j]<arr[i]){
               int temp=arr[j];
               arr[j]=arr[i];
               arr[i]=temp;
           }
       }
   }
   for(int i=0;i<n;i++){
       cout<<arr[i]<<" ";
   }
   cout<<endl;
   return;
}
void descSelectionSort(int arr[],int n){
    for(int i=0;i<n-1;i++){
        for(int j=i+1;j<n;j++){
            if(arr[j]>arr[i]){
                int temp = arr[j];
                arr[j] = arr[i];
                arr[i] = temp;
            }
        }
    }
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;
    return;
}
int main(){
    int n;cin >> n;
    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    ascSelectionSort(arr,n);
    descSelectionSort(arr,n);
    return 0;
}