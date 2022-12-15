
#include <bits/stdc++.h>
using namespace std;
class Solution
{
public:
    // arr: input array
    // n: size of array
    // Function to sort the array into a wave-like array.
    void convertToWave(int n, vector<int> &arr)
    {

        // Your code here
        for (int i = 0; i < n - 1; i += 2)
        {
            int temp = arr[i];
            arr[i] = arr[i + 1];
            arr[i + 1] = temp;
        }
    }
};

// { Driver Code Starts.

int main()
{
    
        int n;cin >> n;         // input size of array
        vector<int> a(n); // declare vector of size n
        for (int i = 0; i < n; i++)
            cin >> a[i]; // input elements of array
        Solution ob;
        ob.convertToWave(n, a);

        for (int i = 0; i < n; i++)
            cout << a[i] << " "; // print array

        cout << endl;
    
} // } Driver Code Ends