#include<iostream>
using namespace std;
int f(int b)
{
if(b==0) return 0;

return b%2+10*(f(b/2));
}

int main()
{
    int a;
    cin>>a;
    cout<<f(a);
    return 0;
}