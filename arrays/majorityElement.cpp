// the element coming more than n/2 time is the majority element
#include<iostream>
using namespace std;
int majElem(int arr[],int n){
    for(int i=0;i<n;i++){
        int count=1;
        for(int j=i+1;j<n;j++)
           if(arr[i]==arr[j])
              count++;
        if(count>n/2)
           return i;
    }
    return -1;
}
//Moore voting algorithm
int majElemEfficient(int arr[],int n){
    int res=0,count=1;
    for(int i=1;i<n;i++){
        if(arr[i]==arr[res])
            count++;
        else 
           count--;
        if(count==0){  
           res=i;   
         }
        count=0;
        for(int i=0;i<n;i++)
           if(arr[res]==arr[i])
              count++;
        if(count<=n/2)      
            res=-1 ;
         }
      return res;   
}
int main(){
    int arr[]={8,3,4,8,8};
    cout<<majElem(arr,5)<<" "<<majElemEfficient(arr,5);
    return 0;

}