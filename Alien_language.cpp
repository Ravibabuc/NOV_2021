#include <iostream>
#include<vector>
#include <bits/stdc++.h>
#include<string>
using namespace std;


 int mapping[26];

 int compare(string s1, string s2) {
        int n = s1.length(), m = s2.length(), cmp = 0;
        for (int i = 0, j = 0; i < n && j < m && cmp == 0; i++, j++) {
            cmp = mapping[s1.at(i) - 'a'] - mapping[s2.at(j) - 'a'];
        }
        return cmp == 0 ? n - m : cmp;
    }



int solve(vector<string> &A, string B) {

     for (int i = 0; i < B.length(); i++)
            mapping[B.at(i) - 'a'] = i;
            
            
      
        for (int i = 1; i < A.size(); i++)
            if (compare(A[i - 1], A[i]) > 0)
                return false;
        return true;
}


int main() 
{
  vector<string> A   = {"hello", "scaler", "interviewbit" };
  string B = "adhbcfegskjlponmirqtxwuvzy";
   int c= solve(A, B);
   cout<<" c ="<<c<<endl;
    return 0;
}
