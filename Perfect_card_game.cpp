#include <iostream>
#include<vector>
#include <bits/stdc++.h>
#include<string>
using namespace std;



string solve(vector<int> &A) 
{
    set<int> Set1;
    int count=0;
    int n =A.size();
    
    int cnt1=0;
    
    sort(A.begin(), A.end());
    
    int plr1=1;
    int plr2=0;
    int playerF=1;
    
     for(int i=0;i<n;i++)
    {
        if(Set1.find(A[i]) != Set1.end())
        {
            cnt1 ++;;
        }
        else {
            count ++;
            Set1.insert(A[i]);
        }
    }
    
    
    for(int i=1;i<n;i++)
    {
      
      if( playerF == 1)  
      {
        if(A[i]== A[i-1])
        {
            plr1 ++;
        
        }
        else {
            playerF =2;
            plr2 ++;
            continue;
        }
        
      }
       if( playerF == 2)  
      {
        if(A[i]== A[i-1])
        {
            plr2 ++;
        
        }
        else {
            playerF =1;
            plr1 ++;
        }
        
      }
        
    }
    
    
  /*cout<<" plr1 ="<<plr1<<endl;
  cout<<" plr2 ="<<plr2<<endl;
  cout<<" n ="<<n<<endl;
  cout<<" cnt1 ="<<cnt1<<endl;
  cout<<" count ="<<count<<endl;*/
   
   if (plr1==plr2 && count % 2== 0 && count ==2) return "WIN";
    else return "LOSE";
}





int main() 
{
   vector<int> A ={ 1, 1, 2, 2, 3, 3, 4, 4};
  // vector<int> A ={10, 20, 30, 20, 10, 20};
   string B ; 
   B= solve(A);
   cout<<" B ="<<B<<endl;
    return 0;
}
