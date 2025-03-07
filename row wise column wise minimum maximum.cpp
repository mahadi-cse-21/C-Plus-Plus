#include<iostream>
using namespace std;
int bn(int a[],int n,int s)
{
    int l=0;
    int h=n-1;
    int mid;
    while(l<h)
    {
        mid=(l+h)/2;
        if(a[mid]>=s)
        {
            h=mid;
        }
        else
        {
            l=mid+1;
        }
    }
    return l;
}
int  cnt(int a[],int n)
{
    int count=0;
    for(int i=1; i<n; i++)
    {
        int index=i;
        int value=a[i];
        while(index!=0&&a[index-1]>value)
        {
            a[index]=a[index-1];
            index--;
        }
        a[index]=value;
    }
    // cout<<endl;
    for(int i=0; i<n-2; i++)
    {
        for(int j=i+1; j<n-1; j++)
        {
            int k=j+1;
            int s=a[i]+a[j];
            int l=bn(a,n,s);
            if(a[l]>=s) l--;
            if(l>=k)
            {
                count=count+l-k+1;
            }


            //printf("%d %d %d count :%d l = %d\n",a[i],a[j],s,count,l);
        }
    }
    return count;

}


int main()
{
    int r,c;
    cin>>r>>c;
    int a[r][c];

    for(int i=0; i<r; i++)
    {
        for(int j=0; j<c; j++)
        {
            cin>>a[i][j];
        }
    }
    printf("Row wise print:\n");
    for(int i=0; i<r; i++)
    {
        for(int j=0; j<c; j++)
        {
            cout<<a[i][j]<<" ";
        }
        cout<<endl;
    }
    printf("Column wise print:\n");
    for(int j=0; j<c; j++)
    {
        for(int i=0; i<r; i++)
        {
            cout<<a[i][j]<<endl;
        }
        cout<<endl;
    }
    printf("Transpose :\n");
    for(int j=0; j<c; j++)
    {
        for(int i=0; i<r; i++)
        {
            cout<<a[i][j]<<" ";
        }
        cout<<endl;
    }
    if(r!=c)
    {
        printf("Not Sqare matrix.\n");
    }
    else
    {
        printf("Square matrix:\n");
        printf("principle diagonal:\n");
        for(int i=0; i<r; i++)
        {

            for(int j=0; j<c; j++)
            {
                if(i==j)
                {
                    cout<<a[i][j]<<" ";
                }
            }

        }
        cout<<endl;
        printf("Unprinciple diagonal:\n");
        for(int i=0; i<r; i++)
        {
            cout<<a[i][r-i-1]<<" ";
        }
    }
    cout<<endl;
    int max=-1;
    for(int i=0; i<r; i++)
    {
        int max1=-1;
        printf("max of %d th row:",i);
        for(int j=0; j<c; j++)
        {
            if(a[i][j]>max1)
            {
                max1=a[i][j];
            }
        }
        printf("%d\n",max1);
        if(max1>max)
        {
            max=max1;
        }
    }
    printf("maximum of this matrix is: %d\n",max);
    int min=10000000;
    for(int j=0; j<c; j++)
    {
        int min1=10000000;
        for(int i=0; i<r; i++)
        {
            if(min1>a[i][j])
            {
                min1=a[i][j];
            }
        }
        cout<<"minimum of "<<j<<" th column is "<<min1<<endl;
        if(min>min1)
        {
            min=min1;
        }
    }
    printf("minimum of this matrix is: %d\n",min);
    return 0;
}