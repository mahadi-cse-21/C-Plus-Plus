#include<bits/stdc++.h>
using namespace std;

int n;
int a[200];
void bottom_to_top(int index)
{
    if(index==1) return;
    if(a[index]>a[index/2]) swap(a[index],a[index/2]);
    bottom_to_top(index/2);
}
void top_to_bottom(int index,int n)
{
    if(index >n/2) return;
    int li = 2*index;
    int ri = 2*index+1;
    if(ri > n) ri = li;
    int lv = a[li];
    int rv = a[ri];
    int maxv = lv;
    int maxi = li;
    if(maxv<rv)
    {
        maxv = rv;
        maxi = ri;
    }
    if(maxv>a[index])
    {
        swap(a[maxi],a[index]); top_to_bottom(maxi,n);
    }
}

void heap_sort(int n)
{
    if(n==1) return;
    swap(a[n],a[1]);
    n--;
    top_to_bottom(1,n);
    heap_sort(n);
}
int main()
{
    cin>>n;
    for(int i=1; i<=n; i++)
    {
        cin>>a[i]; 
        bottom_to_top(i);
    }
    heap_sort(n);
    for(int i=1; i<=n; i++) cout<<a[i]<<" ";
    return 0;

}
