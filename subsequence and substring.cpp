#include<iostream>
#include<string.h>
#include<cstring>
using namespace std;

int main()
{
    string a;
    string b;
    getline(cin,a);
    getline(cin,b);
    if(a==b)
    {
        cout<<"substring\n subsequence";
    }
    else
    {
        int k=0;
        int l;
        int i;
        for(i=0; i<a.size(); i++)
        {
            if(a[i]==b[k])
            {
                k++;
            }

        }
        if(k==b.size()) cout<<"subsequence\n";
        else cout<<"not subsequence\n";
        int count=0;
        for(i=0; i<a.size(); i++)
        {
            if(a[i]==b[0])
            {
            
                int tmp=0;
                count=0;
                for(int j=i; j<i+b.size(); j++)
                {
                    if(a[j]==b[j-i])
                    {
                        tmp++;
                       //cout<<a[j]<<b[j]<<endl;
                        if(tmp==b.size())
                        {
                            
                            break;
                        }
                    }
                }
                int k=b.size();
                if(tmp==k)
                {
                    count=0;
                    break;
                }
                else
                {
                    count=1;
                }
            }

        }
        if(count==0) cout<<"substring";
        else
            cout<<"not substring";

    }


    return 0;
}