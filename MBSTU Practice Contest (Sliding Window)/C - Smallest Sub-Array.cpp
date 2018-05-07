#include<bits/stdc++.h>
using namespace std;
long long int ara[1000011];
long long digit[1000011];
long long int n,m,k;
void seq()
{
    for(long long i=4; i<=n; i++)
    {
        ara[i]=(ara[i-1]+ara[i-2]+ara[i-3])%m+1;
    }
}
int main()
{
    long long test,i,j,kase;
    cin>>test;
    for(kase=1; kase<=test; kase++)
    {
        cin>>n>>m>>k;
        memset(ara,0,sizeof(ara));
        memset(digit,0,sizeof(digit));
        ara[1]=1;
        ara[2]=2;
        ara[3]=3;
        seq();
        long long r=1,l=1,cnt=0,dis,mn=9999999999,in=0;
        while(r<n)
        {
            if(ara[r]<=k && r<=n)
            {
                if(digit[ara[r]]==0)
                {
                    //cout<<"r ="<<r<<" ara[r]="<<ara[r]<<" digit[ara[r]]="<<digit[ara[r]]<<endl;
                    cnt++;
                }
                digit[ara[r]]++;
                //cout<<digit[ara[r]]<<"::"<<ara[r]<<endl;
            }
            while(cnt==k)
            {
                //cout<<cnt<<":::::"<<l <<"  "<<r<<endl;
                mn=min(mn,r-l+1);
                if(digit[ara[l]]==1)
                {
                    cnt--;
                }
                if(digit[ara[l]]>0)
                {
                    digit[ara[l]]--;
                }
                l++;
            }
            r++;
        }
        if(mn==9999999999)
            printf("Case %lld: sequence nai\n",kase);
        else
            printf("Case %lld: %lld\n",kase,mn);
    }
}
/**input
4
20 12 4
20 12 8
20 3 3
20 12 5
output
13
sequence nai
3
13
*/
