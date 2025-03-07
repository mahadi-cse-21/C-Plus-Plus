#include<stdio.h>
#include<limits.h>
int main()
{
    int n;
    scanf("%d",&n);
    int max=-INT_MAX;
    int min=INT_MAX;
    for(int i=1;i<=n;i++)
    {
     int a;
     scanf("%d",&a);
     if(a>max) { max = a;  }
     if(a<min) {  min = a;  }

    }

    printf("MAX = %d\nMIN = %d",max,min);
    return 0;
}
/*
4 8 56 8 5
*/
//max=56
///min=4
