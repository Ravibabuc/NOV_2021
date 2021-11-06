#include <iostream>
#include<vector>
#include <bits/stdc++.h>
using namespace std;

int gcd(int a, int b)
{
    if (a==0 ) return b;
    return gcd(b%a, a);
}

int solve(vector<int> &A) {
    
    int n =A.size();
    int ans = A[0];
    
    
    for (int i =1;i<n;i++)
    {
      ans = gcd(ans, A[i]);
    }
    return ans;
}
int main() 
{
  vector<int> A = {6, 4 };
   int c= solve(A);
   cout<<" c ="<<c<<endl;
    return 0;
}
