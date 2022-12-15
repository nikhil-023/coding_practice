#include<iostream>
using namespace std;
int main(){
    int n;cin>>n;
    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    const int N=100;
    int idx[N];
    for(int i=0;i<n;i++){
        arr[i]=-1;
    }
    int minIdx = INT_MAX;
    for(int i=0;i<n;i++){
        if(idx[arr[i]]==i){
            minIdx=min(minIdx,idx[arr[i]]);
        }
        else{
            idx[arr[i]]=i;
        }
    }
    if (minIdx == INT_MAX)
    {
        cout << "-1" << endl;
    }
    else
    {
        cout << minIdx << endl;
    }

    return 0;
}