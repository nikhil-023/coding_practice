#include<bits/stdc++.h>
using namespace std;
void merge(int a[], int l, int m,int r)
{   
    int n1=m-l+1,n2=r-m;//size of left and right array
    int left[n1],right[n2];
    //storing element in right and left array
    for (int i = 0; i <n1; i++)
       left[i]=a[l+i] ;
    for (int i = 0; i < n1; i++)
        right[i]=a[m + i+1] ;

    int i = 0, j = 0,k=l; // i for left , j for right, k for a
    while (i < n1 && j < n2)
    {
        if (left[i] <= right[j])
        {
            a[k]=left[i];
            i++;k++;
        }
        else
        {
            a[k] = right[j];
            j++;k++;
        }
    }
    while (i < n1)
    {
        a[k] = left[i];
        i++;k++;
    }
    while (j < n2)
    {
        a[k] = right[j];
        j++;k++;
    }

}
void mergeSort(int arr[],int l,int r)
{
    if(r>l)
    {
        int m=l+(r-l)/2;
        mergeSort(arr,l,m);
        mergeSort(arr, m+1, r);
        merge(arr,l,m,r);
    }
}
int main()
{
    int n = 10;
    int a[n] = {1, 4, 9, 284, 48, 29, 81, 0, 65, 13};
    mergeSort(a,0,n-1);
    for (int x : a)
        cout << x << " ";
}