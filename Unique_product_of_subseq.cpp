#include <iostream>
#include<vector>
#include <bits/stdc++.h>
#include<string>
using namespace std;



int colorful(int A) 
{
    string S="";
    while(A )
    {
        
        S += (char)  (A % 10) + '0';
       // cout<<" s "<<S<<endl;
        A = A / 10;
    }
    
    int n =S.length();
        reverse(S.begin(), S.end());
    set <int> Set1;
    
    for(int i =0;i<n;i++ )
    {
        int prod =1;
        for (int j =i ;j< n;j++)
        {
           // cout<<" S[i] "<<S[j]<<endl;
            
            prod *=  (int)(S[j] - '0');
            //cout<<"prod "<<prod<<endl;
            
            if(Set1.find(prod) != Set1.end())
            {
              //  cout<<" found"<<endl;
                return 0;
            }
                
            else
                Set1.insert(prod);
        }
    }
    return 1;
}





int main() 
{
   int A =23; 
   int B ; /*  2068-03-16*/
   B= colorful(A);
   cout<<" B ="<<B<<endl;
    return 0;
}
