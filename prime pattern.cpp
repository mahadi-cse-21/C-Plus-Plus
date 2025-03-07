#include<bits/stdc++.h>
#include<algorithm>
using namespace std;
int main()

{
   int  n;
   cin>>n;
   int p=1000000;
   int  a[p];
   for(int i=0;i<p;i++)
   {
        a[i]=0;
   }
   
   a[0]=1;
   a[1]=1;
   for(int  i=4;i<p;i=i+2)
   {
     a[i]=1;
   }
   for(int  i=3;i*i<p;i=i+2)
   {
   if(a[i]==1) continue;
    for(int j=i*i;j<p;j=j+2*i)
   {
     a[j]=1;
   }
   }
   int k[n+1];
   int i=1,j;
   
   for( j=0;j<100&&i<=n;j++)
   {
     if(a[j]==0)
     {
     
     k[i]=j;
     i++;
     }
   
   }
   
   for(i=1;i<=n;i++)
   {
       for(j=1;j<=i;j++)
       {
         cout<<k[j]<<" ";
       }
       cout<<endl;
   }
   
    return 0;
}


    