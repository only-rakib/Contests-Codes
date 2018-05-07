#include<bits/stdc++.h>
using namespace std;
int ara[10000];
int gcd(int a, int b)
{
    if (a == 0)
        return b;
    return gcd(b%a, a);
}
int main()
{
    int i,j,m,p,q,n;
    double mx=0.0,ans;
    cin>>n;
    for(i=1; i<=n/2; i++)
    {
        for(j=n; j>=n/2; j--)
        {
            if(gcd(i,j)==1)
            {
                if(i+j==n)
                {
                    p=i;
                    q=j;
                    ans=q/p;
                    if(ans>mx)
                    {
                        p=i;
                        q=j;
                    }
                }
            }
        }
    }
    cout<<p<<" "<<q<<endl;
    //main();
}
