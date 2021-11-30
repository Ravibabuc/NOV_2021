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
           
            j++;
      
        }
        else if (A[i] < B[j])
        {
           
            i++;
        }
        else 
        {
            C[k] = A[i];
            i++;
            k++;
            j++;

        }
        
    }
    C.resize(k);
    return C;
}

int main()
{
   vector<int> A  = {1, 2, 3, 3, 4, 5 ,6 };
   vector<int> B  = {3, 3,5 };
   
   vector<int> C = solve(A, B);
   
   for(int i =0 ;i <C.size() ;i++)
   {
       std::cout << C[i] << std::endl;
   }

    return 0;
}
