#include<iostream>
using namespace std;
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
    printf("row wise sort:\n");
    for(int i=0; i<r; i++)
    {
        for(int j=1; j<c; j++)
        {
            int index=j;
            int value=a[i][j];
            while(index!=0&&a[i][index-1]>value)
            {
                a[i][index]=a[i][index-1];
                index--;
            }
            a[i][index]=value;
        }
        for(int j=0; j<c; j++)
        {
            cout<<a[i][j]<<" ";
        }
        cout<<endl;
    }
    for(int j=0; j<c; j++)
    {
        for(int i=1; i<r; i++)
        {
            int index=i;
            int value=a[i][j];
            while(index!=0&&a[index-1][j]>value)
            {
                a[index][j]=a[index-1][j];
                index--;
            }
            a[index][j]=value;
        }
    }
    printf("column wise sort:\n");
    for(int i=0; i<r; i++)
    {
        for(int j=0; j<c; j++)
        {
            cout<<a[i][j]<<" ";
        }
        cout<<endl;
    }

    return 0;
}