#include<iostream>
using namespace std;
int f(int a[],int b)
{
    if(b==0) return a[b];
    return a[b]+f(a,b-1);
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
    
    
    cout<<f(a,n-1);


    return 0;
}