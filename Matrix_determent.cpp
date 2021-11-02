/******************************************************************************

                              Online C++ Compiler.
               Code, Compile, Run and Debug C++ program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/
//https://www.mathsisfun.com/algebra/matrix-determinant.html
#include <iostream>
#include <vector>
#include <bits/stdc++.h>

using namespace std;

int max_value(int a, int b)
{
    return a > b ?a:b;
}


int min_value(int a, int b)
{
    return a < b ?a:b;
}

int solve(const vector<vector<int> > &A) {

    int n =A.size();
    int ans=0;
    
    if(n==2)
    {
        ans = (A[0][0] *A[1][1]) -( A[1][0] * A[0][1]);
//         ad − bc

    }
    if(n== 3)
    {
    ans =
    (A[0][0] * ((A[1][1] *  A[2][2]) -( A[1][2] * A[2][1])))         - 
    (A[0][1] * ((A[1][0] * A[2][2]) -( A[1][2] * A[2][0]))) 
        + 
    (A[0][2] * ((A[1][0] * A[2][1]) - (A[1][1] * A[2][0])));
        
       // a(ei − fh) − b(di − fg) + c(dh − eg)

    }
    
    return ans;
}

int main()
{
    
   // vector<vector<int> > A = {{1,2},{3, 4}};
    vector<vector<int> > A = {{6, 1, 1},{4, -2, 5}, {2, 8, 7}};
    
    cout<<solve(A)<<endl;

    return 0;
}
