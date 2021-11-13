#include <iostream>
#include<vector>
#include <bits/stdc++.h>
#include<string>
using namespace std;
int max_value (int a, int b)
{
    return a>b?a:b;
}


int min_value (int a, int b)
{
    return a<b?a:b;
}
void swap(int *a, int *b)
{
    int temp = *a;
    *a = *b;
    *b = *a;
}

vector<int> solve(vector<int> &A) {


    
    
    int n =A.size();
    sort(A.begin(), A.end());
    int ans =0;
    int val=0;
    vector<int> B;
    B.resize(2);
    
    for (int i =0;i< n;i++)
    {
        ans = ans ^ A[i];
      
    }
    
    int set_bit_no;
    
    int x = 0;
    int y = 0;
    
    //cout<<"ans "<<ans<<endl;
    //cout<<"ans - 1 "<<ans - 1<<endl;
    //cout<<"ans - 1 "<<~(ans - 1)<<endl;
   set_bit_no= ans & ~(ans - 1);
   
   //cout<<"set_bit_no  "<<set_bit_no<<endl;
    
    for (int i = 0; i < n; i++) {
 
        if (A[i] & set_bit_no)
            x = x ^ A[i];
        else {
            y = y ^ A[i];
        }
    }
    
     //cout<<"x "<<x<<endl;
    //cout<<"y "<<y<<endl;
    if(y >x)
    {
        B[1]=y;
        B[0]=x;
    }
    else
    {
        B[0]= y;
           B[1]= x;
    }
   // cout<<"B[1] "<<B[1]<<endl;
    //cout<<"B[0] "<<B[0]<<endl;
    return B;
}




int main() 
{
  vector<int> A ={1, 2, 3, 1,3,  4, 6,4,2,7} ;

   
    int C=6;
    vector<int> B  = solve(A);
    
     cout<<"B[1] "<<B[1]<<endl;
    cout<<"B[0] "<<B[0]<<endl;
    return 0;
}
