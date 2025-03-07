#include<stdio.h>
int main()
{
    // show the sum of even from 0 - 100;

    int sum = 0;
    for(int i = 1; i<=100; i=i+1)
    {

        if(i%2==0)
        {
            sum = sum +i;
        }
        //   printf("i = %d , sum = %d\n",i,sum);
    }
    printf("Sum : %d\n",sum);

    // show the sum of even number from x to y


    int x,y;
    scanf("%d%d",&x,&y);

    sum = 0;

    for(int i = x; i<=y; i=i+1)
    {

        if(i%2==0)
        {
            sum = sum +i;
        }
        //   printf("i = %d , sum = %d\n",i,sum);
    }


        printf("Sum : %d\n",sum);

    return 0;
}
