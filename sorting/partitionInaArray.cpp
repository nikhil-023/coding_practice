#include <bits/stdc++.h>
using namespace std;
//naive approach
int partition(int a[],int l,int h,int p)
{
    int temp[h-l+1],index=0;
    for(int i=l;i<=h;i++)
    {//smaller element
        if(a[i]<a[p])
        {
            temp[index]=a[i];
            index++;
        }
    }
    for (int i = l; i <= h; i++)
    {//equal element
        if (a[i] == a[p])
        {
            temp[index] = a[i];
            index++;
        }
    }
    int res=l+index-1;
    for (int i = l; i <= h; i++)
    {//greater element
        if (a[i] > a[p])
        {
            temp[index] = a[i];
            index++;
        }
    }
    //copy element back to a from temp array
    for(int i=l;i<=h;i++)
        a[i]=temp[i-l];

    // for(int i=l;i<=h;i++)
    //     cout<<a[i]<<" ";
    cout<<endl;
    return res;    
}

//lomuto Partition
//if pivot is not the last element ,swap the a[p] and a[h]
int lPartition(int a[],int l,int h)
{
    int pivot=a[h];//always last
    int i=l-1;
    for(int j=l;j<h;j++)
    {
        if(a[j]<pivot)
        {
            i++;
            swap(a[i],a[j]);
        }
    }
    swap(a[i+1],a[h]);
    return i+1;
}

//hoare partition
int hPartition(int a[],int l,int h)
{
    int pivot=a[l];//always first element
    int i=l-1,j=h+1;
    while(true)
    {
        do{
            i++;
        }while(a[i]<pivot);
        do{
            j--;
        }while(a[j]>pivot);
        if(i>=j)
            return j;
        swap(a[i],a[j]);  
    }
}
int main()
{
    int n=7,l=0,h=n-1,p=4;
    int a[]={3,8,6,12,10,10,7};
    cout<<partition(a,l,h,p)<<endl;
    int b[]={10,80,30,90,40,50,70};
    cout<<lPartition(b, l, h)<<endl;
    int c[]={5,3,8,4,2,7,10};
    cout<<hPartition(c,l,h)<<endl;
    for(int i=0;i<n;i++)
        cout<<a[i]<<" ";
    cout<<endl;     
    for (int i = 0; i < n; i++)
        cout << b[i] << " ";
    cout << endl;
    for (int i = 0; i < n; i++)
        cout << c[i] << " ";
    return 0;
}