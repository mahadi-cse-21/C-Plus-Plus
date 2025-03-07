#include<bits/stdc++.h>
#include<algorithm>
#include<vector>
using namespace std;
vector<int>v[10000];
int visited[10000];

void dfs(int n)
{
    visited [n]=1;
    
    vector<int> :: iterator it;
    for( it=v[n].begin(); it<v[n].end(); it++)
    {
        if(visited[*it]) continue ;
        dfs(*it);
    }
}
int main()
{
    int n,e;
    cin>>n>>e;


    for(int i=1; i<n+1; i++)
    {
        visited [i]=0;
    }

    for(int i=1; i<=e; i++)
    {
        int x,y;
        cin>>x>>y;
        v[x].push_back(y);
        v[y].push_back(x);
    }
    if(e!=n-1)
        cout<<"NO\n";
    else
    {
        int cc=0;
        for(int i=1; i<=e; i++)
        {
            if(! visited[i])
            {
                cc++;
                dfs(i);
            }
        }
        if(cc==1)
        cout<<"YES\n";
        else
        {
        cout<<"NO\n";
        }
    }
    return 0;
}
