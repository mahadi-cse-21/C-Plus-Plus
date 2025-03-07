#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n;
        cin>>n;
        string s,s1;
        cin>>s;
        int p = sqrt(n);
        if(p*p!=n) cout<<"No"<<endl;
        else{
            for(int i=1;i<=p;i++)
            {
                for(int j=1;j<=p;j++)
                {
                    if(i==1||i==p||j==1||j==p) s1.push_back('1');
                    else s1.push_back('0');
                }

            }
            if(s==s1) cout<<"Yes"<<endl;
            else cout<<"No"<<endl;
        }
    }
    return 0;
}

