#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long  ara[100009];
    long long t,n,mx;
    while(cin>>n>>t)
    {
        mx=999999999999;
        for(int i=0; i<n; i++)
            cin>>ara[i];
        long long l=0,r=0;
        long long sum=0;
        while(r<n)
        {
            sum+=ara[r];
            while(sum>=t)
            {
                mx=min(mx,r-l+1);
                sum-=ara[l];
                l++;
            }
            r++;
        }
        if(mx==999999999999) mx=0;
        cout<<mx<<endl;
    }
}
