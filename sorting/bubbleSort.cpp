#include<iostream>
using namespace std;

void bubbleSort(int arr[],int n){
    for(int i=0;i<n-1;i++)
    for(int j=0;j<n-i-1;j++){
        if(arr[j]>arr[j+1]){
            int temp = arr[j];
        arr[j] = arr[j + 1];
        arr[j + 1] = temp;
    }}
}
//this optimisation is helpful when our array becomes sorted in middle or our array is already sorted
void OptimisedBubbleSort(int arr1[],int n){
    for (int i = 0; i < n - 1; i++){
        bool swapped=false;
        for (int j = 0; j < n - i - 1; j++)
        {
            if (arr1[j] > arr1[j + 1])
            {
                int temp = arr1[j];
                arr1[j] = arr1[j + 1];
                arr1[j + 1] = temp;
                swapped=false;
            }
        }
        if(swapped==false)
           break;
}}
int main(){
    int arr[]={10,8,20,5};
    bubbleSort(arr,4);
    for(int i=0;i<4;i++){
           cout<<arr[i]<<" ";
    }
    cout<<endl;
    int arr1[]={3,5,10,20,40};
    OptimisedBubbleSort(arr1,5);
    for (int i = 0; i < 5; i++)
    {
        cout << arr1[i] << " ";
    }
    return 0;
}