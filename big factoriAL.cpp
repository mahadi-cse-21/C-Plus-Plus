#include<bits/stdc++.h>
using namespace std;

int main(){
   int c;
   cin>>c;
float sum=0;
for(int i=1;i<=c;i++)
{
   sum=sum+log10(i);
 
}
long  double c= pow(10,sum);
cout<<c;

}