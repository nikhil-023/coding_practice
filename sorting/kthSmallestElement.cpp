#include<bits/stdc++.h>
using namespace std;
int hPartition(int a[], int l, int h)
{
    int pivot = a[l]; // always first element
    int i = l - 1, j = h + 1;
    while (true)
    {
        do
        {
            i++;
        } while (a[i] < pivot);
        do
        {
            j--;
        } while (a[j] > pivot);
        if (i >= j)
            return j;
        swap(a[i], a[j]);
    }
}
//naive approach
int kthSmallest(int a[],int n,int k)
{
    sort(a,a+n);
    return a[k-1];
}
//optimised -quickSelect 
int kthSmallest1(int a[],int n,int k)
{
    int l=0,r=n-1;
    while(l<=r)
    {
        int p=hPartition(a,l,r);
        if(p==k-1)
            return a[p];
        else if(p>k-1)    
            r=p-1;
        else
            l=p+1;    
    }
    return -1;
}
int main()
{
    int a[]={30,20,5,10,8};
    cout<<kthSmallest(a,5,4)<<endl;
    cout<<kthSmallest1(a,5,4);
    return 0;
}