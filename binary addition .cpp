#include<bits/stdc++.h>
#include<algorithm>
using namespace std;

int main()

{
        int m,n,count=0,temp=0,sum1=0,sum2=0;
        scanf("%d %d",&m, &n);
        int p=m,q=n;
        while(p!=0)
        {
            p=p/10;
            count++;
        }
        while(q!=0)
        {
            q=q/10;
            temp++;
        }
        int a[count];
        int b[temp];
        int c=count;
        int t=temp;
        while(m!=0)
        {
            count--;
            a[count]=m%10;
            m=m/10;
            
            
        }
        while(n!=0)
        {
            temp--;
            b[temp]=n%10;
            n=n/10;
            
        }
        int m1=1;
        for(int i=c-1;i>=0;i--)
        {
          
         sum1=sum1+m1*a[i];
         m1=m1*2;
        }
        
        int m2=1,sum=0;
        for(int i=t-1;i>=0;i--)
        {
          
         sum2=sum2+m2*a[i];
         m2=m2*2;
        }
        sum = sum1 + sum2;
        p=sum;
        while(p!=0)
        {
            p=p/2;
            count++;
        }
        int s[count];
        
        for(int i=count-1;i>=0;i--)
        {
          s[i]=sum%2;
          sum=sum/2;
        }
        for(int i=0;i<count;i++)
        {
          cout<<s[i];
        }
        

    return 0;
}


    