#include<bits/stdc++.h>
using namespace std;

int main()
{
    int ara[200][200];
    int csum[200][200];
    int linier[200];
    memset(ara,0,sizeof(ara));
    memset(csum,0,sizeof(csum));
    memset(linier,0,sizeof(linier));
    int row,col,i,j,x,y,k,m=0;
    cin>>row>>col;
    for(i=1;i<=row;i++)
    {
        for(j=1;j<=col;j++)
        {
            cin>>ara[i][j];
        }
    }
    for(i=1;i<=col;i++)
    {
        for(j=1;j<=row;j++)
        {
            csum[j][i]=csum[j-1][i]+ara[j][i];
        }
    }
    int mx=-888;
    for(i=1;i<=row;i++)
    {
        for(j=i;j<=row;j++)
        {
            for(k=1;k<=col;k++)
            {
                linier[k]=csum[j][k]-csum[i-1][k];
            }
            int sum=0;
            for(int x=1;x<=col;x++)
            {
                sum+=linier[x];
               /* if(sum<0)
                    sum=0;*/
                mx=max(mx,sum);
            }
        }
    }
    cout<<mx<<endl;
}
