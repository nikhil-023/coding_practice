#include <bits/stdc++.h>
using namespace std;
//naive approach
void printUnion(int a[],int b[],int m ,int n)
{
    int c[m+n];
    for(int i=0;i<m;i++)
        c[i]=a[i];

    for (int i = 0; i < n; i++)
        c[m+i] = b[i];

    sort(c,c+m+n)  ;
    for (int i = 0; i <m+n; i++)
        if(i==0 || c[i]!=c[i-1])
            cout<<c[i]<<" ";
}

//efficient-idea of mergeSort
void printUnion2(int a[], int b[], int m, int n)
{
    int i=0,j=0;
    while(i<m && j<n)
    {
        if(i>0 && a[i]==a[i-1])
        {
            i++;continue;
        }
        if (j > 0 && b[j] == b[j - 1])
        {
            j++;
            continue;
        }
        if(a[i]<b[j])
        {
            cout<<a[i]<<" ";
            i++;
        }
        else if (a[i] > b[j])
        {
            cout << b[j] << " ";
            j++;
        }
        else //equal
        {
            cout << a[i] << " ";
            i++;j++;
        }
    }
    while(i<m)
    {
        if (i > 0 && a[i] != a[i - 1])
        {
            cout << a[i] << " ";
            i++;
        }
    }
    while (j < n)
    {
        if (j > 0 && a[j] != a[j - 1])
        {
            cout << b[j] << " ";
            j++;
        }
    }
} 
int main()
{   
    int m=3,n=5;
    int a[]={3,5,8},b[]={2,8,9,10,15};
    printUnion(a,b,m,n);
    cout<<endl;
    printUnion2(a,b,m,n);
    return 0;
}