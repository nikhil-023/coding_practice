#include<iostream>
using namespace std;
int fact(int n){
    if(n==0 || n==1)
    return 1;
    return n*fact(n-1);
}
int tailRecFact(int n,int k){
    if(n==0 || n==1)
         return k;
    return tailRecFact(n-1,k*n);
}
int main(){
    cout<<fact(5);
    cout<<tailRecFact(5,1);
    return 0;
}