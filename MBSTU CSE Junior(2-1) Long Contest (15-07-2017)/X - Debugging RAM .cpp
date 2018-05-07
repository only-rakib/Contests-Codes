#include<bits/stdc++.h>
using namespace std;
long long power (int b, int p)
{
    long long sum = 1;

    for ( int i = 1; i <= p; i++ )
        sum *= b;

    return sum;

}

unsigned long long  convert_deci (string s)
{
    unsigned long long sum = 0;
    int len = s.length () - 1;

    for ( int i = len; i >= 0; i-- )
        sum += (power (2, i) * (s [len - i] - '0'));

    return sum;
}

int main()
{
    int a,b,i,j,q;
    while(cin>>a>>b)
    {
        string ss[1000];
        string bit[1000];
        string name;
        int ara[10000];
        unsigned long long result[10000];
        string cpy[1000]="";
        int sum=0;
        for(i=1; i<=b; i++)
        {
            cin>>ss[i]>>ara[i];
            sum+=ara[i];
        }
        for(i=1; i<=sum; i++)
        {
            cin>>bit[i];
        }
        int x;
        int in=1;
        for(i=1; i<=b; i++)
        {
            x=ara[i];
            for(j=in; j<=x+in-1; j++)
            {
                cpy[i]=cpy[i]+bit[j];
            }
            result[i]=convert_deci(cpy[i]);
            in+=x;
        }
        cin>>q;
        while(q--)
        {
            int ck=1;
            cin>>name;
            for(i=1; i<=b; i++)
            {
                if(ss[i]==name)
                {
                    cout<<ss[i]<<"="<<result[i]<<endl;
                    ck=0;
                    break;
                }
            }
            if(ck)
                cout<<name<<"="<<endl;
        }
    }
}
