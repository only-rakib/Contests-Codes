#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n,m,i,j;
    int fr[1000],rr[1000];
    double div[10000];
    while(cin>>n)
    {
        if(n==0) break;
        cin>>m;
        for(i=0;i<n;i++)
            cin>>fr[i];
        for(i=0;i<m;i++)
            cin>>rr[i];
        int k=0;
        for(i=0;i<n;i++)
        {
            for(j=0;j<m;j++)
            {
                div[k++]=(double)fr[i]/double(rr[j]);
            }
        }
        sort(div,div+k);
        double mx=0.0;
        for(i=1;i<k;i++)
        {
            mx=max((div[i]/div[i-1]),mx);
        }
        printf("%.2lf\n",mx);
    }
    return 0;
}
