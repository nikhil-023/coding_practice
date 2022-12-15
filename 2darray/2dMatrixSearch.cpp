#include<iostream>
using namespace std;
int main(){
    int n1,n2;cin>>n1>>n2;
    int a1[n1][n2];
    for (int i = 0; i < n1; i++)
    {
        for (int j = 0; j < n2; j++)
        {
            cin >> a1[i][j];
        }
    }
    int key;cin>>key;
    bool flag=false;
    for (int i = 0; i < n1; i++)
    {
        for (int j = 0; j < n2; j++)
        {
            if(a1[i][j]==key){
                flag=true;
                cout<<i<<","<<j;
                break;
            }
        }
    }
    if(flag){
        cout<<" founded";
    }
    else{
        cout<<"not exist";
    }
    
    return 0;

}