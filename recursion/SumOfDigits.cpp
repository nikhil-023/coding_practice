#include<iostream>
using namespace std;
int sumOfDigits(int n){
    
    if(n<=0)
       return n;
    
    return n%10 +sumOfDigits(n/10);

}
int main(){
    cout<<sumOfDigits(123);
    return 0;
}