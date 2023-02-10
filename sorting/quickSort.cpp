#include<bits/stdc++.h>
using namespace std;
//lomuto partition
int lPartition(int a[], int l, int h)
{
    int pivot = a[h]; // always last
    int i = l - 1;
    for (int j = l; j < h; j++)
    {
        if (a[j] < pivot)
        {
            i++;
            swap(a[i], a[j]);
        }
    }
    swap(a[i + 1], a[h]);
    return i + 1;
}
//hoare partition
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
void qSort(int a[],int l,int h)
{
    if(l<h)
    {
        int p=lPartition(a,l,h);
        qSort(a,l,p-1);
        qSort(a,p+1,h);
    }
    
}
void qSort2(int a[], int l, int h)
{
    if (l < h)
    {
        int p = hPartition(a, l, h);
        qSort(a, l, p);
        qSort(a, p + 1, h);
    }
    
}

int main()
{   
    int a[] = {10, 80, 30, 90, 40, 50, 70};
    qSort(a,0,6);
    int b[] = {5, 3, 8, 4, 2, 7, 10};
    qSort2(b,0,6);
    for (int i = 0; i < 7; i++)
        cout << a[i] << " ";
    cout<<endl;    
    for (int i = 0; i < 7; i++)
        cout << b[i] << " ";
    return 0;
}