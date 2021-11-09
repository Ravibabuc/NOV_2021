#include <iostream>
#include<vector>
#include <bits/stdc++.h>
#include<string>
using namespace std;



string solve(string A) 
{
    string S[] = { "Jan", "Feb", "Mar", "Apr", "May", "Jun", "Jul", "Aug", "Sep", "Oct", "Nov", "Dec"};
    
    int n =A.length();
    string B="";
    string DD="";
    DD=A.substr(0,2);
    string DD1 ="";
    
    if(DD[0] >='0' &&  DD[0] <= '9' ) DD1 += DD[0];
    if(DD[1] >='0' &&  DD[1] <= '9' ) DD1 += DD[1];
    

     
    string MM=A.substr(n-8,3);
    string YY=A.substr(n-4,4);
 //   cout<<"DD1 "<<DD1<<endl;
   // cout<<"MM "<<MM<<endl;
    //cout<<"YYYY "<<YY<<endl;
    int month;
    for(int i =0;i<12;i++)
    {
        if(S[i] == MM)
        month =i+1;
    }
    //cout<<"month "<<month<<endl;
    string monS ="";
    
    if(month < 10 ) monS = "0" + to_string(month);
    else
    monS =  to_string(month);
  //  cout<<"monS " <<monS<<endl;
  
  
     if(DD1.length() ==1) DD1 = '0' + DD1;
    string Date = YY +"-" + monS + "-" + DD1;
    return Date;
}




int main() 
{
   string A ="3rd Jul 3532"; 
   string B ; /*  2068-03-16*/
   B= solve(A);
   cout<<" B ="<<B<<endl;
    return 0;
}
