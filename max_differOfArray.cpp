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

void Swap(int *a, int *b)
{
    int temp =*a;
    *a =*b;
    *b= temp;
}


int maxmum(int a, int b)
{
    return a> b ?a:b;
}

int maximumGap(const vector<int> &A) 
{
    int len =INT_MIN;
    int n =A.size();
    
    for(int i =0;i<n;i++)
    {
        for (int j =i+1;j<n-i;j++)
        {
            if(A[i]< A[j])
            {
             len = maxmum(len, j-i)   ;
            }
        
        
        }
    }
    return len;
}



int maxIndexDiff(const vector<int> &A) {
     int n = A.size();
    int leftMin[n] ;
    leftMin[0] = A[0];
    for(int i = 1 ; i<n; i++)
        leftMin[i] = min(leftMin[i-1], A[i]);
 
 
    //leftMin[i] = min{ arr[0...i] }
 
 
    int maxDist = INT_MIN;
    int i = n-1, j = n-1;
 
    while(i>=0  &&  j>=0)
    {
        if(A[j] >= leftMin[i])
        {
            maxDist = maxmum(maxDist, j-i);
            i--;
        }
        else
            j--;
    }
 
    return maxDist;
}



int main()
{
   vector<int> A  = {1, 10};
   int C = maxIndexDiff(A);
  
   std::cout << C << std::endl;

    return 0;
}

