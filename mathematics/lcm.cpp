#include <bits/stdc++.h>
using namespace std;
int lcm(int n,int m){
    int res=max(n,m);
    while(true){
        if(res%n==0 && res%m==0){
        return res;
        }
        res++;
        }
       return res; 
    }
int gcd(int a,int b){
    if(b==0){
        return a;
    }
    return gcd(b,a%b);
}
int lcm1(int a,int b){
    return (a*b)/gcd(a,b);
}
int main()
{
    int n,m;
    cin >> n>>m;
    cout<<lcm(n,m)<<endl;
    cout<<lcm(n,m);
    return 0;
}