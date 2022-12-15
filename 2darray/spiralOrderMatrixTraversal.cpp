#include<iostream>
using namespace std;
int main(){
    int arr[5][6]={1,5,7,9,10,11,6,10,12,13,20,21,9,25,29,30,32,41,15,55,59,63,68,70,40,70,79,81,95,105};
    int rowStart=0,rowEnd=4,colStart=0,colEnd=5;
    while(rowStart<=rowEnd && colStart<=colEnd){
        //for rowStart
        for(int i=colStart;i<=colEnd;i++){
            cout<<arr[rowStart][i]<<" ";
        }
        rowStart++;
        //for ColEnd
        for(int i=rowStart;i<=rowEnd;i++){
            cout<<arr[i][colEnd]<<" ";
        }
        colEnd--;
        //for rowEnd
        for(int i=colEnd;i>=colStart;i--){
            cout<<arr[rowEnd][i]<<" ";
        }
        rowEnd--;
        //for colStart
        for(int i=rowEnd;i>=rowStart;i--){
            cout<<arr[i][colStart]<<" ";
        }
        colStart++;
    }
    return 0;
}