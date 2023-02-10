#include <bits/stdc++.h>
using namespace std;
int getSumforSorted(int arr[], int n, int x)
{
    int r = n - 1, l = 0;
    int count=0;
    while (l <= r)
    {
        if (arr[l] + arr[r] == x){
            count++;
            l++;r--;
        }
        else if (arr[l] + arr[r] > x)
            r--;
        else
            l++;
    }
    return  count;
}
int main(){
    int arr[] = {2, 5, 8, 12, 30};
    cout<<getSumforSorted(arr,5,17);
    return 0;
}