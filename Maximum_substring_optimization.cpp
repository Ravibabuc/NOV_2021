/******************************************************************************

                              Online C++ Compiler.
               Code, Compile, Run and Debug C++ program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/
//https://www.mathsisfun.com/algebra/matrix-determinant.html
#include <iostream>
#include <vector>
#include <bits/stdc++.h>

using namespace std;

int max_value(int a, int b)
{
    return a > b ?a:b;
}


int min_value(int a, int b)
{
    return a < b ?a:b;
}

vector<int> flip(string A) 
{
    int n =A.size();
    int cnt=0;
    int total=0;
    vector<int> B;
    vector<int> pre;
    pre.resize(n);
    //cout<<"n ="<<n<<endl;
    for (int i =0;i<n;i++)
    {
        if(A[i]== '1')
            cnt ++;
    }
    if (n== cnt) return B;
    //cout<<"cnt array ="<<cnt<<endl;
    total=cnt;
    int ind1=-1;
    int indx1=-1;
    int indx2=-1;
    for(int i =0;i<n;i++)
    {
        if(A[i] == '0')
            pre[i] =1;
        else pre[i] =-1;
    }
    int sum = 0;
    ind1=0;
    for(int i =0;i<n;i++)
    {
      // cout <<" pre [i] ="<<pre[i]<<endl;
     // cout <<" sum  ="<<sum<<endl;
         if(pre[i] == 1)
        {
            
            if (sum <0)
            {
            //    cout<<" i ="<<endl;
                ind1=i;
                    sum =0;
                
            }
        }
      
        //if(sum==0)
          //  ind1=i;
            
        sum += pre[i];
        if( sum > 0)
        {
            if(total < cnt +sum)
            {
                total = cnt +sum;
                indx1 =ind1;
                indx2=i;
            }
        }
        cout <<" indx2  ="<<indx2<<endl;
       cout <<" indx1  ="<<indx1<<endl;
       cout <<" sumddd  ="<<sum<<endl;
       cout <<" total  ="<<total<<endl;
    }
    cout<<"total ="<<total<<endl;
    
    if(indx1 >=0 && indx2>=0)
    {
        B.resize(2);
        B[0]= indx1 +1;
        B[1]= indx2 +1;
    }
    return B;
}


int main()
{
    //string A = "1101010001";
    string A = "010";
    vector<int> B = flip( A);
    cout<<"B[0] "<<B[0]<<" B[1] "<<B[1]<<endl;

    return 0;
}
