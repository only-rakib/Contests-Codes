#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n,p,q,i,j,t,kase,take,sum;
    int ara[10000];
    cin>>kase;
    for(t=1;t<=kase;t++)
    {
        cin>>n>>p>>q;
        for(i=0;i<n;i++)
            cin>>ara[i];
        sort(ara,ara+n);
        take=0;
        sum=0;
        for(i=0;i<n;i++)
        {
            sum+=ara[i];
            if(sum<=q)
            {
                take++;
                if(take>=p)
                {
                    break;
                }
            }
            else
            {
                break;
            }
        }
        printf("Case %d: %d\n",t,take);
    }
    return 0;
}
