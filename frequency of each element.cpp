#include<iostream>
#include<algorithm>
using namespace std;
void duplicacy(int a[],int n)
{

    int count;
    for(int i=0; i<n; i++)
    {
        count=0;
        for(int j=i; j<n; j++)
        {
            if(a[i]==a[j])
            {
                count++;
            }
        }
         cout<<a[i]<<" "<<count<<endl;
        i=i+count-1;
        
        
        
    }



}

int main()
{
    int n;
    cin>>n;
    int a[n];
    for(int i=0; i<n; i++)
    {
        cin>>a[i];
    }
    //array must  sort


    duplicacy(a,n);



    return 0;
}