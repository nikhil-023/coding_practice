#include <bits/stdc++.h>
using namespace std;
bool isPrimeOptimised(int n)
{
    if (n == 1)
        return false;
    if (n == 2 || n == 3)
        return true;
    if (n % 2 == 0 || n % 3 == 0)
        return false;
    for (int i = 5; i * i <= n; i = i + 6)
        if (n % i == 0 || n % (i + 2) == 0)
            return false;

    return true;
}
void primeFactors(int n){//24
    for(int i=2;i<n;i++){
        if(isPrimeOptimised(i)){
            int x=i;//2                                             //3
            while(n%x==0){//24%2==0      24%4==0   24%8==0          24%3==0
                cout<<i<<endl;//2         2         2               3
                x=x*i;//4                 8         16              9
            }
        }
    }
}
void printPrimeFactors(int n){//24
    if(n<=1)//false
       return;
    for(int i=2;i<=n;i++){//2                            3
        while(n%i==0){    //t      //t       //t         //t
            cout<<i;      //2      //2       //2         //3
            n=n/i;        //12     //6       //3         //0
        }
    }
    if(n>1)
      cout<<n;
}
void printPrimeFactorsOptimised(int n){
    if(n<=1)
        return;
    while(n%2==0){
        cout<<"2";
        n=n/2;
    }   
    while(n%3==0){
        cout<<"3";
        n=n/3;
    }
    for(int i=5;i*i<=n;i=i+6){
        while(n%i==0){
            cout<<i;
            n=n/i;
        }
        while(n%(i+2)==0){
            cout<<(i+2);
            n=n/(i+2);
        }
    }
    if(n>3)
       cout<<n;
}
int main()
{
    int n;
    cin >> n ;
    primeFactors(n);
    printPrimeFactors(n);
    cout<<endl;
    printPrimeFactorsOptimised(n);
    return 0;
}