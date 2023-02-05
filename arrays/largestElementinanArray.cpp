#include<bits/stdc++.h>
using namespace std;
int getLargest(int arr[],int n){
    for(int i=0;i<n;i++){
        bool flag=true;
        for(int j=i+1;j<n;j++){
           if(arr[i]<arr[j]){
                   flag=false;
                   break;
           }
    }
    if (flag == true)
        return i;
    }
    return -1;
}
int getLargestOptimised(int arr[],int n){
    int res=0;
    for(int i=1;i<n;i++){
        if(arr[i]>arr[res])
          res=i;
    }
    return res;
}
int secondLargest(int arr[],int n){
    int largest=getLargestOptimised(arr,n);
    int res=-1;
    for(int i=0;i<n;i++){
        if(arr[i]!=arr[largest]){
            if(res==-1)
               res=i;
            else if(arr[i]>arr[res]) 
               res=i;  
        }
    }
    return res;
}
int secondLargesteffecient(int arr[],int n){
    int res=-1,largest=0;
    for(int i=1;i<n;i++){
        if(arr[i]>arr[largest]){
             res=largest;
             largest=i;
        }
        else if(arr[i]!=arr[largest]){
            if(res==-1 || arr[i]>arr[res])
               res=i;
        }
    }
    return res;
}
int main(){
    int arr[]={5,8,20,10};
    cout<<getLargest(arr,4);
    cout<<endl;
    cout<<getLargestOptimised(arr,4);
    cout << endl;
    cout<<secondLargest(arr,4);
    cout << endl;
    cout<<secondLargesteffecient(arr,4);
    return 0;
}