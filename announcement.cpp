#include<bits/stdc++.h>
#include<algorithm>
#include<vector>
using namespace std;

int main()

{
    int t;
    while(t--)
    {
        int n,p;
        cin>>n>>p;
        int a[n+1],b[n+1];
        for(int i=1;i<=n;i++)
        {
           cin>>a[i];
        }
        for(int i=1;i<=n;i++)
        {
           cin>>b[i];
        }
        vector<pair<int,int>>v;
        for(int i=1;i<=n;i++)
        {
           v.push_back({a[i],b[i]});
        }
        sort(v.begin(),v.end());
        int sum=0;
        int cost = 0;
        
        while (p!=0)
        {
        
          sum=sum+v.first(n);
          
          p=p-v.first(n);
          cost = cost + v.second(n);
          n--;
        }
        cout<<cost<<endl;
    }
        
    return 0;
}


    