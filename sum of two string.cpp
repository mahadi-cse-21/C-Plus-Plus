#include <iostream>
#include<string.h>
#include <cstdio>
using namespace std;
int main()
{
    char a[200];
    char b[200];
    cin>>a>>b;
    int l1=strlen(a);
    int l2=strlen(b);
    int l;
    if(l1>l2)
    {
        l=l1;
    }
    else
    {
        l=l2;
    }
    l = l+2;
    int x=l1,y=l2;
    char c[l];
    int carry =0;
    int i;

    for( i=l-1; i>=1; i--)
    {
        if(x<0&&y<0)
        {
            break;
        }
        else if(x<0)
        {
            c[i]=(b[y]+carry-48)%10+48;

            if(b[y]+carry-48>9) carry=1;
        }
        else if (y<0)
        {
            c[i]=(a[x]+carry-48)%10+48;
            if(a[x]+carry-48>9) carry=1;
        }

        else
        {
            c[i]=(a[x]+b[y]+carry-96)%10+48;
            if(a[x]+b[y]+carry-96>9) carry=1;

        }
        x--;
        y--;
    }
    if (carry>0)
    {
        c[i]=carry+48;

    }
    else
    {
        i=i+1;
    }

    for(; i<l-1; i++)
    {
        printf("%c",c[i]);
    }




    return 0;
}