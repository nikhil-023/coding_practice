#include<iostream>
using namespace std;
int main(){
   int t;cin>>t;
   while(t--){
      int n;cin>>n;
      string s1,s2;
      cin>>s1;
      cin>>s2;
      bool flag=1;
      for(int i=0;i<n;i++){
         if(s1[i]==s2[i])
           continue;
         else {
             if ((s1[i]=='B' && s2[i]=='G')|| (s1[i] == 'G' && s2[i] == 'B'))
                 continue;
             else
                 flag=0;
                 break;
         } 
      }
      if(flag==1)
      cout << "yes" << endl;
      else 
       cout<<"no"<<endl;
   }
   return 0;
}