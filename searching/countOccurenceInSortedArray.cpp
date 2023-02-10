#include <iostream>
using namespace std;
int naiveCount(int arr[],int n,int x){
    int count=0;
    for(int i=0;i<n;i++)
    if(arr[i]==x)
       count++;
    return count;
}
int firstOcc(int arr[], int n, int x)
{
    int low = 0, high = n - 1;
    while (low <= high)
    {
        int mid = (low + high) / 2;
        if (arr[mid] > x)
            high = mid - 1;
        else if (arr[mid] < x)
            low = mid + 1;
        else
        {
            if (mid == 0 || arr[mid] != arr[mid - 1])
                return mid;
            else
                high = mid - 1;
        }
    }
    return -1;
}
int lastOcc(int arr[], int n, int x)
{
    int low = 0, high = n - 1;
    while (low <= high)
    {
        int mid = (low + high) / 2;
        if (arr[mid] > x)
            high = mid - 1;
        else if (arr[mid] < x)
            low = mid + 1;
        else
        {
            if (mid == n - 1 || arr[mid] != arr[mid + 1])
                return mid;
            else
                low = mid + 1;
        }
    }
    return -1;
}
int efficientCount(int arr[], int n,int x){
    int first = firstOcc(arr,n,x);
    if(first==-1)
           return  0;
    else 
          return (lastOcc(arr,n,x)-first+1);
}
int main(){
    int arr[] = {2, 4, 5, 5, 7, 8, 8, 9, 10, 11};
    cout << naiveCount(arr, 10, 8) << " " <<efficientCount(arr,10,8);

    return 0;
}