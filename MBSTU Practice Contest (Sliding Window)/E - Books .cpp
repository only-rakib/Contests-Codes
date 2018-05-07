#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long  ara[100009];
    long long t,n,mx=0;
    cin>>n>>t;
    for(int i=0; i<n; i++)
        cin>>ara[i];
    long long l=0,r=0;
    long long sum=0;
    while(r<n)
    {
        if(sum<=t && r<n)
        {
            sum+=ara[r];
            r++;
        }
        else if(sum>t)
        {
            sum-=ara[l];
            l++;
        }
        if(sum<=t)
        {
            mx=max(mx,r-l);
        }
    }
    cout<<mx;
}
