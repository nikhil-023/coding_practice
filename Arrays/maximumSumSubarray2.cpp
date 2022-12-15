#include<iostream>
using namespace std;
int main(){
    int n;cin>>n;//5
    int arr[n];
    for(int i=0;i<n;i++){//1 -4 3 2 1
        cin>>arr[i];
    }
    int cumSum[n+1];
    cumSum[0]=0; 
    for(int i=1;i<=n;i++){// for i=1    i=2       i=3         i=4       i=5
        cumSum[i]=cumSum[i-1]+arr[i-1];//cumSum[1]=0+1=1     cumSum[2]=1-4=-3       cumSum[3]=-3+3=0       sumSum[4]=0+2=2    cumSum[5]=2+1=3
    }
    int maxSum=INT_MIN;
    for(int i=1;i<=n;i++){   //i=1   
        int sum=0;
        maxSum=max(maxSum,cumSum[i]);//maxSum=1
        for(int j=1;j<=i;j++){  //j=1
            sum=cumSum[i]-cumSum[j-1];//sum=1-0=1
            maxSum=max(sum,maxSum); //maxSum=1
        }
    }
    cout<<maxSum;
    return 0;
}