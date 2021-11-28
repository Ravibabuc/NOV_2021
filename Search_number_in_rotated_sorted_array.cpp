/******************************************************************************

                              Online C++ Compiler.
               Code, Compile, Run and Debug C++ program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/
#include <iostream>
#include <vector>
#include <bits/stdc++.h>
using namespace std;

int Search_number1(const vector<int> &A,int low, int high, int B)
{
    if(low > high)
        return -1;
   int mid ;
  mid  =low + (high- low)/2;
    if(A[mid] == B)
        return mid;
    
    if(B > A[mid]  )
        return Search_number1 (A, mid+1, high, B);
    else
        return Search_number1 (A, low, mid-1, B);
    
    
}

int Search_number(const vector<int> &A,int low, int high, int B)
{
    if(low > high)
        return -1;
   int mid ;
  mid  =low + (high- low)/2;
    if(A[mid] == B)
        return mid;
    if( A[low] <= A[mid])
    {
        if(B >= A[low] && B <= A[mid] )
            return Search_number(A, low, mid-1, B );
        
        return Search_number(A, mid +1, high, B );
        
    }
     if(B >= A[mid]  && B <= A[high] )
        return Search_number (A, mid+1, high, B);
    else
        return Search_number (A, low, mid-1, B);
    
    
}


int search(const vector<int> &A, int B) 
{
    int n = A.size();
    int value =Search_number(A, 0, n, B);
    return value;
}
 
int main()
{
    
    vector<int> A ={ 4, 5, 6 ,7,1, 2, 3};
    int B =4;
    int C = search(A, B);
    std::cout << A[C] << std::endl;
    return 0;
}
