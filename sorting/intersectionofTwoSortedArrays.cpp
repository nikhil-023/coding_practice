#include <bits/stdc++.h>
using namespace std;
//naive approach
void intersect(int a[],int b[],int m,int n)
{
    for(int i=0;i<m;i++)
    {
        if(i>0 && a[i]==a[i-1])
            continue;
        for(int j=0;j<n;j++)    
        {
            if(a[i]==b[j])
            {
                cout<<a[i]<<" ";
                break;
            }
        }
    }
}

//efficient -idea of mergesort
void intersect2(int a[], int b[], int m, int n)
{
    int i=0,j=0;
    while(i<m && j<n)
    {
        if (i > 0 && a[i] == a[i - 1])
        {   i++;
            continue;
        }

        if(a[i]<b[j])
            i++;
        else if(a[i]>b[j])
            j++;
        else
        {
            cout<<a[i]<<" ";
            i++;
            j++;
        }
                  
    }
}
int main()
{   int m=8,n=5;
    int a[]={3,5,10,10,10,15,15,20};
    int b[]={5,10,10,15,30};
    intersect(a,b,m,n);
    cout<<endl;
    intersect2(a,b,m,n);
    return 0;
}