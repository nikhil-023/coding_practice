#include<bits/stdc++.h>
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
void printPrimes(int n){
    for(int i=2;i<=n;i++){
        if(isPrimeOptimised(i))
            cout<<i<<" ";
    }
}
void Seive(int n){//9
    vector<bool> isPrime(n+1,true);//10,t
    for(int i=2;i*i<=n;i++){             //2                  //3
        if(isPrime[i]){                  //t                  //t
            for(int j=2*i;j<=n;j=j+i)//j=4   j=6   j=8        j=6     j=9
                isPrime[j]=false;    //4=f   6=f   8=f        6=f     9=f
        }
    }
    for(int i=2;i<=n;i++){
        if(isPrime[i])
           cout<<i<<" ";
    }
}
void Seive2(int n){//9
    vector<bool> isPrime(n+1,true);
    for(int i=2;i*i<=n;i++){           //2                     3
        if(isPrime[i]){                //t                     t
            for(int j=i*i;j<=n;j=j+i)  //j=4    j=6   j=8      j=9
              isPrime[j]=false;        //4=f    6=f   8=f      9=f
        }
    }
    for(int i=2;i<=n;i++){
        if(isPrime[i])
               cout<<i<<" ";
    }
}
int main(){
    int n;cin>>n;
    printPrimes(n);
    cout<<endl;
    Seive(n);
    cout << endl;
    Seive2(n);
    return 0;
}