#include<iostream>
using namespace std;
void freqInSorted(int arr[],int n){
    int count=1;
    int i;
    for(i=1;i<n;i++){
        
        if(arr[i]!=arr[i-1]){
           cout<<arr[i-1]<<" "<<count<<" ";
           count=1;
        }
        else 
          count++;   
    }
    cout<<arr[i-1]<<" "<<count;

}
int main(){
    int arr[]={10,10,10,25,30,30};
    freqInSorted(arr,6);
    return 0;
}