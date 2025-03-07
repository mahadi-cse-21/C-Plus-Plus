#include<bits/stdc++.h>
#include<algorithm>
using namespace std;

int main()

{
        int r,g,b,r1=0,g1=0,b1=0;
        printf("Red:");
        scanf("%d",&r);
        printf("Green:");
        scanf("%d",&g);
        printf("Black:");
        scanf("%d",&b);
        if(r>255 ||g>255 || b>255)
        {
        cout<<"Invalid"<<endl;
        }
        else
        {
        cout<<"#";
        if(r==0)
        {
        cout<<"00";
        }
        else 
        {
        
        int red = r;
        while(red!=0)
        {
           red=red/16;
           r1++;
        }
        int Red [r1];
        for(int i=r1-1;i>=0;i--)
        {
           Red[i] = r % 16;
           r=r/16;
        }
        if(r1<2)
        {
        cout<<"0";
        }
        
        for(int i=0;i<r1;i++)
        {
           printf("%x",Red[i]);
           
        }
        }
        if(g==0)
        {
        cout<<"00";
        }
        else
        {
         int green = g;
        while(green!=0)
        {
           green=green/16;
           g1++;
        }
        
        int Green [g1];
        for(int i=g1-1;i>=0;i--)
        {
           Green[i] = g % 16;
           g=g/16;
        }
        if(g1<2)
        {
        cout<<"0";
        }
        for(int i=0;i<g1;i++)
        {
           printf("%x",Green[i]);
           
        }
        }
        if(b==0)
        {
        cout<<"00";
        }
        else
        {
        
        int black = b;
        while(black!=0)
        {
           black=black/16;
           b1++;
        }
        
        int Black [b1];
        for(int i=b1-1;i>=0;i--)
        {
           Black[i] = b % 16;
           b=b/16;
        }
        
       if(b1<2)
        {
        cout<<"0";
        }
        
        for(int i=0;i<b1;i++)
        {
           printf("%x",Black[i]);
           
        }
       
        }
        }
        
    return 0;
}


    