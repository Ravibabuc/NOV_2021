/******************************************************************************

                              Online C++ Compiler.
               Code, Compile, Run and Debug C++ program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/
#include <iostream>
#include <vector>
#include <bits/stdc++.h>
using namespace std;



string convertToTitle(int A) 
{
    string S ="";
    string S1 ="";
    int Rem;
    int Quo;
    Rem = A % 26;
        
               // cout<<" Rem "<<Rem<<endl;
                //cout<<" Quo "<<Quo<<endl;
                
    if(Rem == 0 ) 
    {
        Rem =26;
        Quo = (A/26 )-1;
    }
    else Quo = A/26  ;

    if(Rem >=1 && Rem<=26)
    {
        S1 = ('A' + (char)Rem-1) ;
        S = S1 + S;
    }
   while (Quo> 26)
   {
       Rem = Quo % 26;
        
        if(Rem == 0 ) 
        {
            Rem =26;
            Quo = (Quo/26) -1;
        }
        else 
            Quo = Quo/26 ;
      //  cout<<" Rem "<<Rem<<endl;
        //    cout<<" Quo "<<Quo<<endl;
        if(Rem >=1 && Rem<=26)
        {
           S1 = ('A' + (char)Rem-1) ;
           S = S1 + S;
        }
       // cout<<" S "<<S<<endl;
    //    cout<<" S1 "<<S1<<endl;
        
   }
   if(Quo >=1 && Quo<=26)
    {
            S1 = 'A' + (char)Quo-1 ;
            S = S1 + S;
           
    }
   
     return  S;
}
 
int main()
{
    
    
    string B=    convertToTitle(980089);
    std::cout << B << std::endl;
    return 0;
}
