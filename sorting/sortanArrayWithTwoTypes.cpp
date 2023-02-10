#include<bits/stdc++.h>
using namespace std;
//question version
//1.segregate +ve and-ve
//2.segregate odd and even
//3.sort a binary array

//naive approach
void segregatePosNeg(int arr[],int n)
{
    int temp[n];
    int i=0;
    //-ve elements
    for(int j=0;j<n;j++)
    {
        if(arr[j]<0)
        {
            temp[i]=arr[j];
            i++;
        }
    }
    //+ve elements
    for (int j = 0; j < n; j++)
    {
        if (arr[j] >= 0)
        {
            temp[i] = arr[j];
            i++;
        }
    }
    //copying back to the arr from temp
    for(int j=0;j<n;j++)
        arr[j]=temp[j];
    
}

//efficient-idea of variation of partition of quicksort
void segPosNef(int arr[],int n)
{
    int i=-1,j=n;
    while(true)
    {
        do{
            i++;
        }while(arr[i]<0);
        do
        {
            j--;
        } while (arr[j] >= 0);
        if (i >= j)
            return;
        swap(arr[i], arr[j]);
    } 
}
int main()
{   
    int n=8;
    int arr[]={15,-2,0,-1,76,92,67,-3};
    segregatePosNeg(arr,8);
    for(int i=0;i<n;i++)
        cout<<arr[i]<<" ";
    segPosNef(arr, 8);
    cout<<endl;
    int arr1[]={-12,18,-10,15};
    for (int i = 0; i < 4; i++)
        cout << arr1[i] << " ";
    return 0;
}