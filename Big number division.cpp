#include <iostream>
#include <string>
using namespace std;

int main() {
    int t;
    cin>>t;
    int l=1;
    while(t--)
    {
        getchar();
        string s;
        cin>>s;
        long long  divisor;
        cin>>divisor;
        if(s[0]=='-')
        {
        s.erase(0,1);
        }
        if(divisor<0)
        {
        divisor=(-1)*divisor;
        }
        cout<<"Case "<<l<<": ";
        long long  dividend=0;
        long long  rest=0;
        for(int i=0; i!=s.size(); i++)
        {
            dividend = rest*10+s[i]-'0';
            rest = dividend % divisor;
        }
        if(rest==0)
        {
        cout<<"divisible"<<endl;
        }
        else
        {
        cout<<"not divisible"<<endl;
        }
        l++;
    }
    return 0;
}
