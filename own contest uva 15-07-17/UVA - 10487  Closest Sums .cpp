#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n,q,i,j,k,sum,a,kase=0;

    int ara1[10000],ara2[10000];
    while(cin>>n)
    {
        if(n==0)
        {
            break;
        }
        for(i=0;i<n;i++)
        {
            cin>>ara1[i];
        }
        sort(ara1,ara1+n);
        cin>>q;
        printf("Case %d:\n",++kase);
        while(q--)
        {
            cin>>a;
            int mx=99999999;
            for(i=0;i<n;i++)
            {
                for(j=i+1;j<n;j++)
                {
                    sum=ara1[i]+ara1[j];
                    if(abs(sum-a)<mx)
                    {
                        mx=abs(sum-a);
                        k=sum;
                    }
                }
            }
            printf("Closest sum to %d is %d.\n",a,k);
        }
    }
}
