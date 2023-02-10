#include <iostream>
using namespace std;
int naiveSearch(int arr[],int x){
    int i=0;
    while(true){
        if(arr[i]==x)
            return i;
        if(arr[i]>x)    
           return -1;
        i++;   
    }
}
int iterativeBSearch(int arr[], int l,int h, int x)
{
    
    while (l <= h)
    {
        int mid = (l + h) / 2;
        if (arr[mid] == x)
            return mid;
        else if (arr[mid] > x)
            h = mid - 1;
        else
            l = mid + 1;
    }
    return -1;
}
int efficientSearch(int arr[],int x){
    if(arr[0]==x)
       return 0;
    int i=1;
    while(arr[i]<x)   
       i=i*2;
    if(arr[i]==x)
    return i;
    return iterativeBSearch(arr,i/2+1,i-1,x);
}
int main()
{
    int arr[] = {2, 4, 5, 5, 7, 8, 8, 9, 10, 11};
    cout << naiveSearch(arr, 8) << " " << efficientSearch(arr,  8);

    return 0;
}