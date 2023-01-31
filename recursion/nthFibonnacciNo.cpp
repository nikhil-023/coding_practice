#include<iostream>
using namespace std;
int nthFibonacci(int n){
    if(n==0 || n==1)
       return n;
    return nthFibonacci(n-1)+nthFibonacci(n-2);
}
int main(){
    cout<<nthFibonacci(6);
    return 0;
}