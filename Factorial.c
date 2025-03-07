#include<stdio.h>
int main()
{
    // display the factorial of x
    int x;
    scanf("%d",&x);


   // 5! = 5*4*3*2*1
    long long fact = 1;
    for(int i = x ;i>0;i=i-1)
    {
        fact = fact*i;
    }

    printf("%lld\n",fact);



    return 0;
}

