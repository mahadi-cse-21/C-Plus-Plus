/*  C++ code to generate all possible subarrays/subArrays
    Complexity- O(n^3) */
#include<bits/stdc++.h>
using namespace std;

// Prints all subarrays in arr[0..n-1]
int subArray(int a[], int n)
{
    int count=0;

    // Pick starting point
    for (int i=0; i <n; i++)
    {
        // Pick ending point
        for (int j=i; j<n; j++)
        {
            // Print subarray between current starting
            // and ending points
            for (int k=i; k<=j; k++)
            {

                if(a[k]%2==0)
                {
                    count++;
                  break;

                }
            }

        }
    }

    return count;
}

// Driver program
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n;
        cin>>n;
        int a[n];
        int tmp=0;
        for(int i=0; i<n; i++)
        {
            cin>>a[i];
            if(a[i]%2!=0&&tmp==0)
            {
                a[i]=a[i]+1;
                tmp=1;
            }

        }

        int count= subArray(a, n);
        cout<<count<<endl;
    }


    return 0;
}
