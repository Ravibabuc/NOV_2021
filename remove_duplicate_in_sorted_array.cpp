/******************************************************************************

                              Online C++ Compiler.
               Code, Compile, Run and Debug C++ program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <iostream>
#include <vector>


using namespace std;

int Maximum(int a, int b)
{
    return a > b ? a : b;
}
int Minmum(int a, int b)
{
    return a < b ? a : b;
}

vector<int> solve(vector<int> &A) {
    vector<int> B;
    int n =A.size();
    B.resize(n);
    B[0] =A[0];
    int j =1;
    for (int i =1;i<n;i++)
    {
        if (A[i] != A[i-1])
        {
            B[j]  =A[i];
            j++;
        }
            
    }
    B.resize(j);
    return B;
}

int main()
{
    vector<int> A ={1, 2, 2, 2, 4, 5,6};
    vector<int> C = solve(A);
    for(int i =0;i< C.size();i++)
    {
        std::cout << C[i] << std::endl;
    }
    return 0;
}

