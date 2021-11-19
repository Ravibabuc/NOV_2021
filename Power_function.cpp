/******************************************************************************

                              Online C++ Compiler.
               Code, Compile, Run and Debug C++ program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <iostream>
#include <vector>
#include<bits/stdc++.h>

using namespace std;

int power_val(int x, int n)
{
    int mod=1000000007;
    
     //cout<<" hello 3"<<endl;
    if (n == 0) return 1;
    if (n == 1) return x;

    if (x ==0) return 0;
    
   // cout<<" hello 4"<<endl;
    
    if( n % 2 ==0 )
    {
        
        cout<<" n11 ="<<n<<endl;
        return  power_val(x , n /2 ) * power_val(x , n /2 ) ;
        
        cout<<" return 11 ="<<n<<endl;
    }
    else
    {
        cout<<" n22 ="<<n<<endl;
        
        return x * power_val(x , n -1 ) ;
        
        cout<<" return 22 ="<<n<<endl;
    }
}


int main()
{
    int B=26;
    int ans =power_val(2, 10);
    cout <<"ans =" <<ans<<endl;

    return 0;
}
