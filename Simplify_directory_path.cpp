#include <iostream>
#include<vector>
#include <bits/stdc++.h>
using namespace std;


string simplifyPath(string A) 
{
    int n =A.size();
    vector<string> S;
    string Dir="";
    string ans="";
    //int j=0;
    //int i =0;
    for(int i =0;i<n;i++)
    {
        string Dir="";
        
        //cout<<"A[i]  "<<A[i] <<endl;
        while(i<n && A[i] !='/'  )
        {
           // cout<<"A[i]  "<<A[i] <<endl;
            Dir += A[i];
            i++;
            
        }
       
       if (Dir == "..") {
            if (!S.empty())
                S.pop_back();
       }
       
        else if (Dir == "." || Dir == "") {
            
        }
        else {
            
            S.push_back(Dir);
        }
        
        //cout<<"Dir "<<Dir<<endl;
    }
    for (auto i : S) {
        ans += "/" + i;
    }
 
    // vector is empty
    if (ans == "")
        return "/";
 
    
    
    return ans;
}


int main() 
{
   string A= "/a/./b/../../c/";
   
   string ans =simplifyPath( A);
   
   cout<<" ans "<<ans <<endl;
    return 0;
}
