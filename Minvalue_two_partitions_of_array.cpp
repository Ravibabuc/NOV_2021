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

int solve(vector<int> &A) 
{
    int n =A.size();
    int ans=INT_MAX;
    sort(A.begin(), A.end());
    for(int i =0;i<n-1;i++) 
    {
        ans=min_value(ans, abs(A[i]-A[i+1]));
    }
    
    return ans;
}

int main()
{
    
    vector<int>  A = {3, 1, 2, 6, 4};
    
    cout<<solve(A)<<endl;

    return 0;
}
