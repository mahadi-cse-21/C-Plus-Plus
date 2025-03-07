#include<iostream>
using namespace std;
int f(int s)
{
    if(s==0) return 0;
    


    return s%10+f(s/10) ;
}

int main()
{
    int s;
    cin>>s;
    cout<<f(s);
    return 0;
}