/******************************************************************************

                              Online C++ Compiler.
               Code, Compile, Run and Debug C++ program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <iostream>
#include <vector>


using namespace std;

int singleNumber( vector<int> &A) 
{
    int sum =0;
    int x =0;
    int ans =0;
    int n =A.size();
    for (int i =0;i < 31;i++)
    {
        x = 1 << i;
        int sum=0;
       // cout<<"x "<<x<<endl;
        for(int j =0;j<n;j++)
        {
           if(A[j] & x ) 
           {
                 sum ++;
           }
        }
        if (sum % 3 !=0 )
        {
            ans = ans | x;
        }
      //  cout<<"ans "<<ans<<endl;
    }
    return ans ;
}

int main()
{
     vector<int> A ={1, 1, 1, 2, 2, 2, 3, 3,3, 5};
    int sum1 = singleNumber(A);
    cout<<"sum1 : "<<sum1<<endl;

    return 0;
}
