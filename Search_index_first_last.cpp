/******************************************************************************

                              Online C++ Compiler.
               Code, Compile, Run and Debug C++ program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/
#include <iostream>
#include <vector>
#include <bits/stdc++.h>
using namespace std;

int Search_First(const vector<int> &A,int low, int high, int B)
{
    int mid ;
    
    if( high >= low)
    {
        mid  =low + (high- low)/2;
   
        if(mid ==0 || A[mid] == B && B > A[mid-1])
        {         
            return mid;
        }
            
        else if(B > A[mid]  )
            return Search_First (A, mid+1, high, B);
        else
            return Search_First (A, low, mid-1, B);
    }
    return -1;
}
int Search_Second(const vector<int> &A,int low, int high, int B, int n)
{
    int mid ;
    //cout<<"n "<<n<<endl;
    if( high >= low)
    {
        mid  =low + (high- low)/2;
   
        if(mid ==n-1 || (A[mid] == B && B < A[mid+1]))
        {         
            return mid;
        }
            
        else if(B < A[mid]  )
            return Search_Second (A, low, mid-1, B, n);
        else
            return Search_Second (A, mid+1, high, B, n);
    }
    return -1;
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


vector <int> search(const vector<int> &A, int B) 
{
    int n = A.size();
    vector <int> D;
    D.resize(2);
    int value1 =Search_First(A, 0, n, B);
    if(value1 == -1 )
    {
        D[0] = -1;
        D[1] = -1;
        return D;
    }
    
    D[0] = value1;
    int value2 =Search_Second(A, 0, n, B, n);
    D[1] = value2;
    
    
    return D;
}


int searchInsert(vector<int> &A, int B) {
    int n = A.size();
    int value =Search_number(A, 0, n, B);
    return value;
}

 
int main()
{
    
    vector<int> A ={ 1, 3,3,3 ,3,3,5, 6};
    int B =3;
    vector<int> C = search(A, B);
    std::cout << C[0] <<C[1] <<std::endl;
    return 0;
}
