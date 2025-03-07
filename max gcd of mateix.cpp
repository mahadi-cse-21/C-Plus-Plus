#include<iostream>
using namespace std;
int gcd(int a,int b)
{
    if(b%a==0) return a;
    return gcd(b%a,a);
}

int main()
{
    int r,c;
    cin>>r>>c;
    int a[r][c];
    for(int i=0; i<r; i++)
    {

        for(int j=0; j<c; j++)
        {
            cin>>a[i][j];
        }
    }
    int max =1;

    for(int i=0; i<r; i++)
    {
        int g=0;
        for(int j=0; j<c; j++)
        {
            g=gcd(g,a[i][j]);
        }
        cout<<g<<endl;;
        if(g>max)
        {
            max=g;
        }
    }
    cout<<max;
    return 0;
}