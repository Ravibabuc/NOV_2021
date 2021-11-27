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

int solve(vector<int> &A)
{
    int n =A.size();
    int st=0;
    int ed =n-1;
    int mid;
    if(n ==1)
        return A[0];
    

    
    
    while(st<= ed)
    {
        mid = (st + (ed ))/ 2;
       // cout<<" mid "<<mid<<endl;
      //  cout<<" st "<<st<<endl;
      //  cout<<" ed "<<ed<<endl;


        
        if(A[mid] != A[mid +1] && A[mid] != A[mid-1])
        {
           // cout<<"2"<<endl;
            return A[mid];
        }
        
        else if( (A[mid] == A[mid +1]  &&  mid % 2 == 0) ||   (A[mid] == A[mid - 1]  && mid % 2 != 0) )
        {
          //  cout<<"3"<<endl;
            st = mid+1;
        }
        else  
        {
           // cout<<"4"<<endl;
                ed =mid-1;
        }
    }
    return -1;
}


int main()
{
   vector<int> A  = {1,1,2, 2, 3, 3,4,4, 5};
   int C = solve(A);
  
   std::cout << C << std::endl;

    return 0;
}

