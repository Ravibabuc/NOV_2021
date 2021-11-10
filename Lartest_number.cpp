#include <iostream>
#include<vector>
#include <bits/stdc++.h>
#include<string>
using namespace std;

int myCompare(string X, string Y)
{
    // first append Y at the end of X
    string XY = X.append(Y);
 
    // then append X at the end of Y
    string YX = Y.append(X);
 
    // Now see which of the two
    // formed numbers is greater
    return XY.compare(YX) > 0 ? 1 : 0;
}

string largestNumber(const vector<int> &A) 
{
    vector<string> S={""};
    
    string k="";
    string lar="";
    int n =A.size();
    S.resize(n);
    
      int count =0;
    for(int i=0;i<n;i++)
    {
        if(A[i] == 0 )
        {
            count ++;
        }
    }
    for (int i =0;i< n;i++) 
    {
        
       S[i]   = to_string(A[i]);  
      // cout<<"S[i]  "<<S[i]<<endl;
    }
    
  
    if (n == count) return "0";
    
    sort(S.begin(), S.end(), myCompare);
    //cout <<" dd "<<endl;
     for (int i =0;i< n;i++) 
    {
        lar += S[i];
       // cout<<"S[i]  "<<S[i]<<endl;
    }
    
    
    return lar;
}

 




int main() 
{
  vector<int> A ={0, 0, 0, 0, 0};
 
   string S = largestNumber(A);
   cout<<" S ="<<S<<endl;
    return 0;
}
