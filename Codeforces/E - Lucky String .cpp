#include<bits/stdc++.h>
using namespace std;

int main()
{
    int l,i,j,k,n,m;
    scanf("%d",&n);
    j=1;
    k=0;
    for(i=1;i<=n;i++)
    {
        if(i%(j+4)==0)
        {
            k=0 ;
            j=j+4;
        }
        printf("%c",'a'+k);
        k++;
    }
}
