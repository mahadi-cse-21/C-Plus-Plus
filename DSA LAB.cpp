#include<bits/stdc++.h>
using namespace std;
int visited[1000];
vector<int>adj[1000];
int dis[1000];
int par[1000];
vector<int>j;
map<string,int>mp;
int cnt=1;
void bfs(int s)
{
    queue<int>q;
    q.push(s);
    dis[s]=0;
    visited[s]=1;
    par[s]=-1;
    while(!q.empty())
    {
        int king = q.front();
        q.pop();
        for(int i=0; i<adj[king].size(); i++)
        {
            int prince=adj[king][i];

            if(!visited[prince])
            {
                visited[prince]=1;
                q.push(prince);
                dis[prince]=dis[king]+1;
                par[prince]=king;
            }
        }
    }
}
void print(int i)
{
    if(i==-1)
    {
        return;
    }
    print(par[i]);

    int l=i;
  for(auto it= mp.begin();it!=mp.end();it++)
  {
      if(it->second==l) {
        cout<<it->first<<"//";
        break;
      }
  }

}

int main()
{
    int e;
    cin>>e;
    getchar();
    for(int i=1; i<=e; i++)
    {
        string x,y;
        cin>>x>>y;
        int u,v;
        if(mp[x]==0)
        {
            mp[x]=cnt;
            cnt++;
        }
        if(mp[y]==0)
        {
            mp[y]=cnt;
            cnt++;
        }
        u=mp[x];
        v=mp[y];
        adj[u].push_back(v);

    }
    bfs(mp["C:"]);
    int ques;
    cin>>ques;
    getchar();
    for(int i=0; i<ques; i++)
    {
        string st;
        cin>>st;
        int tmp=0;
        for(auto it=mp.begin();it!=mp.end();it++)
        {
            if(it->first==st)
            {
                tmp=1;
               break;
            }
           // cout<<it->first<<" ";
        }
        if(tmp==0) cout<<"File not found"<<endl<<"-1"<<endl;
        else
        {

            int o = mp[st];
             print(o);

            cout<<endl<<dis[o]*2<<endl;
        }
    }

    return 0;
}
/*
9
Photos Maldives
C: Photos
Videos Memories
C: Videos
Memories sunset.mp4
Maldives Sea.jpg
Videos tour.mp4
C: Result.pdf
Photos Download
5
Sea.jpg
Memories
tour.mp4
Photos
Codes
*/
