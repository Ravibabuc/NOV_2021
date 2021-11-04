/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <iostream>
#include<vector>
#include <bits/stdc++.h>
using namespace std;

int max_value(int a, int b)
{
    return a > b ?a:b;
}


int min_value(int a, int b)
{
    return a < b ?a:b;
}


int Gcd(int a, int b)
{
    int ans=0;
    for(int i =min_value(a, b);i>=0;i--)
    {
        if(b % i ==0)
        {
            ans=i;
            break;
        }
    }
    cout<<ans<<endl;
    return ans;
}



int Gcd1(int a, int b)
{
    if(b==0) return a;
    else return Gcd1(b, a%b);
}


vector<int> solve(vector<int> &A) 
{
    int n =A.size();
 
   sort(A.begin(), A.end(), greater<int>());
 
    int freq[A[0] + 1] = { 0 };
 
    // Count frequency of each element
    for (int i = 0; i < n; i++)
    {
       // cout<<" A[i] "<<A[i]<<endl;
        //cout<<" freq[A[i]] "<<freq[A[i]]<<endl;
        freq[A[i]]++;
    }
 
    // Size of the resultant array
    int size = sqrt(n);
    int  x, l = 0;
    
    vector<int> brr ;
    brr.resize(size);
 
    for (int i = 0; i < n; i++) {
        if (freq[A[i]] > 0) {
 
            // Store the highest element in
            // the resultant array
            brr[l] = A[i];
 
            // Decrement the frequency of that element
            freq[brr[l]]--;
            l++;
            for (int j = 0; j < l; j++) {
                if (i != j) {
 
                    // Compute GCD
                    x = Gcd1(A[i], brr[j]);
                   // cout<<"x "<<x<<endl;
                    // Decrement GCD value by 2
                    freq[x] -= 2;
                }
            }
        }
    }
 
    return brr;
}


int main()
{
    vector<int> A={1, 31, 1, 1, 1, 1, 14, 2, 1, 1, 1, 2, 22, 1, 11, 1, 1, 1, 1, 23, 1, 1, 11, 1, 11};
    vector<int> B= solve(A) ;
    int n =B.size();
    for(int i =0;i<n;i++)
        cout<<B[i]<<endl;
    return 0;
}
