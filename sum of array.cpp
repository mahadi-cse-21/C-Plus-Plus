#include<iostream>
using namespace std;
int f(int a[],int n)
{

 if(n==0) return a[0];
 return a[n]+f(a,n-1);
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
    cout<<f(a,n-1);
    
    return 0;
}