#include <iostream>
using namespace std;

int main()
{   printf("The number of variable:\n");
    int p;
    cin>>p;
    int n;
    printf("Enter the number of minterms:\n");
    cin>>n;
    printf("Enter the minterms:\n");
    int a[100];
    for(int i=0; i<n; i++)
    {
        int k;
        a[i]=0;
        cin>>k;
        a[k]++;
    }
    if(p==2)
    {
        int flag=0;
        if(n==4) cout<<1;
        else
        {
            if(a[0]==1&&a[1]==1)
            {

                cout<<"~A";
                flag=1;
            }

            if(a[0]==1&&a[2]==1)
            {
                if(flag==1) cout<<"+";
                cout<<"~B";
                flag=1;
            }
            if(a[1]==1&&a[3]==1)
            {
                if(flag==1) cout<<"+";
                cout<<"B";
                flag=1;
            }
            if(a[2]==1&&a[3]==1)
            {
                if(flag==1) cout<<"+";
                cout<<"A";
                flag=1;
            }
            if(a[0]==1&&a[1]==0&&a[2]==0)
            {
                if(flag==1) cout<<"+";
                cout<<"~A~B";
                flag=1;
            }
            if(a[3]==1&&a[1]==0&&a[2]==0)
            {
                if(flag==1) cout<<"+";
                cout<<"AB";
                flag=1;
            }
            if(a[2]==1&&a[1]==0&&a[3]==0)
            {
                if(flag==1) cout<<"+";
                cout<<"A~B";
                flag=1;
            }
            if(a[1]==1&&a[0]==0&&a[3]==0)
            {
                if(flag==1) cout<<"+";
                cout<<"~AB";
                flag=1;
            }
        }
    }
    return 0;
}
