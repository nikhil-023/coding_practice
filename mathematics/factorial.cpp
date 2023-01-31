#include <bits/stdc++.h>
using namespace std;
int fact(int n){
    int fact=1;
    for(int i=2;i<=n;i++){
        fact=fact*i;
    }
    return fact;
}
int factRec(int n){
    if(n==1){
        return n;
    }
    return n*factRec(n-1);
}
int main()
{
    int n;
    cin >> n;
    cout << fact(n);
    cout<< factRec(n) ;
    return 0;
}