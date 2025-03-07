#include<iostream>
using namespace std;
int f(int a[],int n)
{

if(n==1) return a[0];

return min  (a[n-1],f(a,n-2));

}
int k(int a[],int n)
{

if(n==1 ) return a[0];

return max  (a[n-1],k(a,n-2));

}

int main()
{
    int n;
    cin>>n;
    int a[n];
    for(int i=0;i<n;i++)
    {
    
    cin>>a[i];
    }
    cout<<"min="<<f(a,n)<<endl;
    cout<<"max="<<k(a,n)<<endl;
    return 0;
}