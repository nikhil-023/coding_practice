#include<bits/stdc++.h>
using namespace std;
void printnTo1(int n){
    if(n==0)
      return ;
    cout<<n<<" ";
    printnTo1(n-1);
}
void print1Ton(int n){
    if(n==0)
        return;
    print1Ton(n-1);
    cout<<n<<" ";
}
int main(){
    printnTo1(6);
    cout<<endl;
    print1Ton(6);
    return 0;
}