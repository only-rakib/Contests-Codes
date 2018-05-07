#include<bits/stdc++.h>
using namespace std;
int main()
{

    int ara[10000];
    int kase=0,sum=0,i,j,n,flag=1;
    while(cin>>n)
    {
        map<int , int>mp;
        //mp.clear();
        flag=1;
        for(i=1;i<=n;i++)
        {
            cin>>ara[i];
        }
        ara[0]=0;
        for(i=0;i<n;i++)
        {
            if(ara[i]>=ara[i+1])
            {
                flag=0;
                printf("Case #%d: It is not a B2-Sequence.\n",++kase);
                break;
            }
        }
        if(flag)
        {
            for(i=1;i<=n;i++)
            {
                for(j=i;j>=1;j--)
                {
                    sum=ara[i]+ara[j];
                    if(mp[sum]!=0)
                    {
                        flag=0;
                        printf("Case #%d: It is not a B2-Sequence.\n",++kase);
                        break;
                    }
                    else
                        mp[sum]=1;
                }
                if(flag==0)
                {
                    break;
                }
            }
        }
        if(flag)
            printf("Case #%d: It is a B2-Sequence.\n",++kase);
        printf("\n");
    }
    return 0;
}
