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
    
    //cout<<"n ="<<n<<endl;
    for (int i =0;i<n;i++)
    {
        if(A[i]== '1')
            cnt ++;
    }
    if (n== cnt) return B;
    //cout<<"cnt array ="<<cnt<<endl;
    total=cnt;
    int cnt1=0;
    int cnt0=0;
    int ind1=-1;
    int ind2=-1;
    int indx1=-1;
    int indx2=-1;
    for(int i =0;i<n;i++)
    {
        ind1=i;
        cnt1=0;
        cnt0=0;
        for(int j =i;j<n;j++)
        {
            //cout<<"j ="<<j<<endl;
             //cout<<"cnt1 loop ="<<cnt1<<endl;
           //cout<<"cnt0 loop="<<cnt0<<endl;
            if(A[j] == '0') 
            {
                cnt0 ++;
            }
            else {
             cnt1 ++;
            }
            ind2=j;
            
             if(total < (cnt -cnt1 + cnt0))
            {
              // cout<<" hello1"<<endl;
               //cout<<" i "<< i<<endl;
               //cout<<" ind2 "<< ind2<<endl;
                total = (cnt  -cnt1 + cnt0);
                indx1=i;
                indx2=ind2;
            }
        }
        //cout<<"cnt1 ="<<cnt1<<endl;
         //cout<<"cnt0 ="<<cnt0<<endl;
        //cout<<"cnt va ="<<cnt<<endl;
        //cout<<"total dd ="<<total<<endl;
        //cout<<"(cnt -cnt1 + cnt0) ="<<(cnt -cnt1 + cnt0)<<endl;
        
        
      /*  if(total < (cnt -cnt1 + cnt0))
        {
           cout<<" hello1"<<endl;
           cout<<" i "<< i<<endl;
           cout<<" ind2 "<< ind2<<endl;
            total = (cnt  -cnt1 + cnt0);
            indx1=i;
            indx2=ind2;
        }*/
        
    }
 //   cout<<"indx1 ="<<indx1<<endl;
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
    string A = "110";
    vector<int> B = flip( A);
    cout<<"B[0] "<<B[0]<<" B[1] "<<B[1]<<endl;

    return 0;
}
