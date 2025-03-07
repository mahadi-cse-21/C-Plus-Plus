#include<iostream>
using namespace std;
void f(string a, int b)
{
    if(b==0)   cout<<a[0];
    else
    
     {
       cout<<a[b];
       f(a,b-1);
      }
}

int main()
{
    string s;
    cin>>s;
    int k = s.size();
    f(s,k);

    return 0;
}