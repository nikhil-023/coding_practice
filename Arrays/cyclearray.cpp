#include<iostream>
using namespace std;
void rotate(int arr[]){
    int x=arr[4];
    for(int i=4;i>0;i--){

        arr[i]=arr[i-1];
    }
    arr[0]=x;
    for(int i=0;i<5;i++){
        cout<<arr[i]<<" ";
    }
}
int main(){
    
    int arr[5]={1,2,3,4,5};
   rotate(arr);
    return 0;

}