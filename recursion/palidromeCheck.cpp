#include<iostream>
using namespace std;
bool checkPalidrome(string str,int start,int end){
    if(start>=end)
       return  true;
    return (str[start]==str[end] && checkPalidrome(str,start+1,end-1))   ;
}
int main(){
    cout<< checkPalidrome("avbba",0,3);
    return 0;
}