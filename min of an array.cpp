#include<iostream>
using namespace std;
int f(int a[],int n)
{

if(n==1) return a[0];

return min  (a[n-1],f(a,n-2));

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
    cout<<f(a,n);
    return 0;
}