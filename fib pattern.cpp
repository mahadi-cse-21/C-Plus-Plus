#include<bits/stdc++.h>
#include<algorithm>
using namespace std;
int fib(int n)
{
   if (n==0 || n==1) return n;
   
     else
     
    return fib(n-1)+fib(n-2);
  

}

int main()

{
   int i;
   cin>>i;
   for(int k=0;k<i;k++)
   {
   for( int n=0; n<=k; n++)
   {
      cout<<fib(n)<<" ";
   }
   cout<<endl;
   }
   
    return 0;
}


    