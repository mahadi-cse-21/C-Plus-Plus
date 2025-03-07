#include<iostream>
#include<math.h>
using namespace std;
double abc(double p)
{
    
    double l=0.0;
    double h=p;
    double mid;
    while(h-l>0.000000001 )
    {   mid=(l+h)/2;
    
        if((mid*mid)>p)
        {
            h=mid;
        }
        else
        {
            l=mid;
        }
        

    }
    return mid;
}




int main()
{
      int t,count=0;
      scanf("%d",&t);
      while(t--)
      {
    double ab,ac,bc,r;
    scanf("%lf %lf %lf %lf",&ab,&ac,&bc,&r);
    double p=(ab+bc+ac)/2;
    
   p=p*(p-ab)*(p-ac)*(p-bc);
  
    double m=abc(p);
     
    double height=(2*m)/bc;
     double n=m/(r+1);
      double o=n*r;
      double h=abc((height*2*o)/bc);
      double de = (2*o)/h;
      double ad = (de/bc)*ab;
      
      printf("Case %d: %lf\n",++count,ad);
    }
    return 0;
}