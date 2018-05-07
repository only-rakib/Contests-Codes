#include<bits/stdc++.h>
using namespace std;
int div(long long  n)
{
    int cnt=0;
    for(long long i=1; i<=sqrt(n); i++)
    {
        if(n%i==0)
        {
            if(n/i==i)
            {
                cnt++;
            }
            else
                cnt+=2;
        }
    }
    return cnt;
}
int main()
{
    long long kase,test,i,j,k,l,root,low,up,mx,ans,indx,a,b;
    cin>>test;
    while(test--)
    {
        cin>>low>>up;
        a=min(low,up);
        b=max(up,low);
        mx=-1;
        for(i=a; i<=b; i++)
        {
            ans=div(i);
            if(ans>mx)
            {
                mx=ans;
                indx=i;
            }
        }
        /*if(mx>1)
            printf("Between %lld and %lld, %lld has a maximum of %lld divisors.\n",low,up,indx,mx);
        else*/
            printf("Between %lld and %lld, %lld has a maximum of %lld divisors.\n",low,up,indx,mx);
    }
}
