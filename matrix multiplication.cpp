#include<iostream>
using namespace std;
int main()
{
    int m,n,p;
    cin>>m>>n>>p;
    int a[m][n];
    int b[n][p];
    int s[m][p];
    printf("A\n");
    for(int i=0; i<m; i++)
    {
        for(int j=0; j<n; j++)
        {
            cin>>a[i][j];
        }
    }
    printf("B\n");
    for(int i=0; i<n; i++)
    {
        for(int j=0; j<p; j++)
        {
            cin>>b[i][j];
        }
    }
    printf("Multiplication of A and B:\n");
    for(int i=0; i<m; i++)
    {
        for(int j=0; j<p; j++)
        {
            int sum=0;
            for(int k=0; k<n; k++)
            {
                sum=sum+a[i][k]*b[k][j];
                
            }
            s[i][j]=sum;
        }
    }
    for(int i=0; i<m; i++)
    {
        for(int j=0; j<p; j++)
        {
            cout<<s[i][j]<<" ";
        }
        cout<<endl;
    }


    return 0;
}