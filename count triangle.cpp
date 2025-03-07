#include<iostream>
#include<algorithm>
using namespace std;
int f(int a[],int n,int s,int k)
{
    int l=k;
    int h=n-1;
    int mid = (l+h)/2;

    while(l<h&&a[mid]!=s)
    {
        if(a[mid]>s) h=mid-1;
        else if(a[mid]<s) l=mid+1;
        mid = (l+h)/2;
    }
    return mid;
}

int main()
{
    int t,tmp=0;
    scanf("%d",&t);
    while(t--)
    {
        int n,count=0;
        cin>>n;
        int a[n];
        for(int i=0; i<n; i++)
        {
            cin>>a[i];
        }
        sort(a,a+n);
        for(int i=0; i<n-2; i++)
        {
        
            for(int j=i+1; j<n-1; j++)
            {
            
                int k=j+1;
                cout<<a[i]<<" "<<a[j]<<" ";
                int s=a[i]+a[j];
                int p=f(a,n,s,k);
                cout<<i<<j<<k<<p<<" ";
              //  while(k<=p && a[k]<s)
           //     {
                    // cout<<a[i]<<" "<<a[j]<<" "<<a[k]<<" "<<endl;
                 if (p>j+1)   count = count + p - j-1;
                    cout<<count<<endl;
             //       k++;
             //   }
            }
        }
       // printf("Case %d: %d\n",++tmp,count);
    }
    return 0;
}