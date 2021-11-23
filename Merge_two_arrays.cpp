/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <iostream>
#include <vector>
#include <bits/stdc++.h>

using namespace std;


vector<int> solve(const vector<int> &A, const vector<int> &B) 
{
    int n = A.size();
    int m = B.size();
    vector<int> C;
    C.resize(n+m);
    int j =0;
    int i =0;
    int k =0;
    while (i< n && j < m)
    {
        if(A[i] > B[j])
        {
            C[k] = B[j];
            k++;
            j++;
      
        }
        else if (A[i] < B[j])
        {
            C[k] = A[i];
            k++;
            i++;
        }
        else 
        {
            C[k] = A[i];
            i++;
            k++;
            C[k] = B[j];
            j++;
            k++;

        }
        
    }
    while(i < n )
    {
         C[k] = A[i];
            i++;
            k++;
    }
    while(j < m )
    {
           C[k] = B[j];
            k++;
            j++;
    }
    return C;
}

int main()
{
   vector<int> A  = {4, 7, 9 };
   vector<int> B  = {2 ,11, 19 };
   
   vector<int> C = solve(A, B);
   
   for(int i =0 ;i < 6 ;i++)
   {
       std::cout << C[i] << std::endl;
   }

    return 0;
}

