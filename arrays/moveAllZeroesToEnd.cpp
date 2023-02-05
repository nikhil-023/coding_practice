#include<iostream>
using namespace std;
void moveAllZeroesToEnd(int arr[],int n){
    for(int i=0;i<n;i++){
        if(arr[i]==0){
            for(int j=i+1;j<n;j++){
                if(arr[j]!=0){
                    int temp=arr[i];
                    arr[i]=arr[j];
                    arr[j]=temp;
                }
            }
        }
    }
}
void moveZeroesEfficient(int arr[],int n){
    int count=0;
    for(int i=0;i<n;i++){
        if(arr[i]!=0){
            int temp=arr[i];
            arr[i]=arr[count];
            arr[count]=temp;
            count++;
        }
    }
}
int main(){
    int n;cin>>n;
    int arr[n];
    for (int i = 0; i < n; i++)
        cin >> arr[i];
    moveAllZeroesToEnd(arr,n);
    for (int i = 0; i < n; i++)
        cout << arr[i]<<" ";
    cout<<endl;
    int arr1[]={0,1,0, 6,7,0,9};
    moveZeroesEfficient(arr1,7);
    for (int i = 0; i < 7; i++)
        cout << arr1[i] << " ";
    return 0;
}
