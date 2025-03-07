#include<iostream>
using namespace std;
void f(int a[],int n)
{
    for(int i=1; i<n; i++)
    {
        int index=i;
        int value=a[i];

        while(index!=0 && a[index-1]>value)
        {
              a[index]=a[index-1];
                index--;
            

        }
        
        a[index]=value;
    }
    

}
void p(int a[],int n,int k)
{
f(a,n);
   int l=0;
   int r=n-1;
   int mid=(l+r)/2;
   while (l<r && a[mid]!=k)
   {
   if(a[mid]>k)
   {
   r=mid-1;
   }
   else
   {
   l=mid+1;
   }
   mid=(l+r)/2;
   }
   if(a[mid]!=k)
   cout<<"not found";
   else
   cout<<mid+1;
   
}

int main()
{
    int n,k;
    cin>>n>>k;
    int a[n];
    for(int i=0; i<n; i++)
    {
        cin>>a[i];
    }
    
    p(a,n,k);
    return 0;
}