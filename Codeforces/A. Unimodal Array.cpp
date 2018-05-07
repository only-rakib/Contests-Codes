#include<bits/stdc++.h>
using namespace std;

int main()
{
    int ara[10000],arai[1000],arad[10000],aras[10000];

    int n,t,m,p,q,i,j,ck1,ck2,ck3;
    cin>>n;
    ara[0]=0;
    ara[n+1]=0;
    for(i=1;i<=n;i++)
    {
        cin>>ara[i];
    }
    ck1=0,ck2=0,ck3=0;
    m=0,p=0,q=0;
    for(i=0;i<n;i++)
    {
        if(ara[i]<ara[i+1])
        {
            arai[m++]=ara[i];

        }
        if(ara[i]==ara[i+1])
        {
            aras[p++]=ara[i];
        }
        if(ara[i]>ara[i+1])
        {
            arad[q++]=ara[i];
        }
    }
    for(i=0;i<m-1;i++)
    {
        if(arai[i]>=arai[i+1])
        {
            ck1=1;
            break;
        }
    }
    for(i=0;i<p-1;i++)
    {
        if(aras[i]!=aras[i+1])
        {
            ck2=1;
            break;
        }
    }
    for(i=0;i<q-1;i++)
    {
        if(arad[i]<=arad[i+1] )
        {
            ck3=1;
            break;
        }
    }
    if(ck1==0 && ck2 ==0 && ck3==0)
    {
        cout<<"YES"<<endl;
    }
    else
    {
        cout<<"NO"<<endl;
    }
    main();
}
