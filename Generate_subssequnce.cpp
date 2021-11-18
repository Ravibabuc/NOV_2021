/******************************************************************************

                              Online C++ Compiler.
               Code, Compile, Run and Debug C++ program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <iostream>
#include <vector>
#include<bits/stdc++.h>

using namespace std;

int solve(vector<int> &A, int B) 
{
    int n =A.size();
    int subS= pow(2, n) -1;
    int cnt =0;
    int ans=0;
    int sum =0;
    cout<<"subS "<<subS<<endl;
    
    for(int i =1;i<= subS;i++)
    {
        for(int j =0;j<n;j++)
        {
            if(i & ( 1 << j))
            {
             //  cout<<A[j]<<" ";
                sum = sum +A[j];
                cnt ++;
            }
        }
      //  cout<<endl;
        //cout<<"cnt "<<cnt<<endl;
        if( cnt == B && sum <=1000)
        {
            ans ++;
            
        }
        cnt =0;
        sum=0;
    }
    
    return ans ;
}


int main()
{
    vector<int> A = {309, 326, 414, 137, 919, 123, 207, 149, 731, 419, 640, 105, 369};
    int B=4;
    int ans =solve(A, B);
    cout <<"ans =" <<ans<<endl;

    return 0;
}
