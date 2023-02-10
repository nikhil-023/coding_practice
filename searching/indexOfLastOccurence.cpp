#include <iostream>
using namespace std;
int naiveLastOccurence(int arr[],int n,int x){
    for(int i=n-1;i>=0;i--)
        if(arr[i]==x)
        return i;
    return -1;
}
int iterativeBinarySearch(int arr[], int n, int x)
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
            if (mid == n-1 || arr[mid] != arr[mid + 1])
                return mid;
            else
                low = mid + 1;
        }
    }
    return -1;
}
int recursiveBinarySearch(int arr[], int l, int h, int x,int n)
{
    if (l > h)
        return -1;
    int mid = (l + h) / 2;
    if (arr[mid] > x)
        return recursiveBinarySearch(arr, l, mid - 1, x, n);
    else if (arr[mid] < x)
        return recursiveBinarySearch(arr, mid + 1, h, x,n);
    else
    {
        if (mid == n-1 || arr[mid] != arr[mid +1])
            return mid;
        else
            return recursiveBinarySearch(arr, mid+1, h, x,n);
    }
}
int main()
{
    int arr[] = {2, 4, 5, 5, 7, 8, 8, 9, 10, 11};
    cout<<naiveLastOccurence(arr,10,7)<<" "<<recursiveBinarySearch(arr,0,9,7,10)<<" "<<iterativeBinarySearch(arr,10,7);

    return 0;
}