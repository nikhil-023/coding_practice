#include <bits/stdc++.h>
using namespace std;
int isPal(int n){
    int temp=n;
    int rev=0;
    while(temp!=0){
        int ld=temp%10;
        rev=rev*10+ld;
        temp=temp/10;
    }
    return (rev==n);
}
int main()
{
    int n;
    cin >> n;
   cout<<isPal(n);
    return 0;
}