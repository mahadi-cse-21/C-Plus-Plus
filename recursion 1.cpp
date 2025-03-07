#include<iostream>
using namespace std;

#include<math.h>
int f(int a)
{
if(a==1) return 1;
return a+f(a-1);
}

int main()

{
   int a;
   cin>>a;
   cout<<f(a);
    return 0;
}

    