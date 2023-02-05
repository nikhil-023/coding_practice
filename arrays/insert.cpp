#include <bits/stdc++.h>
using namespace std;
int insert(int arr[],int n,int pos,int x){
    if(pos==n)
      return n;
    int idx=pos-1;
    for(int i=n-1;i>=idx;i--) 
        arr[i+1]=arr[i];
    arr[idx]=x;
    return n+1;    
}
int main()
{
    int n;
    cin >> n;
    int arr[n];
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    int x;
    cin >> x;
    int pos;cin>>pos;
    cout << insert(arr, n, 3,9);
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }

    return 0;
}