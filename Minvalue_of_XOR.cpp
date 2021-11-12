#include <iostream>
#include<vector>
#include <bits/stdc++.h>
#include<string>
using namespace std;
int max_value (int a, int b)
{
    return a>b?a:b;
}


int min_value (int a, int b)
{
    return a<b?a:b;
}
void swap(int *a, int *b)
{
    int temp = *a;
    *a = *b;
    *b = *a;
}

int findMinXor(vector<int> &A) {


    
    
    int n =A.size();
    sort(A.begin(), A.end(), greater<int>());
    int ans =INT_MAX;
    int val=0;
    for (int i =1;i< n;i++)
    {
        val = A[i-1] ^ A[i];
        ans =min_value (ans, val );
        
    }
    return ans;
}




int main() 
{
  vector<int> A ={12, 4, 6, 2} ;
  //vector<int> A ={100, 94, 33, 20, 67, 91, 27, 17, 58, 96, 85, 36, 17, 2, 35, 95, 1, 73, 73, 18, 30, 83, 57, 39, 84, 89, 34, 89, 23, 67, 69, 83, 94, 100, 53, 12, 19, 12, 98, 79, 73, 48, 98, 91, 3, 52, 6, 98, 79, 59, 18, 19, 40, 75, 27, 5, 58, 42, 22, 86, 51};
 
   
    int C=6;
    int B  = findMinXor(A);
    
    cout<<" B ="<<B<<endl;
    return 0;
}
