/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <iostream>
#include <vector>
#include <bits/stdc++.h>

using namespace std;

int max_value (int a, int b)
{
    return a>b?a:b;
}

int solve1(vector<int> &A) {
    map<int, int> Map;
    map<int, int> ::iterator itr ,itr1;
    
    //std::map<std::string, int>::iterator it
    int n =A.size();
    for(int i =0;i<n;i++)
    {
        Map[A[i]] ++;
    }
    int count =0;
    int maxv= INT_MIN;
    for (itr = Map.begin();itr != Map.end();itr ++)
    {
     //   cout<<" itr->first "<<itr->first<<" itr-> second "<<itr-> second<<endl;
        if(itr-> second > 1 ) 
        {
            count += itr-> second -1;
        }
        maxv=max_value(maxv,itr->first );
    }
    
     int taken=0, ans=0;
    
    for (int x = 0; x < (count +maxv +n); x++)
    {
        
           if (Map[x] >= 2){
          taken += Map[x]-1;
          ans -= x*(Map[x]-1);
       
        }
           
          // If there is no x in the array
        else if(taken > 0 and Map[x] == 0)
        {
            ans += x;
            taken--;
        }
    }
   if (ans < 0) ans =1;
    
    return ans;
}



int solve(vector<int> &A) {
    map<int, int> Map;
    map<int, int> ::iterator itr , itr2;
    int count =0;
    //std::map<std::string, int>::iterator it
    int n =A.size();
    for(int i =0;i<n;i++)
    {
        Map[A[i]] ++;
    }
    
    for (itr = Map.begin();itr != Map.end();itr ++)
    {
        if(itr-> second > 1 ) 
        {
            count += itr-> second  -1;
            int next =itr-> second  -1;
            int nexv =itr-> first+1;
            itr-> second = itr-> second - itr-> second -1;
            
            itr2 = Map.find(nexv);
            
         
            if (itr2  != Map.end())
            {
                
                itr2-> second += next;
            }
            else
            {
                
                 Map.insert (pair<int, int>(nexv, next ));
                
                
                
            }
            
        }
    }
    
    
    return count;
}


int main()
{
   vector<int> A  = { 51, 6, 10, 8, 22, 61, 56, 48, 88, 85, 21, 98, 81, 76, 71, 68, 18, 6, 14, 23, 72, 18, 56, 30, 97, 100, 81, 5, 99, 2, 85, 67, 46, 32, 66, 51, 76, 53, 36, 31, 81, 56, 26, 75, 69, 54, 54, 54, 83, 41, 86, 48, 7, 32, 85, 23, 47, 23, 18, 45, 79, 95, 73, 15, 55, 16, 66, 73, 13, 85, 14, 80, 39, 92, 66, 20, 22, 25, 34, 14, 51, 14, 17, 10, 100, 35, 9, 83, 31, 60, 24, 37, 69, 62};
 //  vector<int> A  = { 1, 1, 1, 2, 2, 2,3};
   int C = solve(A);
  
   std::cout << C << std::endl;

    return 0;
}

