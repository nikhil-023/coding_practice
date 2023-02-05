#include <bits/stdc++.h>
using namespace std;
int main(){
    int t;cin>>t;
    string s1 = "Timur";
    while (t--)
    {
        int n;cin>>n;
        string s2;cin>>s2;
        sort(s1.begin(), s1.end());
        sort(s2.begin(), s2.end());
        if(s1==s2)
          cout<<"yes"<<endl;
        else 
          cout<<"no" <<endl;
    }
    return 0;
}