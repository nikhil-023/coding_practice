#include<bits/stdc++.h>
using namespace std;
//naive approach
int getMinDiff(int a[],int n)
{
    int res=INT_MAX;
    for(int i=1;i<n;i++)
        for(int j=0;j<i;j++)
            res=min(res,abs(a[i]-a[j]));
    return res;        
}
//efficient 
int getMinDiff2(int a[],int n)
{
    sort(a,a+n);
    int res=INT_MAX;
    for(int i=1;i<n;i++)
        res=min(res,a[i]-a[i-1]);
    return res;    
}
int main()
{   
    int n=5;
    int a[]={1,8,12,5,18};
    cout<<getMinDiff(a,n)<<endl;
    cout << getMinDiff2(a, n);
    return 0;
}