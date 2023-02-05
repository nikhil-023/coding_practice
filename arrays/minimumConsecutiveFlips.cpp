#include<iostream>
using namespace std;
void minFlips(int arr[],int n){
    int c0=0,c1=0;
    for(int i=0;i<n;i++){
        if(arr[i]==0 && arr[i+1]==1)
            c0++;
        else if(arr[i]==1 && arr[i+1]==0)    
            c1++;
    }
    for(int i=0;i<n;i++){
        if(c0>c1){
            if(arr[i]==1){
                cout <<  i << " ";
            }
                
        }
        else {
            if(arr[i]==0){
                cout << i << " ";
            }
                
    }
}
}
//general fact-2nd group element will always have less than or same as the 1st group 
void efficientMinFlips(int arr[],int n){
    for(int i=1;i<n;i++){
        if(arr[i]!=arr[i-1]){
            if(arr[i]!=arr[0]){
                cout<<"from "<<i<<" to ";
            }
            else{
                cout<<i-1<<endl;
            }
        }
    }
    if(arr[n-1]!=arr[0])
       cout<<n-1<<endl;
    
}
int main(){
    int arr[]={0,0,1,1,0,0,1,1,0,1};
    minFlips(arr,10);
    cout<<endl;
    efficientMinFlips(arr,10);
    return 0;
}