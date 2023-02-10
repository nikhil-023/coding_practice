#include<bits/stdc++.h>
using namespace std;
//naive approach
void merge(int a[],int b[],int m,int n)
{
    int c[m+n];
    for(int i=0;i<m;i++)
        c[i]=a[i];
    for(int i=0;i<n;i++)  
        c[m+i]=b[i];
    sort(c,c+m+n);
    for(int i=0;i<m+n;i++)  
        cout<<c[i]<<" " ; 
}

//optmised approach
void merge2(int a[], int b[], int m, int n)
{ 
    int i=0,j=0;//i for a and j for b
    while(i<m && j<n)
    {
        if(a[i]<=b[j])
        {
            cout<<a[i]<<" ";
            i++;
        }
        else{
            cout << b[j] << " ";
            j++;
        }
    }
    while(i<m)
    {
        cout<<a[i]<<" ";
        i++;
    }
    while (j < n)
    {
        cout << b[j] << " ";
        j++;
    }
} 
int main()
{   int m=3,n=4;
    int a[m]={10,15,20};
    int b[n]={5,6,6,15};
    merge(a,b,m,n);
    cout<<endl;
    merge2(a,b,m,n);
    return 0;
}