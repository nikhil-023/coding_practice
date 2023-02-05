#include <bits/stdc++.h>
using namespace std;
int getLargestOptimised(int arr[], int n)
{
    int largest = 0;
    for (int i = 1; i < n; i++)
    {
        if (arr[i] > arr[largest])
            largest = i;
    }
    return largest;
}
int secondlLargest(int arr[],int n){
    int largest=getLargestOptimised(arr,n);
    int res=-1;
    for(int i=0;i<n;i++){
        if(arr[i]!=arr[largest]){
            if(res==-1)//corner case
                res=i;
            else if(arr[i]>arr[res])    
               res=i;
        }    
    }
    return res;
}
int secondLargestOptimised(int arr[],int n){
    int res=-1,largest=0;
    for(int i=1;i<n;i++){
        if(arr[i]>arr[largest]){
            res=largest;
            largest=i;
        }
        else if(arr[i]!=arr[largest])
           if(res==-1 || arr[i]>arr[res])//corner case when till now you had not update the res(second largest element)
              res=i;
    }
    return res;
}
int main()
{
    int arr[] = {5, 8, 20, 10};
    cout<<secondlLargest(arr,4)<<" "<<secondLargestOptimised(arr,4);

    return 0;
}