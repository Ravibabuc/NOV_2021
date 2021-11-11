#include <iostream>
#include<vector>
#include <bits/stdc++.h>
#include<string>
using namespace std;
int max_value (int a, int b)
{
    return a>b?a:b;
}

void swap(int *a, int *b)
{
    int temp = *a;
    *a = *b;
    *b = *a;
}

vector<int> wave(vector<int> &A) 
{

    
    int n =A.size();
    sort(A.begin(), A.end());
    
    for(int i =0;i<n-1;i+=2)
    {
        swap(A[i], A[i+1] );
    }
   
    
    return A;
}




int main() 
{
   vector<int> A={1, 2, 3, 4};
  //vector<int> A ={100, 94, 33, 20, 67, 91, 27, 17, 58, 96, 85, 36, 17, 2, 35, 95, 1, 73, 73, 18, 30, 83, 57, 39, 84, 89, 34, 89, 23, 67, 69, 83, 94, 100, 53, 12, 19, 12, 98, 79, 73, 48, 98, 91, 3, 52, 6, 98, 79, 59, 18, 19, 40, 75, 27, 5, 58, 42, 22, 86, 51};
 
   
   
    vector <int> B  = wave(A);
    
    for(int i =0;i<B.size();i++)
    {
     cout <<" B [i] "<<B[i]<<endl;
    }
 //  cout<<" b ="<<b<<endl;
    return 0;
}
