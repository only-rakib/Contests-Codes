#include<bits/stdc++.h>
using namespace std;

int main()
{
    char str[100000];
    int ara[100000];
    int m,i,j,k,l,n;
    while(scanf("%d",&m)==1)
    {
        int cnt=0;
        getchar();
        gets(str);
        int len=strlen(str);
        memset(ara,0,sizeof(ara));
        int r=0,l=0;
        while(r<len)
        {
            if(cnt<=m)
            {
                if(ara[r]==0)
                    cnt++;

            }

        }
    }
}
