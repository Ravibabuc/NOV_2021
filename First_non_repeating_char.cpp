#include <iostream>
#include<vector>
#include <bits/stdc++.h>
using namespace std;

int getLargest(string A) 
{
    int n=A.size();
    int cArray[26] ={0};
    for(int i=0;i<n;i++)
    {
        cout<<" A[i]-'a' -26 "<<A[i]-'a' <<endl;
        cArray[A[i]-'a'] =  cArray[A[i]-'a' ] +1 ;
        
        
    }
    for(int i=0;i<26;i++)
    {
        if(cArray[i] ==1)
        {
            char c ='a'   +i;
        
            return c;
        }
    }
    return 0;
}

int main() 
{
   string A ="aaabc";
   char c= getLargest(A);
   cout<<" c ="<<c<<endl;
    return 0;
}
