#include <iostream>
using namespace std;
int main()
{
    int n;
    cin >> n;
    int arr[n];
    for (int i = 0; i < n; i++)// 1 2 3 4 5
    {
        cin >> arr[i];
    }
    for (int i = 0; i < n; i++)//   i=0  to i=4
    {
        for(int j=i;j<n;j++){  //j=i to j=4
            for(int k=i;k<=j;k++){//k=i to k=j
                cout<<arr[k];
            }
            cout<<endl;
        }
    }
    return 0;
}