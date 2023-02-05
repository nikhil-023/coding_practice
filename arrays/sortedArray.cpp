#include <bits/stdc++.h>
using namespace std;
bool isSorted(int arr[],int n){
    for(int i=0;i<n;i++){
        for(int j=i+1;j<n;j++)
            if(arr[j]<arr[i])
                 return false;
    }
    return true;
}
bool isSortedEffecient(int arr[],int n){
    
    for(int i=1;i<n;i++){
        if(arr[i]<arr[i-1])
           return false;
    }
    return true;
}
int main()
{
    int n;
    cin >> n;
    int arr[n];
    for (int i = 0; i < n; i++)
        cin >> arr[i];
    cout<<isSorted(arr,n);
    cout<<"\n";
    cout<<isSortedEffecient(arr,n);
    return 0;
}