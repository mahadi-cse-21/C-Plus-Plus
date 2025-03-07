#include<iostream>
using namespace std;
int gcd(int a,int b)
{
    int k;
    while(a%b!=0)
    {
        k=a%b;
        a=b;
        b=k;

    }
    return b;
}

int main()
{
    int r, c ;
    cin>>r>>c;
    int a[r][c];
    for(int i=0; i<r; i++)
    {
        for(int j=0; j<c; j++)
        {
            cin>>a[i][j];
        }
    }
    int maxgcd=1;
    int k;
    for(int i=0; i<r; i++)
    {
        int g1=1;
        for(int j=i; j<c-1; j++)
        {
            for( int k=i+1; k<c; k++)
            {
                if(g1<gcd(a[i][j],a[i][k]))
                {
                    g1=gcd(a[i][j],a[i][k]);
                    cout<<g1<<endl;
                }
            }
        }
        if(maxgcd<g1)
        {
            maxgcd=g1;
        }
    }
    cout<<"Max gcd = "<<maxgcd;
    return 0;
}