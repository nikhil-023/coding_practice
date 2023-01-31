#include<bits/stdc++.h>
using namespace std;
int power(int x,int n){
    int res=1;
    for(int i=0;i<n;i++)
        res=res*x;
    return res;    
}
int powerRec(int x,int n){
    if(n==0)
      return 1;
    int temp=powerRec(x,n/2) ;
    if(n%2==0) 
     return temp*temp;
    else
     return temp*temp*x;
}
int main(){
    int x,n;cin>>x>>n;
    cout<<power(x,n)<<endl;
    cout << powerRec(x, n) << endl;
    
    return 0;
}