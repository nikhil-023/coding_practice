#include<bits/stdc++.h>
using namespace std;
void func1(){
    cout<<"func1\n";
}
void func2(){
    cout<<"before func1\n";
    func1();
    cout<<"after func1\n";
}
void func3(int n){
    if(n==0)
        return;
    cout<<"GFG"<<endl;
    func3(n-1) ;
}
void func4(int n){
    if(n==0)
       return;
    cout<<n<<endl;
    func4(n-1);
    cout<<n<<endl; 
}
void fun(int n){
    if(n==0)
       return;
    fun(n-1);
    cout<<n<<endl;
    fun(n-1);
}
int func(int n){
    if(n==0)
        return 0;
    else  
        return 1 + func(n/2);    
}
void binaryConversion(int n){
    if(n==0)
       return;
    binaryConversion(n/2);
    cout<<n%2;
}
int main(){
    cout<<"before func2\n";
    func2();
    cout<<"after func2\n";
    cout<<endl;
    func3(2);
    cout << endl;
    func4(3);
    cout << endl;
    fun(3);
    cout << endl;
    func(16);
    cout << endl;
    binaryConversion(13);
    return 0;
}