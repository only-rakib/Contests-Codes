#include<bits/stdc++.h>
using namespace std;

int main()
{
    long long n,k,mx,mn;
    cin>>n>>k;
    if(n>1 && n!=k)
    {
        int ans=n/3;
        ans=n-ans
        int h=ans,l=0,mid;
        while(ans>=k)
        {
            ans=ans/2;
        }
        if(ans>k)
        {
            mx=ans/3+1;
            mn=1;
        }
        else
        {
            mx=ans+1;
            mn=1;
        }
    }
    else if(n==k || n==0 || n==1)
    {
        mx=0;
        mn=0;
    }

    cout<<mn<<" "<<mx<<endl;
    main();
}
