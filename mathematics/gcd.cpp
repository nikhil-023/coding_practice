#include <bits/stdc++.h>
using namespace std;
int gcd(int n,int m){
    int res=min(n,m);
    while (res>0){
        if(n%res==0 && m%res==0){
            break;
        }
        res--;
    }
    return res; 
}
int euclidGcd(int n ,int m){ //12   //15
    while(n!=m){//12!=15
        if(n>m)//
        n=n-m;        //9    //6     3
        else
        m=m-n;//3
    }
    return n;
}
int gcdOptimised(int n,int m){
    if(m==0){
        return n;
    }
    else{
        return gcdOptimised(m,n%m);
    }
}
int main()
{
    int n,m;
    cin >> n>>m;
    cout<<gcd(n,m);
    cout<<euclidGcd(n,m);
    cout<<gcdOptimised(n,m);
    return 0;
}