//rules
//1.array size >=2
//2.only one element repeats{any no of times}
//3.all the elements from 0 to max(arr) are present

#include <bits/stdc++.h>
using namespace std;
int superNaiveApproach(int arr[],int n){
    for(int i=0;i<n;i++){
        for(int j=i+1;j<n;j++)
           if(arr[i]==arr[j])
               return arr[i]; 
    }
    return -1;
}
int naiveSoln(int arr[],int n){
    sort(arr,arr+n);
    for(int i=0;i<n;i++)
        if(arr[i]==arr[i+1])
           return arr[i];
    return -1;
}
int efficientSoln(int arr[],int n){
    bool visited[n]={false};
    for(int i=0;i<n;i++){
        if(visited[arr[i]])
           return arr[i];
        visited[arr[i]]=true;
    }
    return -1;
}
int moreEfficient(int arr[],int n){
    int slow=arr[0],fast=arr[0];
    do{
        slow=arr[slow];
        fast=arr[arr[fast]];
    }while(slow!=fast);
    slow=arr[0];
    while(slow!=fast){
        slow=arr[slow];
        fast=arr[fast];
    }
    return slow;
}
int main(){
    int arr[]={0,2,1,3,2,2};
    int arr1[]={1,3,2,4,6,5,7,3};
    cout << superNaiveApproach(arr, 6) << " " << naiveSoln(arr, 6) <<" "<<efficientSoln(arr,6)<<" "<<moreEfficient(arr1,6);
    return 0;
}