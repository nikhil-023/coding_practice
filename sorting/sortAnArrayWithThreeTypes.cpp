#include<bits/stdc++.h>
using namespace std;
//version of question
//1.sort an array with 0s,1s,2s
//2.partition around a range

//naive approach
void sort3(int a[],int n)
{
    int temp[n],i=0;
    for(int j=0;j<n;j++)
    {
        if(a[j]==0)
        {
            temp[i]=a[j];
            i++;
        }
    }
    for (int j = 0; j < n; j++)
    {
        if (a[j] == 1)
        {
            temp[i] = a[j];
            i++;
        }
    }
    for (int j = 0; j < n; j++)
    {
        if (a[j] == 2)
        {
            temp[i] = a[j];
            i++;
        }
    }
    for(int j=0;j<n;j++)
        a[j]=temp[j];

    for (int j = 0; j < n; j++)
        cout<<a[j]<<" ";
}

//dutch national flag algorithm
void dutchAlgo(int a[],int n)
{
    int l=0,h=n-1,mid=0;
    while(mid<=h)
    {
        if(a[mid]==0)
        {
            swap(a[l],a[mid]);
            l++;mid++;
        }
        else if(a[mid]==1)
            mid++;
        else{
            swap(a[mid],a[h]);
            h--;
        }    
    }
    for(int i=0;i<n;i++)
        cout<<a[i]<<" ";
}
int main()
{   int n=6;
    int a[]={0,1,0,2,1,2};
    sort3(a,n);
    cout<<endl;
    int b[]={1,0,2,1,1,0,2};
    dutchAlgo(b,7);
    return 0;
}