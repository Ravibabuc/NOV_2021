#include <iostream>
#include<vector>
#include <bits/stdc++.h>
using namespace std;

string getLargest(string A) 
{
    int n=A.size();
    string str1;
    string str2;
    //str1.resize(n);
   // str2.resize(n);
    
    int size=0;
    str1="";
    for(int i=0;i<n && A[i] != '_';i++)
    {
        str1+= A[i];
        size++;
    }
   
     
     str2 ="";
     for(int i=size+1;i<n ;i++)
    {
       str2 += A[i];
    }
    int swap =0;
    
    sort(str2.begin(), str2.end());

     for(int i=0;i<size  ;i++)
     {
         for(int j=str2.size()-1;j>= 0; j--)
         {
 //            cout <<"str2[j] "<<str2[j]<<endl;
             if(str1[i] < str2[j])
             {
                 str1[i]=str2[j];
                 str2[j]='0' ;
                 swap ++;
                // break;
             }
         }
         if(swap > str2.size()-1) {
             break;
         }
     }
     
    //cout<<str1<<endl;
    //cout<<str2<<endl;
    return str1;
}

int main() 
{
   string A= "xldyzmsrrwzwaofkcxwehgvtrsximxgdqrhjthkgfucrjdvwlr_xfpidmmilhdfzypbguentqcojivertdhshstkcysydgcwuwhlk";
   
   string ans =getLargest( A);
   
   cout<<" ans "<<ans <<endl;
    return 0;
}
