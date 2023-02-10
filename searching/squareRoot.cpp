#include <iostream>
using namespace std;
int sqRootFloor(int n){
    int i=1;
    while(i*i<=n)
        i++;
    return i-1;    
}
int sqRootFloorEfficient(int x){
    int l=1,h=x,ans=-1;
    while(l<=h){
        int mid=(l+h)/2;
        int mSq=mid*mid;
        if(mSq==x)
           return mid;
        else if(mSq>x)   
           h=mid-1;
        else{
           l=mid+1;
           ans=mid;   
        }
    }
    return ans;
}
int main()
{  cout<<sqRootFloor(15)<<" "<<sqRootFloorEfficient(15);
    return 0;
}