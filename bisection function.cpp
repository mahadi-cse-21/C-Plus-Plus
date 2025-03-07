#include<iostream>
using namespace std;
float f(int a)
{
float l=0;
float r=a;
float mid;
while(r-l>0.00001 )
{
mid=(l+r)/2;
if(mid*mid>=a) r=mid;
else l=mid;

}

return mid;
}

int main()
{
int n;
cin>>n;
cout<<f(n);

    return 0;
}