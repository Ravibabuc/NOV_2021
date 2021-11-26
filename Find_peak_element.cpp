
#include <iostream>
#include <vector>
#include <bits/stdc++.h>
using namespace std;

#define R 3
#define C 6





int solve(vector<int> &A) 
{
    int n =A.size();
    sort(A.begin(), A.end());
    return A[n-1];
}

 
int main()
{
    vector<int> A = {5, 17, 100, 11};
    
    int B=    solve(A);
    std::cout << B << std::endl;
    return 0;
}
