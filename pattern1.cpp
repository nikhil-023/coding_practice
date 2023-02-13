#include<iostream>
using namespace std;
/* solidRect patern
  *****
  *****
  *****
  ***** 
  */
void solidRect(int row,int col){
    for(int i=0;i<row;i++){
        for ( int j = 0; j < col; j++) { 
            cout<<"*";
         }
            cout<<"\n";
    }
    return;
}
/* hollowRect pattern 
  *****
  *   *
  *   *
  *****   
  */ 
void hollowRect(int row,int col){
    for(int i=0;i<row;i++){
        for(int j=0;j<col;j++){
            if(i==0 || i==row-1 || j==0 || j==col-1){
                    cout<<"*";
                    }
            else {
                cout<<" ";
            } 
        }
        cout << "\n";
    }
   return;
}
/* halfPyramid pattern
   *
   **
   ***
   ****
  */
void halfPyramid(int n){
    for(int i=0;i<n;i++){
        for(int j=0;j<=i;j++){
              cout<<"*";
        }
        cout<<"\n";
    }
    return;
}
/* invertedHalfPyramid pattern
   ****
   ***
   **
   *
    */
void invertedHalfPyramid(int n){
    for (int i = 0; i < n; i++)
    {  for (int j = n-1; j >= i; j--) {
            cout << "*";
        }
        cout << "\n";
    }
    return;
}
void invertedHalfPyramid180(int n){
    for(int i=1;i<=n;i++){
        for(int j=1;j<=n;j++){
            if(j<=n-1){
                cout<<" ";
            }
            else{
                cout<<"*";
            }
        }
        cout<<endl;
    }
    return;
}


 /* 
       *
      *
     *
    *
  */
void diagonal1(int n) {
    for(int i=0;i<n;i++){
        for(int j=n;j>=i;j--){
            if(i==j){
                cout<<"*";
            }
            else{
                cout<<" ";
            }
        }
        cout<<"\n";
    }
    return;
}


/* 
   *
    *
     *
      *
 */
void diagonal2(int n){
    for(int i=0;i<n;i++){
        for(int j=0;j<=i;j++){
            if(i==j){
                cout<<"*";
            }
            else{
                cout<<" ";
            }
        }
        cout<<"\n";
    }
}
/* 
    1
    12 
    123 
    1234
 */
void halfPyramidWithNo1(int n)
{
    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= i; j++)
        {
            cout << j;
        }
        cout << endl;
    }
    return;
}
/* 
  1234
  123
  12
  1
 */
void invertedHalfPyramidWithNo1(int n){
    for(int i=n;i>=1;i--){
        for(int j=1;j<=i;j++){
            cout<<j;
        }
        cout<<endl;
    }
    return;
}
/*
1
22
333
4444
 */
void halfPyramidWithNo2(int n){
    for(int i=1;i<=n;i++){
        for(int j=1;j<=i;j++){
            cout<<i;
        }
        cout<<endl;
    }
    return;
}
/*
1111
222
33
4
 */
void invertedHalfPyramidWithNo2(int n){
    for(int i=1;i<=n;i++){
        for(int j=n;j>=i;j--){
            cout<<i;
        }
        cout<<"\n";
    }
    return;
}
/*
1
23
456
78910
 */
void floydTriangle(int n){
    int c=1;
    for(int i=1;i<=n;i++){
        for(int j=1;j<=i;j++){
            cout<<c;
            c++;
        }
        cout << "\n";
    }
    return;
}
/*
1
01
101
0101
 */
void print01Pattern(int n){
    for(int i=1;i<=n;i++){
        for(int j=1;j<=i;j++){
            if((i+j)%2==0){
                cout<<"1";
            }
            else{
                cout<<"0";
            }
        }
        cout << endl;
    }
    return;
}

int main(){
    /* int row,col;
    cin>>row>>col;
     solidRect(row,col); 
     hollowRect(row,col);  */

     int n;
     cin>>n;
    /* halfPyramid(n); 
    invertedHalfPyramid(n); 
    diagonal1(n);
    diagonal2(n); */

    invertedHalfPyramid180(n);
    
   /*  halfPyramidWithNo1(n); */

    /* invertedHalfPyramidWithNo1(n); */

    /* halfPyramidWithNo2(n); */

    /* invertedHalfPyramidWithNo2( n); */

    /* floydTriangle(n); */
    /* print01Pattern(n); */
     return 0;
}