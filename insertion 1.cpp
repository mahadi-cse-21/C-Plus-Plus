#include<iostream>
using namespace std;
void f(int a[],int n)
{
    for(int i=1; i<n; i++)
    {
        int index=i;
        int value=a[i];

        while(index!=0 && a[index]>value)
        {
              a[index]=a[index-1];
                index--;
            

        }
        
        a[index]=value;
    }
    for(int i=0; i<n; i++)
    {

        cout<<a[i]<<" ";
    }


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
    f(a,n);
    return 0;
}