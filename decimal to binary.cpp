#include<bits/stdc++.h>
#include<algorithm>
using namespace std;

int main()

{
        int n;
        scanf("%d",&n);
        int count=0;
        int k=n;
        while(k!=0)
        {

            k=k/2;
            count++;
            
   
        }
        
           int a[count];
           int p=count;
           while(count>0)
           {
               count --;
               a[count]=n%2;
               n=n/2;
           }
   
        
        for(int i=0;i<p;i++)
        {
            cout<<a[i];
        }

    return 0;
}


    