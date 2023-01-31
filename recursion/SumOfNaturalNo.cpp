#include <iostream>
using namespace std;
int getSum(int n){
    if(n==0 ||n==1)
        return n;
    return n+getSum(n-1);
}
int main(){
    cout<<getSum(5);
    return 0;
}