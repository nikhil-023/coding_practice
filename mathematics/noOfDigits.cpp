#include<bits/stdc++.h>
using namespace std;
int noOfDigits(long n){
    int count=0;
    while(n!=0){
        n=n/10;
        ++count;
    }
    return count;
}
int noOfDigitRec(long n){
    if(n==0){
        return 0;
    }
    return 1+noOfDigitRec(n/10);
}
int noOfDigitsLog(long n){
    return floor(log10(n)+1);
}
int main(){
    int n;cin>>n;
    cout<<noOfDigitRec(n);
    cout<<noOfDigits(n);
    cout<<noOfDigitsLog(n);
    return 0;
}