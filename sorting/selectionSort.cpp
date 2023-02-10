#include<iostream>
using namespace std;
//naive implementation -not in place
void selectionSort(int arr[],int n){
    int temp[n];
    for(int i=0;i<n;i++){
        int min_ind=0;
        for (int j=1;j<n;j++){
            if(arr[j]<arr[min_ind]){
                min_ind=j;
            }
            temp[i]=arr[min_ind];
        }
        arr[min_ind]=INT_MAX;    
        }
        //copy element back to arr from temp
        for(int i=0;i<n;i++)
            arr[i]=temp[i];
        //print the array
        for(int i=0;i<n;i++)
            cout<<arr[i]<<" ";   
}

//inplace optimised approach
void selectionSort2(int arr[], int n)
{   //n-1 bcz last element already is in its place
        for (int i = 0; i < n-1; i++)
        {
            int min_ind = i;
            for (int j = i + 1; j < n; j++)
            {
            if (arr[j] < arr[min_ind])
                min_ind = j;
            }
            swap(arr[i], arr[min_ind]);
        }
        for(int i=0;i<n;i++)
            cout<<arr[i]<<" ";
}
int main(){
        int n = 10 ;
        int arr[n] = {1, 4, 9, 284, 48, 29, 81, 0, 65, 13};
        selectionSort(arr, n);
        cout<<endl;
        selectionSort2(arr,n);
        return 0;
}