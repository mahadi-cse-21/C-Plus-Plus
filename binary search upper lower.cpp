#include<iostream>
using namespace std;
void f(int a[],int n)
{
    if(n==0)
    {
    }
    else

    {   cout<<a[n-1]<<" ";
        f(a,n-1);
    }
}
int bs(int a[],int n,int l,int r,int b)
{
    int mid=(l+r)/2;
    if(l==r) return mid;
    if(a[mid]<b) return bs(a,n,mid+1,r,b);
    else return bs(a,n,l,mid,b);
}
int lb(int a[],int n,int l,int r,int b)
{
    int mid=(l+r)/2;
    if(l==r) return mid;
    if(a[mid]>=b) return lb(a,n,l,mid,b);
    else return lb(a,n,mid+1,r,b);
}
int ub(int a[],int n,int l,int r,int b)
{
    int mid=(l+r)/2;
    if(l==r) return mid;
    if(a[mid]<=b) return ub(a,n,mid+1,r,b);
    else
        return ub(a,n,l,mid-1,b);
}
int main()
{
    int n;
    cin>>n;
    int a[n];
    for(int i=0; i<n; i++)
    {
        cin>>a[i];
    }
    int b;
    cin>>b;
    if(a[bs(a,n,0,n-1,b)]==b)
        cout<<bs(a,n,0,n-1,b)+1;
    else
        cout<<"not found.";
    cout<<endl;
    cout<<" lower bound = ";
    int k = lb(a,n,0,n-1,b);
    if(a[k]>b&&k>0) cout<<k-1;
    else if(a[k]>b&&k==0) cout<<"no lower bound";
    else cout<<k;
    cout<<endl;
    cout<<" upper bound = ";
    int p=ub(a,n,0,n-1,b);
    cout<<p;

    return 0;
}