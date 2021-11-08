#include <iostream>
#include<vector>
#include <bits/stdc++.h>
using namespace std;

int gcd(int a, int b)
{
    if (a==0 ) return b;
    return gcd(b%a, a);
}

int BinarySearch(vector<int> A, int B)
{
    int low =0;
    int upper = A.size();
    int mid = (low + upper) /2;
    
    
    
    while(low < upper)
    {
        if(A[mid] > B)
        {
            upper=mid+1;
        }
        else if(A[mid] < B)
        {
            low = mid;
        }
        else {
            return mid;;
        }
    }
    
    
    return -1;
}

int min_value(int a, int b)
{
    return a < b ? a : b;
}

int solve(vector<vector<int> > &A, int B) {
    
    int n =A.size();
    int m = A[0].size();
    int smal;
    int larg;
    smal= A[0][0];
    larg =A[n-1][m-1];
    
    if( B < smal || B > larg) 
        return -1;
    
    
    int j = m-1;
    int i = 0;
    int found =0;
    
     int indx1 = INT_MAX;
         int   indx2 = INT_MAX;
    
    while(i <n && j>=0)
    {
         if (A[i][j] == B)
        {
            found =1;
            
            indx1 = min_value(indx1, i);
            indx2 = min_value(indx2, j);
           
            
        }
        if (A[i][j] > B|| A[i][j] == B)
            j--;
       
        // Check if mat[i][j] < x
        else
            i++;
        
        if( i > indx1 && found ==1)
        {
            break;
        }

        
    }
     if (found ==1)
        return ( ((indx1+1) * 1009) + (indx2+1));
    return -1 ;
}
int main() 
{
  vector<vector<int> >  A = { {2, 8, 8, 8},{2, 8, 8, 8},{2, 8, 8, 8} };
  int B = 8;
   int c= solve(A, B);
   cout<<" c ="<<c<<endl;
    return 0;
}
