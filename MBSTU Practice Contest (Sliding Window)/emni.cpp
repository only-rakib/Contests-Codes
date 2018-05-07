#include<bits/stdc++.h>
using namespace std;
//long long int ara[1000011];
long long digit[1000011];
long long int n,m,k;
int main()
{
    long long test,i,j,kase;
    char str[1000000];
    while(cin>>k && k!=0)
    {
        getchar();
        gets(str);
        n=strlen(str);
        memset(digit,0,sizeof(digit));
        long long r=0,l=0,cnt=0,dis,mn=0;
        while(r<n)
        {
            if(digit[str[r]-0]==0)
            {
                cnt++;
                if(str[r]==str[r-1]) digit[str[r]-0]++;
            }
            digit[str[r]-0]++;
            while(cnt==k && l<n)
            {
                mn=max(mn,r-l+1);
                if(digit[str[l]-0]==1)
                {
                    cnt--;
                }
                if(digit[str[l]-0]>0)
                {
                    digit[str[l]-0]--;
                }
                l++;
            }
            r++;
        }
        printf("%lld\n",mn);
    }
}
