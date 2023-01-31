#include <bits/stdc++.h>
using namespace std;
int trailingZeros(int n){
    int fact=1;
    for(int i=2;i<=n;i++){
        fact=fact*i;
    }
    int count=0;
    while(fact%10==0){
        count++;
        fact=fact/10;
    }
    return count;
}
int count(int n){//120
    int res=0;
    for(int i=5;i<=n;i=i*5){
        res=res+n/i;//120/5=24
    }
    return res;
}
int main()
{
    int n;
    cin >> n;
    cout<<trailingZeros(n)<<endl;
    cout<<count(120);
    return 0;
}