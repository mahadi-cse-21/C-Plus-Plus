#include<iostream>
using namespace std;

int main()
{
    long long a,b,sum;
    while(1)
    {
        int count=0,carry=0;
        scanf("%lld%lld",&a,&b);
        if(a==0 && b== 0) break;
        else
        {
            while(1)
            {
                sum=a%10+b%10+carry;
                if(sum>9)
                {
                    count++;
                    carry=1;
                }
                a=a/10;
                b=b/10;
                if(a==0 || b==0){
                sum=a%10+b%10+carry;
                if(sum>9)
                {
                    count++;
                    carry=1;
                }
                 break;
                 }
            }
            if(count>0)
            printf("%d carry operations.\n",count);
            else
            printf("No carry operation.\n");
        }
    }
    return 0;
}