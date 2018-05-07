#include<bits/stdc++.h>
using namespace std;
#define root sqrt(2.0)
int main()
{
    double r,n,ok=0.0,d,len;
    int test;
    cin>>test;
    while(test--)
    {
        cin>>r;
        ok=0.0;
        while(r>.0000000001)
        {
            ok+=r;
            r/=root;
        }
        printf("%.1lf\n",ok);
    }
}
