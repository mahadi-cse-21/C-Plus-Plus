#include<bits/stdc++.h>
#include<algorithm>
using namespace std;
int main()

{
   int n;
   cin>>n;
    map<int,int>mp;
    for(int i=1;i<=n;i++)
    {
    int x;
    
     cin>>x;
     mp[x]++;
    }
    for(auto it:mp)
    {
      int a = it.first;
      int b = it.second;
      if(b!=3)
      {
        cout<<a<<endl;
      }
    }
    return 0;
}


    