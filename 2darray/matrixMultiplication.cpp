#include<iostream>
using namespace std;
int main(){
    int n1,n2,n3;cin>>n1>>n2>>n3;
    int a1[n1][n2];
    int a2[n2][n3];
    int a3[n1][n3];
    for(int i=0;i<n1;i++){
        for(int j=0;j<n2;j++){
            cin>>a1[i][j];
        }
    }
    for (int i = 0; i < n2; i++)
    {
        for (int j = 0; j < n3; j++)
        {
            cin >> a2[i][j];
        }
    }
    for(int i=0;i<n1;i++){
        for(int j=0;j<n3;j++){
            a3[i][j]=0;
        }
    }
    
    for(int i=0;i<n1;i++){
        for(int j=0;j<n3;j++){
            for(int k=0;k<n2;k++){
                 a3[i][j]+=a1[i][k]*a2[k][j];
            }
        }
    }
    for(int i=0;i<n1;i++){
        for(int j=0;j<n3;j++){
            cout<<a3[i][j]<<" ";
        }
        cout<<endl;
    }
    return 0;

}