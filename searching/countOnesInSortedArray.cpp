#include <iostream>
using namespace std;
int naiveCount(int arr[],int n,int x){
    int i;
    for( i=0;i<n;i++){
        if(arr[i]==x)
           break;
    }
    return n-i;
}

int efficientCountOnes(int arr[],int n,int x){
    int l=0,h=n-1;
    int mid=(l+h)/2;
    while(l<=h){
        if(arr[mid]==0)
           l=mid+1;
        else{
            if(mid==0 || arr[mid]!=arr[mid-1])
                return n-mid;
            else
                h=mid-1;
        }
    }
    return 0;
}
int main()
{
    int arr[] = {0,0,0,1,1,1,1};
    cout<<naiveCount(arr,7,1)<<" "<<efficientCountOnes(arr,7,1);
   

    return 0;
}