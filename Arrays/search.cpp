#include<iostream>
using namespace std;
//linearSearch
int linearSearch(int arr[],int size,int key){
    for(int i=0;i<size;i++){
        if(arr[i]==key){
            return i;
        }
    }
    return -1;
}
//binarySearch
int binarySearch(int arr[],int size,int key){
    int start=0;
    int end=size-1;
    while(start<=end){
        int mid=(start+end)/2;
        if(arr[mid]>key){
            end=mid-1;
        }
        else if(arr[mid]<key){
            start=mid+1;
        }
        else{
            return mid;
        }
    }
    return -1;
}

int main(){
    int size;cin>>size;
    int arr[size];
    for(int i=0;i<size;i++){
        cin>>arr[i];
    }
    int  key;cin>>key;
    /* cout<<linearSearch(arr,size,key); */
    cout<<binarySearch(arr,size,key);
    return 0;
}