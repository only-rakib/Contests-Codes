#include<bits/stdc++.h>
using namespace std;
#define mx 1000005
int ara[mx];
vector<int>nod(mx,0);

void divisor()
{
    for(long long i=1; i<=mx; i++)
    {
        for(long long j=i; j<=mx; j=j+i)
        {
            ara[j]++;
        }
    }
    ara[0]=0;
}
int main()
{
    divisor();
    long long l,h,kase,t,i,mn;
    nod[0]=1;
    for(i=1;i<=mx;i++)
    {
        //cout<<nod[i]<<"::"<<nod[i-1]<<"::"<<ara[nod[i-1]]<<"::"<<ara[i-1]<<endl;
        nod[i]=nod[i-1]+ara[nod[i-1]];
    }
    cin>>kase;
    for(t=1; t<=kase; t++)
    {
        cin>>l>>h;
        mn=distance(lower_bound(nod.begin(),nod.end(),l),upper_bound(nod.begin(),nod.end(),h));
        //cout<<first-nod.begin()<<" "<<second-nod.end();
        printf("Case %lld: %lld\n",t,mn);
    }
}
