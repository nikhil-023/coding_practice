#include<iostream>
using namespace std;
//compare two adjacent element and swap if they are in wrong order
void ascBubbleSort(int arr[],int n){
   for(int i=0;i<n-1;i++){                     
       for(int j=0;j<n-i-1;j++){          
           if((arr[j]>arr[j+1])){
           int temp=arr[j];
           arr[j]=arr[j+1];
           arr[j+1]=temp;
           }
       }
   }
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;
    return;
}
void descBubbleSort(int arr[],int n){
    for(int i=0;i<n-1;i++){
        for(int j=0;j<n-i-1;j++){
            if ((arr[j] < arr[j + 1]))
            {
                int temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
            }
        }
    }
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }
    return;
}

int main(){
    int n;cin>>n;
    int arr[n];
    for(int i=0;i<n;i++){// 3 1 4  2 9
        cin>>arr[i];
    }
    ascBubbleSort(arr,n);
    descBubbleSort(arr,n);
    
    return 0;
}