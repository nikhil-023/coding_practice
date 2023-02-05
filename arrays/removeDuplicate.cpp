#include <bits/stdc++.h>
using namespace std;
int remDups(int arr[],int n){
    int temp[n];
    temp[0]=arr[0];
    int res=1;
    for(int i=1;i<n;i++){
        if(temp[res-1]!=arr[i]){
            temp[res]=arr[i];
            res++;
        }
    }
    for(int i=0;i<res;i++){
        arr[i]=temp[i];
    }
    return res;
}
int remDupsEfficient(int arr[],int n){
    int res=1;
    for(int i=1;i<n;i++){
        if(arr[i]!=arr[res-1]){
           arr[res]=arr[i];
           res++;
        }
        
        }
    return res;
}
int main()
{
    int n;
    cin >> n;
    int arr[n];
    for (int i = 0; i < n; i++)
        cin >> arr[i];
    cout<<remDups(arr, n);
    cout<<endl;
    int arr1[]={1,1,2,2,3 };
    cout<<remDupsEfficient(arr1,5);
    
    return 0;
}