#include<bits/stdc++.h>
using namespace std;
void printDivisor(int n){//sorted approach
    for(int i=1;i<=n;i++){
        if(n%i==0)
            cout<<i<<" "; 
    }
}
void printDivisor1(int n){//unsorted approach but more efficient
    for(int i=1;i<=n;i++){
        if(n%i==0){
            cout<<i<<" ";
            if(i!=n/i){
                cout<<(n/i)<<" ";
            }
        }
    }
}
void printDivisors(int n){
    int i;
    for( i=1;i*i<n;i++){
        if(n%i==0)
            cout<<i<<" ";    
    }
    for(;i>=1;i--){
        if(n%i==0)
        cout<<(n/i)<<" ";
    }
}
int main(){
    int n;cin>>n;
    printDivisor(n);
    cout<<endl;
    printDivisor1(n);
    cout<<endl;
    printDivisors(n);
    return 0;
}