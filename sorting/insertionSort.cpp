#include<iostream>
using namespace std;
void insertionSort(int arr[],int n){
    for(int i=1;i<n;i++)
    {
        int key=arr[i];
        int j=i-1;
        while(j>=0 && arr[j]>key)
        {
            arr[j+1]=arr[j];
            j--;
        }
        arr[j+1]=key;
    }
    for (int i = 0; i < n; i++)
        cout << arr[i] << " ";
}
int main(){
    int n = 10;
    int arr[n] = {1, 4, 9, 284, 48, 29, 81, 0, 65, 13};
    insertionSort(arr,n);
    return 0;
}