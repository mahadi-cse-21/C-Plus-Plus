#include<iostream>
using namespace std;
void reverse(int a[],int n)
{
for(int i=0;i<n/2;i++)
{
int b=a[i];
a[i]=a[n-1-i];
a[n-1-i]=b;
}
for(int i=0;i<n;i++)
{
cout<<a[i]<<" ";
}


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
 reverse (a,n);
    return 0;
}