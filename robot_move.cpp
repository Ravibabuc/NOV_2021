/******************************************************************************

                              Online C++ Compiler.
               Code, Compile, Run and Debug C++ program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <iostream>
#include <vector>

using namespace std;
int uniquePaths2(int A, int B)
{
    // If either given row number is first or given column
    // number is first
    if (A == 1 || B == 1)
        return 1;
  
    // If diagonal movements are allowed then the last
    // addition is required.
    return uniquePaths2(A - 1, B) + uniquePaths2(A, B - 1);
    // + numberOfPaths(m-1, n-1);
}


int uniquePaths1(int A, int B) {

     if(A == 1) return A;
    
    if(B == 1) return B;
     vector<vector<int> > Mat;
    int cnt=0;
    Mat.resize(A);
   

    for(int i =0;i< A;i++)
    {
            Mat[i].resize(B);
    }
    
    
    for(int i =0;i< A;i++)
    {
        for(int j =0;j< B;j++)
        {
            if( i ==0 || j ==0)
            {
                Mat[i][j]= 1;
            }
            else 
            {
                   Mat[i][j]= Mat[i][j-1] + Mat[i-1][j];
            }
            
        }
    }
    
    return Mat[A-1][B-1];
}

int uniquePaths(int A, int B)
{
 // which will be (m+n-2)! / (n-1)! (m-1)!
    int path = 1;
    for (int i = B; i < (A + B - 1); i++) {
        path *= i;
        path /= (i - B + 1);
                    cout<<" i = "<<i<<endl;

    }
    return path;

}

int uniquePaths3(int A, int B)
{
    // Create a 1D array to store results of subproblems
    int dp[B] = { 1 };
    dp[0] = 1;
  
    for (int i = 0; i < A; i++) {
        for (int j = 1; j < B; j++) {
            dp[j] += dp[j - 1];
            cout<<" j = "<<j<<endl;
        }
    }
  
    return dp[B - 1];
}


int main()
{
    //1234567890
    cout << uniquePaths(1, 2019345678)<<endl;

    return 0;
}
